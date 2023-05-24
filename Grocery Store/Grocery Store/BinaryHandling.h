#pragma once
#include"Store.h"
//Customer
void insertCustomerObject(Customer_Registration& obj) {

    ofstream Fout("Customer_Registration.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
    Fout.close();

}
void retrieveCustomerObject(string name) {
    
    Customer_Registration temp;
    ifstream fin("Customer_Registration.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getName() == name) {
            temp.customer_Display();
            fin.close();
        }
        else {
            cout << "Customer Not Found in the Data Base" << endl;
        }
    }
}
void retrieveAllCustomer() {

    Customer_Registration temp;
    ifstream Fin("Customer_Registration.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.customer_Display();
    }
    Fin.close();
}

void deleteCustomerObject(string name) {
     Customer_Registration temp;
    fstream myFile("Customer_Registration.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Customer_Registration.bin");
    rename("temp.bin", "Customer_Registration.bin");

}

//Manager Data Entry
void insertManagerObject(Manager_Registration& obj) {

    ofstream Fout("Manager_Registration.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveManagerObject(string name) {

    Manager_Registration temp;
    ifstream fin("Manager_Registration.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getName() == name) {
            temp.manager_Display();
            fin.close();
        }
        else {
            cout << "Manager Not Found in the Data Base." << endl;
        }
    }
}
void retrieveAllManager() {

    Manager_Registration temp;
    ifstream Fin("Manager_Registration.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.manager_Display();
    }
    Fin.close();
}
void deleteManagerObject(string name) {
     Manager_Registration temp;
    fstream myFile("Manager_Registration.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Manager_Registration.bin");
    rename("temp.bin", "Manager_Registration.bin");

}

// Meat Data entry

