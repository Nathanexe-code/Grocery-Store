#pragma once
#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

class Register
{
private:
    char username[100]; char ID[100]; char Pass[100]; unsigned long long int cnic; char gender; char address[100];
public:
    Register() {
        string temp = " ";
        strcpy_s(username, " ");
        strcpy_s(ID, " ");
        strcpy_s(Pass, " ");
        cnic = 0;
        gender = ' ';
        strcpy_s(address, " ");
    }
    Register(string name, string id, string pass, unsigned long long int cni, char gen, string add) {
        strcpy_s(ID, id.c_str());
        strcpy_s(username, name.c_str());
        cnic = cni;
        strcpy_s(address, add.c_str());
        strcpy_s(Pass, pass.c_str());
        gender = gen;
    }
    char* getName() {
        return username;
    }
    char* getID() {
        return ID;
    }
    char* getPass() {
        return Pass;
    }
    unsigned long long int getCnic() {
        return cnic;
    }
    void setName(string n) {
        strcpy_s(username, n.c_str());
    }
    char getGender() {
        return gender;
    }
    char* getAddress() {
        return address;
    }
    void setPass(string p) {
        strcpy_s(Pass, p.c_str());
    }
    void setID(string id) {
        strcpy_s(ID, id.c_str());
    }
    void setGender(char gen) {
        gender = gen;
    }
    void setCnic(unsigned long long int cni) {
        cnic = cni;
    }
    void setAddress(string add) {
        strcpy_s(address, add.c_str());
    }
    void userdisplay() {

        cout << "User Name : " << username << endl;
        cout << "Login ID : " << ID << endl;
        cout << "Login_Pass :  " << Pass << endl;
        cout << "Cnic : " << cnic << endl;
        cout << "Gender : " << gender << endl;
        cout << "Address : " << address << endl;
    }
    ~Register() {
        string temp = " ";
        strcpy_s(username, " ");
        strcpy_s(ID, " ");
        strcpy_s(Pass, " ");
        cnic = 0;
        gender = ' ';
        strcpy_s(address, " ");
    }

};

class User : public Register {
private:
    char username[100]; char ID[100]; char Pass[100]; unsigned long long int cnic; char gender; char address[100];
public:
    User() {
        string temp = " ";
        strcpy_s(username, " ");
        strcpy_s(ID, " ");
        strcpy_s(Pass, " ");
        cnic = 0;
        gender = ' ';
        strcpy_s(address, " ");
    }
    User(string name, string id, string pass, unsigned long long int cni, char gen, string add) {
        strcpy_s(ID, id.c_str());
        strcpy_s(username, name.c_str());
        cnic = cni;
        strcpy_s(address, add.c_str());
        strcpy_s(Pass, pass.c_str());
        gender = gen;
    }
    char* getName() {
        return username;
    }
    char* getID() {
        return ID;
    }
    char* getPass() {
        return Pass;
    }
    unsigned long long int getCnic() {
        return cnic;
    }
    void setName(string n) {
        strcpy_s(username, n.c_str());
    }
    char getGender() {
        return gender;
    }
    char* getAddress() {
        return address;
    }
    void setPass(string p) {
        strcpy_s(Pass, p.c_str());
    }
    void setID(string id) {
        strcpy_s(ID, id.c_str());
    }
    void setGender(char gen) {
        gender = gen;
    }
    void setCnic(unsigned long long int cni) {
        cnic = cni;
    }
    void setAddress(string add) {
        strcpy_s(address, add.c_str());
    }
    void regasuser() {
        string data; unsigned long long int cni; char gen;
        cout << endl << "User name : "; cin >> data;
        setName(data);
        cout << endl << "User ID : "; cin >> data;
        setID(data);
        cout << endl << "User Password : "; cin >> data;
        setPass(data);
        cout << endl << "User CNIC : "; cin >> cni;
        setCnic(cni);
        cout << endl << "User Gender : "; cin >> gen;
        setGender(gen);
        cout << endl << "User Address : "; cin >> data;
        setAddress(data);
    }
    void userdisplay() {

        cout << "User Name : " << username << endl;
        cout << "Login ID : " << ID << endl;
        cout << "Login_Pass :  " << Pass << endl;
        cout << "Cnic : " << cnic << endl;
        cout << "Gender : " << gender << endl;
        cout << "Address : " << address << endl;
    }
    ~User() {
        string temp = " ";
        strcpy_s(username, " ");
        strcpy_s(ID, " ");
        strcpy_s(Pass, " ");
        cnic = 0;
        gender = ' ';
        strcpy_s(address, " ");
    }
};

class Manager : public Register {
private:
    char username[100];
    char ID[100];
    char Pass[100];
    unsigned long long int cnic;
    char gender;
    char address[100];
public:
    Manager() {
        string temp = " ";
        strcpy_s(username, " ");
        strcpy_s(ID, " ");
        strcpy_s(Pass, " ");
        cnic = 0;
        gender = ' ';
        strcpy_s(address, " ");
    }
    Manager(string name, string id, string pass, unsigned long long int cni, char gen, string add) {
        strcpy_s(ID, id.c_str());
        strcpy_s(username, name.c_str());
        cnic = cni;
        strcpy_s(address, add.c_str());
        strcpy_s(Pass, pass.c_str());
        gender = gen;
    }
    char* getName() {
        return username;
    }
    char* getID() {
        return ID;
    }
    char* getPass() {
        return Pass;
    }
    unsigned long long int getCnic() {
        return cnic;
    }
    void setName(string n) {
        strcpy_s(username, n.c_str());
    }
    char getGender() {
        return gender;
    }
    char* getAddress() {
        return address;
    }
    void setPass(string p) {
        strcpy_s(Pass, p.c_str());
    }
    void setID(string id) {
        strcpy_s(ID, id.c_str());
    }
    void setGender(char gen) {
        gender = gen;
    }
    void setCnic(unsigned long long int cni) {
        cnic = cni;
    }
    void setAddress(string add) {
        strcpy_s(address, add.c_str());
    }
    void RegAsManager() {
        string data; unsigned long long int cni; char gen;
        cout << endl << "Manager name : "; cin >> data;
        setName(data);
        cout << endl << "Manageer ID : "; cin >> data;
        setID(data);
        cout << endl << "Manager Password : "; cin >> data;
        setPass(data);
        cout << endl << "Manager CNIC : "; cin >> cni;
        setCnic(cni);
        cout << endl << "Manager Gender : "; cin >> gen;
        setGender(gen);
        cout << endl << "Manager Address : "; cin >> data;
        setAddress(data);
    }
    void manager_Display() {

        cout << "Manager Name : " << username << endl;
        cout << "Login ID : " << ID << endl;
        cout << "Login_Pass :  " << Pass << endl;
        cout << "Cnic : " << cnic << endl;
        cout << "Gender : " << gender << endl;
        cout << "Address : " << address << endl;
    }
    ~Manager() {
        string temp = " ";
        strcpy_s(username, " ");
        strcpy_s(ID, " ");
        strcpy_s(Pass, " ");
        cnic = 0;
        gender = ' ';
        strcpy_s(address, " ");
    }
};