void insertMeatObject(Meat& obj) {

    ofstream Fout("Meat.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveMeatObject(string name) {

    Meat temp;
    ifstream fin("Meat.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.meat_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllMeat() {

    Meat temp;
    ifstream Fin("Meat.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.meat_Display();
    }
    Fin.close();
}

double updateMeatObject(string name,int quantity) {
    Meat temp;
    double price = 0;
    fstream myFile("Meat.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteMeatObject(string name) {
    Meat temp;
    fstream myFile("Meat.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Meat.bin");
    rename("temp.bin", "Meat.bin");

}

//Dairy

void insertDairyObject(Dairy& obj) {

    ofstream Fout("Dairy.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveDairyObject(string name) {

    Dairy temp;
    ifstream fin("Dairy.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.dairy_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllDairy() {

    Dairy temp;
    ifstream Fin("Dairy.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.dairy_Display();
    }
    Fin.close();
}
double updateDairyObject(string name, int quantity) {
    Dairy temp;
    double price = 0;
    fstream myFile("Dairy.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteDairyObject(string name) {
    Dairy temp;
    fstream myFile("Dairy.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Dairy.bin");
    rename("temp.bin", "Dairy.bin");

}

//Fruit Data

void insertFruitObject(Fruit& obj) {

    ofstream Fout("Fruit.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveFruitObject(string name) {

    Fruit temp;
    ifstream fin("Fruit.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.fruit_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllFruit() {

    Fruit temp;
    ifstream Fin("Fruit.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.fruit_Display();
    }
    Fin.close();
}
double updateFruitObject(string name, int quantity) {
    Fruit temp;
    double price = 0;
    fstream myFile("Fruit.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteFruitObject(string name) {
    Fruit temp;
    fstream myFile("Fruit.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Fruit.bin");
    rename("temp.bin", "Fruit.bin");

}
//Vegetable Data

void insertVegetableObject(Vegetable& obj) {

    ofstream Fout("Vegetable.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveVegetableObject(string name) {

    Vegetable temp;
    ifstream fin("Vegetable.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.vegetable_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllVegetable() {

    Vegetable temp;
    ifstream Fin("Vegetable.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.vegetable_Display();
    }
    Fin.close();
}
double updateVegetableObject(string name, int quantity) {
    Vegetable temp;
    double price = 0;
    fstream myFile("Vegetable.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteVegetableObject(string name) {
    Vegetable temp;
    fstream myFile("Vegetable.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Vegetable.bin");
    rename("temp.bin", "Vegetable.bin");

}
//Snacks Data

void insertSnacksObject(Snacks& obj) {

    ofstream Fout("Snacks.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveSnacksObject(string name) {

    Snacks temp;
    ifstream fin("Snacks.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.snacks_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllSnacks() {

    Snacks temp;
    ifstream Fin("Snacks.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.snacks_Display();
    }
    Fin.close();
}
double updateSnacksObject(string name, int quantity) {
    Snacks temp;
    double price = 0;
    fstream myFile("Snacks.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteSnacksObject(string name) {
    Snacks temp;
    fstream myFile("Snacks.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Snacks.bin");
    rename("temp.bin", "Snacks.bin");

}
//Spices Data

void insertSpicesObject(Spices& obj) {

    ofstream Fout("Spices.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveSpicesObject(string name) {

    Spices temp;
    ifstream fin("Spices.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.spices_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllSpices() {

    Spices temp;
    ifstream Fin("Spices.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.spices_Display();
    }
    Fin.close();
}
double updateSpicesObject(string name, int quantity) {
    Spices temp;
    double price = 0;
    fstream myFile("Spices.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteSpicesObject(string name) {
    Spices temp;
    fstream myFile("Spices.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Spices.bin");
    rename("temp.bin", "Spices.bin");

}

//Grains Data

void insertGrainsObject(Grains& obj) {

    ofstream Fout("Grains.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveGrainsObject(string name) {

    Grains temp;
    ifstream fin("Grains.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.grains_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllGrains() {

    Grains temp;
    ifstream Fin("Grains.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.grains_Display();
    }
    Fin.close();
}
double updateGrainsObject(string name, int quantity) {
    Grains temp;
    double price = 0;
    fstream myFile("Grains.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteGrainsObject(string name) {
    Grains temp;
    fstream myFile("Grains.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Grains.bin");
    rename("temp.bin", "Grains.bin");

}
//Cereal Data

void insertCerealObject(Cereal& obj) {

    ofstream Fout("Cereal.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveCerealObject(string name) {

    Cereal temp;
    ifstream fin("Cereal.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.cereal_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllCereal() {

    Cereal temp;
    ifstream Fin("Cereal.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.cereal_Display();
    }
    Fin.close();
}
double updateCerealObject(string name, int quantity) {
    Cereal temp;
    double price = 0;
    fstream myFile("Cereal.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteCerealObject(string name) {
    Cereal temp;
    fstream myFile("Cereal.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Cereal.bin");
    rename("temp.bin", "Cereal.bin");

}
//Personal_Hygiene Data

void insertPersonal_HygieneObject(Personal_Hygiene& obj) {

    ofstream Fout("Personal_Hygiene.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrievePersonal_HygieneObject(string name) {

    Personal_Hygiene temp;
    ifstream fin("Personal_Hygiene.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.Personal_Hygiene_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllPersonal_Hygiene() {

    Personal_Hygiene temp;
    ifstream Fin("Personal_Hygiene.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.Personal_Hygiene_Display();
    }
    Fin.close();
}
double updatePersonal_HygieneObject(string name, int quantity) {
    Personal_Hygiene temp;
    double price = 0;
    fstream myFile("Personal_Hygiene.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deletePersonal_HygieneObject(string name) {
    Personal_Hygiene temp;
    fstream myFile("Personal_Hygiene.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("Personal_Hygiene.bin");
    rename("temp.bin", "Personal_Hygiene.bin");

}
//House_Hold Data

void insertHouse_HoldObject(House_Hold& obj) {

    ofstream Fout("House_Hold.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveHouse_HoldObject(string name) {

    House_Hold temp;
    ifstream fin("House_Hold.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            temp.House_Hold_Display();
            fin.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveAllHouse_Hold() {

    House_Hold temp;
    ifstream Fin("House_Hold.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.House_Hold_Display();
    }
    Fin.close();
}
double updateHouse_HoldObject(string name, int quantity) {
    House_Hold temp;
    double price = 0;
    fstream myFile("House_Hold.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() == name) {
            if (temp.getQuantity() >= quantity) {
                price = quantity * temp.getProPrice();
                temp.setQuantity(temp.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(temp);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&temp, sizeof(temp));
                myFile.close();
                return price;
            }
            else {
                cout << "Not Enough Stock Available!!!";
                myFile.close();
                return 0;
            }
        }
    }
}

void deleteHouse_HoldObject(string name) {
    House_Hold temp;
    fstream myFile("House_Hold.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getProName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("House_Hold.bin");
    rename("temp.bin", "House_Hold.bin");

}
//FeedBack Data

void insertFeedBackObject(FeedBack& obj) {

    ofstream Fout("FeedBack.bin", ios::binary | ios::app);
    if (Fout.write((char*)&obj, sizeof(obj)))
        Fout.close();

}
void retrieveFeedBackObject(string name) {

    FeedBack temp;
    ifstream fin("FeedBack.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getCustomerName() == name) {
            temp.viewFeeds();
            fin.close();
        }
    }
}
void retrieveAllFeedBack() {

    FeedBack temp;
    ifstream Fin("FeedBack.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp))) {
        temp.viewFeeds();
    }
    Fin.close();
}
void deleteFeedBackObject(string name) {
    FeedBack temp;
    fstream myFile("FeedBack.bin", ios::in | ios::out | ios::binary);
    ofstream fout("temp.bin", ios::app | ios::binary);
    while (myFile.read((char*)&temp, sizeof(temp))) {
        if (temp.getCustomerName() != name) {
            fout.write((char*)&temp, sizeof(temp));
        }
    }
    myFile.close();
    fout.close();
    remove("FeedBack.bin");
    rename("temp.bin", "FeedBack.bin");

}

Registration retrieveAdmin() {

    Registration temp;
    ifstream Fin("Admin.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp)))
    Fin.close();
    return temp;
}

Manager_Registration retrieveManager(string c) {

    Manager_Registration temp;
    ifstream fin("Manager_Registration.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getSpecialAnswer() == c) {
            return temp;
            fin.close();
        }
    };
}

Customer_Registration retrieveCustomer(string c) {

    Customer_Registration temp;
    ifstream fin("Customer_Registration.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getSpecialAnswer() == c) {
            return temp;
            fin.close();
        }
    }
}

Customer_Registration retrieveUser(string c) {

    Customer_Registration temp;
    ifstream fin("Customer_Registration.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getName() == c) {
            return temp;
            fin.close();
        }
    }
}

void AdminMenu();
void ManagerMenu();
void CustomerMenu();
void ManagerRegistration();
void ManagerLoginPage();
void CustomerRegistration();
void CustomerLoginPage();

void ProductMenu() {
    retrieveAllMeat();
    retrieveAllDairy();
    retrieveAllFruit();
    retrieveAllVegetable();
    retrieveAllSnacks();
    retrieveAllSpices();
    retrieveAllGrains();
    retrieveAllCereal();
    retrieveAllPersonal_Hygiene();
    retrieveAllHouse_Hold();
}
void CustomerPage() {
    int  options = 1;
    do {
        cout << "\nChoose From the Following Options : " << endl;
        cout << "1) Login" << endl;
        cout << "2) Registration" << endl;
        cout << "3) Exit the Store" << endl;
        cout << "Enter From 1 to 3 : ";
        cin >> options;
        if (options == 1)
        {
            CustomerLoginPage();
        }
        else if (options == 2) {
            CustomerRegistration();
        }
        else if (options == 3) {
            cout << "\nExit Successful!!!!!!" << endl;
        }
        else {
            cout << "Wrong Options Please Try Again !!!!!!" << endl;
        }
    } while (options != 3);
}
void CustomerRegistration() {
    Customer_Registration c;
    c.RegAsCustomer();
    insertCustomerObject(c);
}
void CustomerLoginPage() {
    string loginID, loginpass, l1, l2;
    cout << "Enter Special Answer :";
    cin >> loginID;
    Customer_Registration r;
    r = retrieveCustomer(loginID);
    l1 = r.getLogin_ID();//Login ID
    l2 = r.getLogin_Pass();//Login Pass
 
check1:
    cout << "\nLogin ID : ";
    cin >> loginID;
    
    if (l1.c_str() != loginID) {
        cout << "\nWrong Login ID!!!!!!!!" << endl;
        goto check1;
    }
check2:
    cout << "\nLogin Pass : ";
    cin >> loginpass;
    if (l2.c_str() != loginpass) {
        cout << "\nWrong Login Pass!!!!!!" << endl;
        goto check2;
    }
    else {
        cout << "\nLogin Successfull!!!" << endl;
        CustomerMenu();
    }
}
void AdminLoginPage() {
    Registration r;
    r = retrieveAdmin();
    string loginID, loginpass, l1, l2;
    l1 = r.getLogin_ID();//Login ID
    l2 = r.getLogin_Pass();//Login Pass
check1:
    cout << "\nLogin ID : ";
    cin >> loginID;
    if (l1.c_str() != loginID) {
        cout << "\nWrong Login ID!!!!!!!!" << endl;
        goto check1;
    }
check2:
    cout << "\nLogin Pass : ";
    cin >> loginpass;
    if (l2.c_str() != loginpass) {
        cout << "\nWrong Login Pass!!!!!!" << endl;
        goto check2;
    }
    else {
        cout << "\nLogin Successfull!!!" << endl;
        AdminMenu();
    }
}
void ManagerPage() {
    int  options = 1;
    do {
        cout << "\nChoose From the Following Options : " << endl;
        cout << "1) Login" << endl;
        cout << "2) Registration" << endl;
        cout << "3) Exit the Store" << endl;
        cout << "Enter From 1 to 3 : ";
        cin >> options;
        if (options == 1)
        {
            ManagerLoginPage();
        }
        else if (options == 2) {
            ManagerRegistration();
        }
        else if (options == 3) {
            cout << "\nExit Successful!!!!!!" << endl;
        }
        else {
            cout << "Wrong Options Please Try Again !!!!!!" << endl;
        }
    } while (options != 3);
}
void ManagerRegistration() {
    Manager_Registration m;
    m.RegAsManager();
    insertManagerObject(m);
}
void ManagerLoginPage() {

    string loginID, loginpass, l1, l2;
    cout << "Enter Special Answer :";
    cin >> loginID;
    Manager_Registration r;
    r = retrieveManager(loginID);
    
    l1 = r.getLogin_ID();//Login ID
    l2 = r.getLogin_Pass();//Login Pass
check1:
    cout << "\nLogin ID : ";
    cin >> loginID;
    if (l1.c_str() != loginID) {
        cout << "\nWrong Login ID!!!!!!!!" << endl;
        goto check1;
    }
check2:
    cout << "\nLogin Pass : ";
    cin >> loginpass;
    if (l2.c_str() != loginpass) {
        cout << "\nWrong Login Pass!!!!!!" << endl;
        goto check2;
    }
    else {
        cout << "\nLogin Successfull!!!" << endl;
        ManagerMenu();
    }
}
void CustomerMenu() {
    double price;
    unsigned long long int card;
    int q;
    int options = 1;
    Customer_Registration temp;
    string name;
    Meat m; Fruit f; Dairy d; Vegetable v; Snacks s; Spices sp; Grains g; Cereal c; Personal_Hygiene p; House_Hold h;
    FeedBack feed; Payment pay; Online_Shopping os;
    do {
        cout << "\n\nSelect From the Following Options" << endl;
        cout << "1)Check Product List" << endl;
        cout << "2)Add Meat" << endl;
        cout << "3)Add Dairy" << endl;
        cout << "4)Add Fruit" << endl;
        cout << "5)Add Vegetable" << endl;
        cout << "6)Add Snacks" << endl;
        cout << "7)Add Spices" << endl;
        cout << "8)Add Grains" << endl;
        cout << "9)Add Cereal" << endl;
        cout << "10)Add Personal_Hygiene" << endl;
        cout << "11)Add House_Hold" << endl;
        cout << "12)Get Total Price" << endl;
        cout << "13)Checkout" << endl;
        cout << "0)Logout" << endl;
        cout << "Select Options : ";

        cin >> options;
        if (options == 1) {
            ProductMenu();
        }
        else if (options == 2) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveMeatObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateMeatObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 3) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveDairyObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateDairyObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 4) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveFruitObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateFruitObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 5) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveVegetableObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateVegetableObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 6) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveSnacksObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateSnacksObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 7) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveSpicesObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateSpicesObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 8) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveGrainsObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateGrainsObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 9) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveCerealObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateCerealObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 10) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrievePersonal_HygieneObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updatePersonal_HygieneObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 11) {
            cout << "Enter Product Name : ";
            cin >> name;
            retrieveHouse_HoldObject(name);
            cout << "Enter How Much you wanna Buy : ";
            cin >> q;
            price = updateHouse_HoldObject(name, q);
            os.setTotalPrice(price);
        }
        else if (options == 12) {
            cout << "Total Amount of Products : " << os.getTotalPrice();
        }
        else if (options == 13) {
            cout << "Enter Method of Payment : ";
            cin >> name;
            pay.setMethodOfPayment(name);
            cout << "Enter "<<pay.getMethodOfPayment()<<" Number : ";
            cin >> card;
            cout << "Enter Your User Name : ";
            cin >> name;
            temp = retrieveUser(name);
            pay.setTotalPrice(os.getTotalPrice());
            pay.checkOut(temp);
            cout << "Kindly Give Feedback !!!!!!" << endl;
            feed.giveFeedBack();
            insertFeedBackObject(feed);

        }
        else if (options == 0) {
            cout << "Exiting Menu Successfully" << endl;
        }
        else {
            cout << "Wrong Option Selected Please Select Again!!!!!" << endl;
        }
    } while (options != 0);
}
void ManagerMenu() {
    int options = 1;
    string name;
    Meat m; Fruit f; Dairy d; Vegetable v; Snacks s; Spices sp; Grains g; Cereal c; Personal_Hygiene p; House_Hold h;
    do {
        cout << "\n\nSelect From the Following Options" << endl;
        cout << "1)Check Product List" << endl;
        cout << "2)Manage Meat List" << endl;
        cout << "3)Manage Dairy List" << endl;
        cout << "4)Manage Fruit List" << endl;
        cout << "5)Manage Vegetable List" << endl;
        cout << "6)Manage Snacks List" << endl;
        cout << "7)Manage Spices List" << endl;
        cout << "8)Manage Grains List" << endl;
        cout << "9)Manage Cereal List" << endl;
        cout << "10)Manage Personal_Hygiene List" << endl;
        cout << "11)Manage House_Hold List" << endl;
        cout << "0)Press 0 to Exit to the main menu" << endl;
        cout << "Select Options : ";

        cin >> options;
        if (options == 1) {
            ProductMenu();
        }
        else if (options == 2) {

            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                m.AddProduct();
                insertMeatObject(m);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteMeatObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveMeatObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 3) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                d.AddProduct();
                insertDairyObject(d);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteDairyObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveDairyObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 4) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                f.AddProduct();
                insertFruitObject(f);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteFruitObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveFruitObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 5) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                v.AddProduct();
                insertVegetableObject(v);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteVegetableObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveVegetableObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 6) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                s.AddProduct();
                insertSnacksObject(s);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteSnacksObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveSnacksObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 7) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                sp.AddProduct();
                insertSpicesObject(sp);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteSpicesObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveSpicesObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 8) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                g.AddProduct();
                insertGrainsObject(g);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteGrainsObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveGrainsObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 9) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                c.AddProduct();
                insertCerealObject(c);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteCerealObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveCerealObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 10) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                p.AddProduct();
                insertPersonal_HygieneObject(p);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deletePersonal_HygieneObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrievePersonal_HygieneObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 11) {
            cout << "\n1)Product Addition " << "\n2)Delete Product" << "\n3)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                h.AddProduct();
                insertHouse_HoldObject(h);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Product to be removed : ";
                cin >> name;
                deleteHouse_HoldObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Product Name to Find : ";
                cin >> name;
                retrieveHouse_HoldObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 0) {
            cout << "Exiting Menu Successfully" << endl;
        }
        else {
            cout << "Wrong Option Selected Please Select Again!!!!!" << endl;
        }
    } while (options != 0);
}
void AdminMenu() {
    int options = 1;
    string name;
    Customer_Registration c1;
    Manager_Registration m1;
    do {
        cout << "\n\nSelect From the Following Options" << endl;
        cout << "1)Check Customer List" << endl;
        cout << "2)Check Manager List" << endl;
        cout << "3)Check Product List" << endl;
        cout << "4)Manage Customer List" << endl;
        cout << "5)Manage Manager List" << endl;
        cout << "6)Check FeedBack of Customers" << endl;
        cout << "7)Delete FeedBack of Customer" << endl;
        cout << "0)Press 0 to Exit to the main menu" << endl;
        cout << "Select Options : ";
        cin >> options;
        if (options == 1) {
            retrieveAllCustomer();
        }
        else if (options == 2) {
            retrieveAllManager();
        }
        else if (options == 3) {
            ProductMenu();
        }
        else if (options == 4) {
            cout << "\n1)Register Customer" << "\n2)Delete Customer" << "\n3)Search a Particular Customer by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                c1.RegAsCustomer();
                insertCustomerObject(c1);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Customer to be removed : ";
                cin >> name;
                deleteCustomerObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Customer Name to Find : ";
                cin >> name;
                retrieveCustomerObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 5) {
            cout << "\n1)Register Manager :" << "\n2)Delete Manager" << "\n3)Search a Particular Manager by Name" << endl;
            cout << "Select Option : ";
            cin >> options;
            if (options == 1) {
                m1.RegAsManager();
                insertManagerObject(m1);
            }
            else if (options == 2) {
                cout << "\nEnter Name of Manager to be removed : ";
                cin >> name;
                deleteManagerObject(name);
            }
            else if (options == 3) {
                cout << "\nEnter Manager Name to Find : ";
                cin >> name;
                retrieveManagerObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (options == 6) {
            retrieveAllFeedBack();
        }
        else if (options == 7) {
            cout << "\nEnter Customer Name :";
            cin >> name;
            deleteFeedBackObject(name);
        }
        else if (options == 0) {
            cout << "Exiting Menu Successfully" << endl;
        }
        else {
            cout << "Wrong Option Selected Please Select Again!!!!!" << endl;
        }
    } while (options != 0);
    
}
void StartMenu() {
    int  options = 1;
    do {
        cout << "\nChoose From the Following Options : " << endl;
        cout << "1) Admin" << endl;
        cout << "2) Manager" << endl;
        cout << "3) Customer" << endl;
        cout << "4) Exit the Store" << endl;
        cout << "Enter From 1 to 4 : ";
        cin >> options;
        if (options == 1)
        {
            AdminLoginPage();
        }
        else if (options == 2) {
            ManagerPage();
        }
        else if (options == 3) {
            CustomerPage();
        }
        else if (options == 4) {
            cout << "Thank you for Using Our Grocery Store!!!!" << endl;
        }
        else {
            cout << "Wrong Options Please Try Again !!!!!!" << endl;
        }
    } while (options != 4);
}