//-----------------------------------------Product Section------------------------------------------------------//
class Meat {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    Meat() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*Meat(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "Meat Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "Meat Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~Meat() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};
class Dairy {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    Dairy() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*Dairy(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void Dairy_Display() {
        cout << "Dairy Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "Dairy Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~Dairy() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }

};
class Fruit {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    Fruit() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*Fruit(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "Fruit Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "Fruit Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~Fruit() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};
class Vegetable {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    Vegetable() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*Vegetable(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "Vegetable Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "Vegetable Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~Vegetable() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};

class Snacks {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    Snacks() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*Snacks(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "Snacks Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "Snacks Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~Snacks() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};
class Spices {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    Spices() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*Spices(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "Spices Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "Spices Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~Spices() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};
class Grains {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    Grains() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*Grains(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "Grains Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "Grains Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~Grains() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};
class Cereal {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    Cereal() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*Cereal(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "Cereal Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "Cereal Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~Cereal() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};

class PersonalHygiene {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    PersonalHygiene() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*PersonalHygiene(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "PersonalHygiene Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "PersonalHygiene Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~PersonalHygiene() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};

class HouseHold {
private:
    char Name[100]; char Type[100]; double price; int quantity;
public:
    HouseHold() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
    /*HouseHold(string name, string type, double price, int quantity) {
        strcpy_s(Name, name.c_str());
        strcpy_s(Type, type.c_str());
        price = price;
        quantity = quantity;
    }*/
    void add() {
        string data; int quan; double price;
        cout << "Product Name : "; cin >> data; setProName(data);
        cout << "Product Type : "; cin >> data; setcategory(data);
        cout << "Product Price : ";	cin >> price; setProPrice(price);
        cout << "Product Quantity : "; cin >> quan; setQuantity(quan);

    }
    char* getName() {
        return Name;
    }
    char* getType() {
        return Type;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setProName(string name) {
        strcpy_s(Name, name.c_str());
    }
    void setcategory(string type) {
        strcpy_s(Type, type.c_str());
    }
    void setProPrice(double p) {
        price = p;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    void display() {
        cout << "HouseHold Name : " << Name << endl;
        cout << "Category : " << Type << endl;
        cout << "HouseHold Price : " << price << endl;
        cout << "Quantity : " << quantity << endl;
    }
    ~HouseHold() {
        strcpy_s(Name, " ");
        strcpy_s(Type, " ");
        price = 0.0;
        quantity = 0;
    }
};


class FeedBack {
private:
    char username[100];
    char text[100];
public:
    FeedBack() {
        strcpy_s(username, " ");
        strcpy_s(text, " ");
    }
    FeedBack(string name, string message) {
        strcpy_s(username, name.c_str());
        strcpy_s(text, message.c_str());
    }
    void suggestion() {
        string data;
        cout << "Username : "; cin >> data; strcpy_s(username, data.c_str());
        cout << "Suggestion : "; cin >> data; strcpy_s(text, data.c_str());
    }
    char* getname() {
        return username;
    }
    char* gettext() {
        return text;
    }
    void setname(string name) {
        strcpy_s(username, name.c_str());
    }
    void setMessage(string message) {
        strcpy_s(text, message.c_str());
    }
    void display() {
        cout << "Name : " << username << endl;
        cout << "Suggestion : " << text << endl;
    }
    ~FeedBack() {
        strcpy_s(username, " ");
        strcpy_s(text, " ");
    }

};

class Payment {
private:
    double totalPrice;
    char methodOfPayment[100];
public:
    Payment() {
        totalPrice = 0;
        strcpy_s(methodOfPayment, " ");
    }
    Payment(double t, string m) {
        totalPrice = t;
        strcpy_s(methodOfPayment, m.c_str());
    }
    char* getMethodOfPayment() {
        return methodOfPayment;
    }
    void setMethodOfPayment(string m) {
        strcpy_s(methodOfPayment, m.c_str());
    }
    double gettotalprice() {
        return totalPrice;
    }
    void setTotalPrice(double t) {
        totalPrice = totalPrice + t;
    }
    void checkOut(User& obj) {
        cout << "\nName : " << obj.getName() << "\nAddress : " << obj.getAddress() << "\nTotal Price : " << totalPrice << "\nMethod of Payment : " << methodOfPayment << endl;
    }
    ~Payment() {
        totalPrice = 0;
        strcpy_s(methodOfPayment, " ");
    }
};

void insertuser(User& obj) {

    ofstream myFile("User.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveuserobject(string name) {

    User object;
    ifstream myFile("User.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.userdisplay();
            myFile.close();
        }
    }
}
void displayalluser() {

    User object;
    ifstream myFile("User.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.userdisplay();
    }
    myFile.close();
}
void insertmanager(Manager& obj) {

    ofstream myFile("Manager.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrievemanager(string name) {

    Manager object;
    ifstream myFile("Manager.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.manager_Display();
            myFile.close();
        }
        else {
            cout << "Manager Not Found in the Data Base." << endl;
        }
    }
}
void retrieveallmanager() {

    Manager object;
    ifstream myFile("Manager.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.manager_Display();
    }
    myFile.close();
}
void insertMeat(Meat& obj) {

    ofstream myFile("Meat.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveMeat(string name) {

    Meat object;
    ifstream myFile("Meat.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveallmeat() {

    Meat object;
    ifstream myFile("Meat.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double getmeatprice(string name, int quantity) {
    Meat object;
    double price = 0;
    fstream myFile("Meat.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertDairy(Dairy& obj) {

    ofstream myFile("Dairy.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveDairy(string name) {

    Dairy object;
    ifstream myFile("Dairy.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.Dairy_Display();
            myFile.close();
        }
    }
}
void retrievealldairy() {

    Dairy object;
    ifstream myFile("Dairy.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.Dairy_Display();
    }
    myFile.close();
}
double updateDairyObject(string name, int quantity) {
    Dairy object;
    double price = 0;
    fstream myFile("Dairy.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertFruit(Fruit& obj) {

    ofstream myFile("Fruit.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveFruit(string name) {

    Fruit object;
    ifstream myFile("Fruit.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }
        else {
            cout << "Product Not Available " << endl;
        }
    }
}
void retrieveallfruit() {

    Fruit object;
    ifstream myFile("Fruit.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double updateFruit(string name, int quantity) {
    Fruit object;
    double price = 0;
    fstream myFile("Fruit.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertVegetable(Vegetable& obj) {

    ofstream myFile("Vegetable.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveVegetable(string name) {

    Vegetable object;
    ifstream myFile("Vegetable.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }
    }
}
void retrieveAllVegetable() {

    Vegetable object;
    ifstream myFile("Vegetable.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double updateVegetableObject(string name, int quantity) {
    Vegetable object;
    double price = 0;
    fstream myFile("Vegetable.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertSnacksObject(Snacks& obj) {

    ofstream myFile("Snacks.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveSnacksObject(string name) {

    Snacks object;
    ifstream myFile("Snacks.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }
    }
}
void retrieveAllSnacks() {

    Snacks object;
    ifstream myFile("Snacks.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double updateSnacksObject(string name, int quantity) {
    Snacks object;
    double price = 0;
    fstream myFile("Snacks.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertSpicesObject(Spices& obj) {

    ofstream myFile("Spices.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveSpicesObject(string name) {

    Spices object;
    ifstream myFile("Spices.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }
    }
}
void retrieveAllSpices() {

    Spices object;
    ifstream myFile("Spices.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double updateSpicesObject(string name, int quantity) {
    Spices object;
    double price = 0;
    fstream myFile("Spices.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertGrainsObject(Grains& obj) {

    ofstream myFile("Grains.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveGrainsObject(string name) {

    Grains object;
    ifstream myFile("Grains.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }
    }
}
void retrieveAllGrains() {

    Grains object;
    ifstream myFile("Grains.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double updateGrainsObject(string name, int quantity) {
    Grains object;
    double price = 0;
    fstream myFile("Grains.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertCerealObject(Cereal& obj) {

    ofstream myFile("Cereal.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveCerealObject(string name) {

    Cereal object;
    ifstream myFile("Cereal.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }

    }
}
void retrieveAllCereal() {

    Cereal object;
    ifstream myFile("Cereal.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double updateCerealObject(string name, int quantity) {
    Cereal object;
    double price = 0;
    fstream myFile("Cereal.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertPersonal(PersonalHygiene& obj) {

    ofstream myFile("PersonalHygiene.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrievePersonal(string name) {

    PersonalHygiene object;
    ifstream myFile("PersonalHygiene.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }
    }
}
void retrieveAllPersonal() {

    PersonalHygiene object;
    ifstream myFile("PersonalHygiene.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double updatePersonalHygieneObject(string name, int quantity) {
    PersonalHygiene object;
    double price = 0;
    fstream myFile("PersonalHygiene.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertHouseHoldObject(HouseHold& obj) {

    ofstream myFile("HouseHold.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveHouseHoldObject(string name) {

    HouseHold object;
    ifstream myFile("HouseHold.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            object.display();
            myFile.close();
        }
    }
}
void retrieveAllHouseHold() {

    HouseHold object;
    ifstream myFile("HouseHold.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}
double updateHouse_HoldObject(string name, int quantity) {
    HouseHold object;
    double price = 0;
    fstream myFile("HouseHold.bin", ios::in | ios::out | ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getName() == name) {
            if (object.getQuantity() >= quantity) {
                price = quantity * object.getPrice();
                object.setQuantity(object.getQuantity() - quantity);
                int current = myFile.tellg();
                int oneblock = sizeof(object);
                myFile.seekg(current - oneblock);
                myFile.write((char*)&object, sizeof(object));
                myFile.close();
                return price;
            }
            else {
                myFile.close();
                return 0;
            }
        }
    }
}
void insertFeedBackObject(FeedBack& obj) {

    ofstream myFile("FeedBack.bin", ios::binary | ios::app);
    if (myFile.write((char*)&obj, sizeof(obj)))
        myFile.close();

}
void retrieveFeedBackObject(string name) {

    FeedBack object;
    ifstream myFile("FeedBack.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        if (object.getname() == name) {
            object.display();
            myFile.close();
        }
    }
}
void retrieveAllFeedBack() {

    FeedBack object;
    ifstream myFile("FeedBack.bin", ios::binary);
    while (myFile.read((char*)&object, sizeof(object))) {
        object.display();
    }
    myFile.close();
}

Register retrieveAdmin() {

    Register temp;
    ifstream Fin("Admin.bin", ios::binary);
    while (Fin.read((char*)&temp, sizeof(temp)))
        Fin.close();
    return temp;
}

Manager retrieveManager(string name) {

    Manager temp;
    ifstream fin("Manager.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getName() == name) {
            return temp;
            fin.close();
        }
    };
}

User retrieveUser(string name) {

    User temp;
    ifstream fin("User.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getName() == name) {
            return temp;
            fin.close();
        }
    }
}

Manager getManager(string name) {

    Manager temp;
    ifstream fin("Manager.bin", ios::binary);
    while (fin.read((char*)&temp, sizeof(temp))) {
        if (temp.getName() == name) {
            return temp;
            fin.close();
        }
    }
}

void AdminMenu();
void ManagerMenu();
void UserMenu();
void ManagerRegister();
void ManagerLogin();
void UserRegister();
void UserLogin();

void StoreProducts() {
    retrieveallmeat();
    retrievealldairy();
    retrieveallfruit();
    retrieveAllVegetable();
    retrieveAllSnacks();
    retrieveAllSpices();
    retrieveAllGrains();
    retrieveAllCereal();
    retrieveAllPersonal();
    retrieveAllHouseHold();
}
void UserPage() {
    int  check = 1;
    do {
        cout << "1) Login" << endl;
        cout << "2) Registration" << endl;
        cout << "3) Exit the Store" << endl;
        cout << "Enter From 1 to 3 : ";
        cin >> check;
        if (check == 1)
        {
            UserLogin();
        }
        else if (check == 2) {
            UserRegister();
        }
        else if (check == 3) {
            cout << "Exited" << endl;
        }
        else {
            cout << "Try Again" << endl;
        }
    } while (check != 3);
}
void UserRegister() {
    User c;
    c.regasuser();
    insertuser(c);
}
void UserLogin() {
    string loginID, loginpass, l1, l2;
    cout << "Enter Name :";
    cin >> loginID;
    User r;
    r = retrieveUser(loginID);
    l1 = r.getID();
    l2 = r.getPass();

c1:
    cout << "\nLogin ID : ";
    cin >> loginID;

    if (l1.c_str() != loginID) {
        cout << "\nWrong Login ID!!!!!!!!" << endl;
        goto c1;
    }
c2:
    cout << "\nLogin Pass : ";
    cin >> loginpass;
    if (l2.c_str() != loginpass) {
        cout << "\nWrong Login Pass!!!!!!" << endl;
        goto c2;
    }
    else {
        cout << "\nLogin Successfull!!!" << endl;
        UserMenu();
    }
}
void AdminLoginPage() {
    Register r;
    r = retrieveAdmin();
    string loginID, loginpass, l1, l2;
    l1 = r.getID();
    l2 = r.getPass();
c1:
    cout << "\nLogin ID : ";
    cin >> loginID;
    if (l1.c_str() != loginID) {
        cout << "\nWrong Login ID" << endl;
        goto c1;
    }
c2:
    cout << "\nLogin Pass : ";
    cin >> loginpass;
    if (l2.c_str() != loginpass) {
        cout << "\nWrong Login Pass!!!!!!" << endl;
        goto c2;
    }
    else {
        cout << "\nLogin Successfull!!!" << endl;
        AdminMenu();
    }
}
void ManagerPage() {
    int  check = 1;
    do {
        cout << "\nChoose From the Following check : " << endl;
        cout << "1) Login" << endl;
        cout << "2) Registration" << endl;
        cout << "3) Exit the Store" << endl;
        cout << "Enter From 1 to 3 : ";
        cin >> check;
        if (check == 1)
        {
            ManagerLogin();
        }
        else if (check == 2) {
            ManagerRegister();
        }
        else if (check == 3) {
            cout << "\nExit Successful!!!!!!" << endl;
        }
        else {
            cout << "Wrong check Please Try Again !!!!!!" << endl;
        }
    } while (check != 3);
}
void ManagerRegister() {
    Manager m;
    m.RegAsManager();
    insertmanager(m);
}
void ManagerLogin() {

    string loginID, loginpass, l1, l2;
    cout << "Enter Name :";
    cin >> loginID;
    Manager r;
    r = getManager(loginID);

    l1 = r.getID();//Login ID
    l2 = r.getPass();//Login Pass
c1:
    cout << "\nLogin ID : ";
    cin >> loginID;
    if (l1.c_str() != loginID) {
        cout << "\nWrong Login ID!!!!!!!!" << endl;
        goto c1;
    }
c2:
    cout << "\nLogin Pass : ";
    cin >> loginpass;
    if (l2.c_str() != loginpass) {
        cout << "\nWrong Login Pass!!!!!!" << endl;
        goto c2;
    }
    else {
        cout << "\nLogin Successfull!!!" << endl;
        ManagerMenu();
    }
}
void UserMenu() {
    double price;
    unsigned long long int card;
    int q;
    int check = 1;
    User temp;
    string name;
    Meat m; Fruit f; Dairy d; Vegetable v; Snacks s; Spices sp; Grains g; Cereal c; PersonalHygiene p; HouseHold h;
    FeedBack feed; Payment pay;
    do {
        cout << "Select From the Following check" << endl;
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
        cout << "Select check : ";

        cin >> check;
        if (check == 1) {
            StoreProducts();
        }
        else if (check == 2) {
            cout << "Product Name : ";
            cin >> name;
            retrieveMeat(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = getmeatprice(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 3) {
            cout << "Product Name : ";
            cin >> name;
            retrieveDairy(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updateDairyObject(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 4) {
            cout << "Product Name : ";
            cin >> name;
            retrieveFruit(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updateFruit(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 5) {
            cout << "Product Name : ";
            cin >> name;
            retrieveVegetable(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updateVegetableObject(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 6) {
            cout << "Product Name : ";
            cin >> name;
            retrieveSnacksObject(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updateSnacksObject(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 7) {
            cout << "Product Name : ";
            cin >> name;
            retrieveSpicesObject(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updateSpicesObject(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 8) {
            cout << "Product Name : ";
            cin >> name;
            retrieveGrainsObject(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updateGrainsObject(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 9) {
            cout << "Product Name : ";
            cin >> name;
            retrieveCerealObject(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updateCerealObject(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 10) {
            cout << "Product Name : ";
            cin >> name;
            retrievePersonal(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updatePersonalHygieneObject(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 11) {
            cout << "Product Name : ";
            cin >> name;
            retrieveHouseHoldObject(name);
            cout << "How Much you wanna Buy : ";
            cin >> q;
            price = updateHouse_HoldObject(name, q);
            pay.setTotalPrice(price);
        }
        else if (check == 12) {
            cout << "Total Amount of Products : " << pay.gettotalprice();
        }
        else if (check == 13) {
            cout << "Method of Payment : ";
            cin >> name;
            pay.setMethodOfPayment(name);
            cout << "" << pay.getMethodOfPayment() << " Number : ";
            cin >> card;
            cout << "Your User Name : ";
            cin >> name;
            temp = retrieveUser(name);
            pay.setTotalPrice(pay.gettotalprice());
            pay.checkOut(temp);
            cout << "Kindly Give Feedback !!!!!!" << endl;
            feed.suggestion();
            insertFeedBackObject(feed);

        }
        else if (check == 0) {
            cout << "Exiting Menu Successfully" << endl;
        }
        else {
            cout << "Wrong Option Selected Please Select Again!!!!!" << endl;
        }
    } while (check != 0);
}
void ManagerMenu() {
    int check = 1;
    string name;
    Meat m; Fruit f; Dairy d; Vegetable v; Snacks s; Spices sp; Grains g; Cereal c; PersonalHygiene p; HouseHold h;
    do {
        cout << "Select From the Following check" << endl;
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
        cout << "0)Logout" << endl;
        cout << "Select check : ";

        cin >> check;
        if (check == 1) {
            StoreProducts();
        }
        else if (check == 2) {

            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                m.add();
                insertMeat(m);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveMeat(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 3) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                d.add();
                insertDairy(d);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveDairy(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 4) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                f.add();
                insertFruit(f);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveFruit(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 5) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                v.add();
                insertVegetable(v);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveVegetable(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 6) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                s.add();
                insertSnacksObject(s);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveSnacksObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 7) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                sp.add();
                insertSpicesObject(sp);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveSpicesObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 8) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                g.add();
                insertGrainsObject(g);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveGrainsObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 9) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                c.add();
                insertCerealObject(c);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveCerealObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 10) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                p.add();
                insertPersonal(p);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrievePersonal(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 11) {
            cout << "\n1)Product Addition " << "\n2)Search a Particular Product by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                h.add();
                insertHouseHoldObject(h);
            }
            else if (check == 2) {
                cout << "\nProduct Name to Find : ";
                cin >> name;
                retrieveHouseHoldObject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 0) {
            cout << "Exiting Menu Successfully" << endl;
        }
        else {
            cout << "Wrong Option Selected Please Select Again!!!!!" << endl;
        }
    } while (check != 0);
}
void AdminMenu() {
    int check = 1;
    string name;
    User c1;
    Manager m1;
    do {
        cout << "\nSelect From the Following check" << endl;
        cout << "1)Check Customer List" << endl;
        cout << "2)Check Manager List" << endl;
        cout << "3)Check Product List" << endl;
        cout << "4)Manage Customer List" << endl;
        cout << "5)Manage Manager List" << endl;
        cout << "6)Check FeedBack of Customers" << endl;
        cout << "0)Logout" << endl;
        cout << "Select check : ";
        cin >> check;
        if (check == 1) {
            displayalluser();
        }
        else if (check == 2) {
            retrieveallmanager();
        }
        else if (check == 3) {
            StoreProducts();
        }
        else if (check == 4) {
            cout << "\n1)Register Customer" << "\n2)Search a Particular Customer by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                c1.regasuser();
                insertuser(c1);
            }
            else if (check == 2) {
                cout << "\nCustomer Name to Find : ";
                cin >> name;
                retrieveuserobject(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 5) {
            cout << "\n1)Register Manager :" << "\n2)Search a Particular Manager by Name" << endl;
            cout << "Select Option : ";
            cin >> check;
            if (check == 1) {
                m1.RegAsManager();
                insertmanager(m1);
            }
            else if (check == 2) {
                cout << "\nManager Name to Find : ";
                cin >> name;
                retrieveManager(name);
            }
            else {
                cout << "\nWrong Input Try Again!!!!" << endl;
            }
        }
        else if (check == 6) {
            retrieveAllFeedBack();
        }
        else if (check == 0) {
            cout << "Exiting Menu Successfully" << endl;
        }
        else {
            cout << "Wrong Option Selected Please Select Again!!!!!" << endl;
        }
    } while (check != 0);

}
void StartMenu() {
    int  check = 1;
    do {
        cout << "\nChoose From the Following check : " << endl;
        cout << "1) Admin" << endl;
        cout << "2) Manager" << endl;
        cout << "3) Customer" << endl;
        cout << "4) Exit the Store" << endl;
        cout << "Enter From 1 to 4 : ";
        cin >> check;
        if (check == 1)
        {
            AdminLoginPage();
        }
        else if (check == 2) {
            ManagerPage();
        }
        else if (check == 3) {
            UserPage();
        }
        else if (check == 4) {
            cout << "Thank you for Using Our Grocery Store!!!!" << endl;
        }
        else {
            cout << "Wrong check Please Try Again !!!!!!" << endl;
        }
    } while (check != 4);
}