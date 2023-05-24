#include "Store.h"

//-------------------------Registration Class-------------------------//

Registration::Registration() {
	string temp = " ";
	strcpy_s(name, temp.c_str());
	strcpy_s(login_ID, temp.c_str());
	strcpy_s(login_Pass, temp.c_str());
	cnicNo = 0;
	gender = ' ';
	strcpy_s(address, temp.c_str());
	strcpy_s(specialAnswer, temp.c_str());
}
Registration::Registration(string n, string id, string pass, long int c, char g, string ad, string ans) {
	strcpy_s(name, n.c_str());
	strcpy_s(login_ID, id.c_str());
	strcpy_s(login_Pass, pass.c_str());
	cnicNo = c;
	gender = g;
	strcpy_s(address, ad.c_str());
	strcpy_s(specialAnswer, ans.c_str());
}
Registration::Registration(Registration& obj) {
	strcpy_s(name, obj.name);
	strcpy_s(login_ID, obj.login_ID);
	strcpy_s(login_Pass, obj.login_Pass);
	cnicNo = obj.cnicNo;
	gender = obj.gender;
	strcpy_s(address, obj.address);
	strcpy_s(specialAnswer, obj.specialAnswer);
}
void Registration::RegAsCustomer(Registration& obj) {
	obj.getName();
	obj.getLogin_ID();
	obj.getLogin_Pass();
	obj.getCnic();
	obj.getGender();
	obj.getAddress();
	obj.getSpecialAnswer();
}
void Registration::RegAsManager(Registration& obj) {
	obj.getName();
	obj.getLogin_ID();
	obj.getLogin_Pass();
	obj.getCnic();
	obj.getGender();
	obj.getAddress();
	obj.getSpecialAnswer();
}
char* Registration::getName() {
	return name;
}
char* Registration::getLogin_ID() {
	return login_ID;
}
char* Registration::getLogin_Pass() {
	return login_Pass;
}
long int Registration::getCnic() {
	return cnicNo;
}
char Registration::getGender() {
	return gender;
}
char* Registration::getAddress() {
	return address;
}
char* Registration::getSpecialAnswer() {
	return specialAnswer;
}
void Registration::setName(string n) {
	strcpy_s(name, n.c_str());
}
void Registration::setLogin_ID(string l) {
	strcpy_s(login_ID, l.c_str());
}
void Registration::setLogin_Pass(string p) {
	strcpy_s(login_Pass, p.c_str());
}
void Registration::setCnic(long int c) {
	cnicNo = c;
}
void Registration::setGender(char g) {
	gender = g;
}
void Registration::setAddress(string add) {
	strcpy_s(address, add.c_str());
}
void Registration::setSpecialAnswer(string ans) {
	strcpy_s(specialAnswer, ans.c_str());
}
void Registration::Display() {

	cout << "Name : " << name << "\nLogin ID : " << login_ID << "\nLogin_Pass :  " << login_Pass << "\nCnic : " << cnicNo << "\nGender : " << gender << "\nAddress : " << address << "\nSpecial Answer : " << specialAnswer << endl;
}
Registration::~Registration() {
	string temp;
	strcpy_s(name, temp.c_str());
	strcpy_s(login_ID, temp.c_str());
	strcpy_s(login_Pass, temp.c_str());
	cnicNo = 0;
	gender = ' ';
	strcpy_s(address, temp.c_str());
	strcpy_s(specialAnswer, temp.c_str());
}

//-------------------------Customer Class-------------------------//

Customer_Registration::Customer_Registration() {
	string temp = " ";
	strcpy_s(name,temp.c_str());
	strcpy_s(login_ID, temp.c_str());
	strcpy_s(login_Pass, temp.c_str());
	cnicNo = 0;
	gender = ' ';
	strcpy_s(address, temp.c_str());
	strcpy_s(specialAnswer, temp.c_str());
}
Customer_Registration::Customer_Registration(string n, string id, string pass, long int c, char g, string ad, string ans) {
	strcpy_s(name, n.c_str());
	strcpy_s(login_ID, id.c_str());
	strcpy_s(login_Pass, pass.c_str());
	cnicNo = c;
	gender = g;
	strcpy_s(address, ad.c_str());
	strcpy_s(specialAnswer, ans.c_str());
}
Customer_Registration::Customer_Registration(Customer_Registration& obj) {
	strcpy_s(name, obj.name);
	strcpy_s(login_ID, obj.login_ID);
	strcpy_s(login_Pass, obj.login_Pass);
	cnicNo = obj.cnicNo;
	gender = obj.gender;
	strcpy_s(address, obj.address);
	strcpy_s(specialAnswer, obj.specialAnswer);
}
void Customer_Registration::RegAsCustomer() {
	string temp;
	unsigned long long int t1;
	char gen = 'q';
	cout << "\nEnter Name of the Customer : ";
	cin >> temp;
	setName(temp);
	cout << "\nEnter Login ID of the Customer : ";
	cin >> temp;
	setLogin_ID(temp);
	cout << "\nEnter Login Pass of the Customer : ";
	cin >> temp;
	setLogin_Pass(temp);
	cout << "\nEnter CNIC of the Customer : ";
	cin >> t1;
	setCnic(t1);
	while (gen != 'M' && gen != 'm' && gen != 'f' && gen != 'F') {
		cout << "\nEnter Gender of the Customer : ";
		cin >> gen;
		setGender(gen);
	}
	cout << "Enter Address of the Customer : ";
	cin >> temp;
	setAddress(temp);
	cout << "\nEnter Special Answer of the Customer : ";
	cin >> temp;
	setSpecialAnswer(temp);
}
char* Customer_Registration::getName() {
	return name;
}
char* Customer_Registration::getLogin_ID() {
	return login_ID;
}
char* Customer_Registration::getLogin_Pass() {
	return login_Pass;
}
long int Customer_Registration::getCnic() {
	return cnicNo;
}
char Customer_Registration::getGender() {
	return gender;
}
char* Customer_Registration::getAddress() {
	return address;
}
char* Customer_Registration::getSpecialAnswer() {
	return specialAnswer;
}
void Customer_Registration::setName(string n) {
	strcpy_s(name, n.c_str());
}
void Customer_Registration::setLogin_ID(string l) {
	strcpy_s(login_ID, l.c_str());
}
void Customer_Registration::setLogin_Pass(string p) {
	strcpy_s(login_Pass, p.c_str());
}
void Customer_Registration::setCnic(long int c) {
	cnicNo = c;
}
void Customer_Registration::setGender(char g) {
	gender = g;
}
void Customer_Registration::setAddress(string add) {
	strcpy_s(address, add.c_str());
}
void Customer_Registration::setSpecialAnswer(string ans) {
	strcpy_s(specialAnswer, ans.c_str());
}
void Customer_Registration::customer_Display() {

	cout << "\nCustomer Name : " << name << "\nLogin ID : " << login_ID << "\nLogin_Pass :  " << login_Pass << "\nCnic : " << cnicNo << "\nGender : " << gender << "\nAddress : " << address << "\nSpecial Answer : " << specialAnswer << endl;
}
Customer_Registration::~Customer_Registration() {
	string temp;
	strcpy_s(name, temp.c_str());
	strcpy_s(login_ID, temp.c_str());
	strcpy_s(login_Pass, temp.c_str());
	cnicNo = 0;
	gender = ' ';
	strcpy_s(address, temp.c_str());
	strcpy_s(specialAnswer, temp.c_str());
}

//-------------------------Manager Class-------------------------//

Manager_Registration::Manager_Registration() {
	string temp = " ";
	strcpy_s(name, temp.c_str());
	strcpy_s(login_ID, temp.c_str());
	strcpy_s(login_Pass, temp.c_str());
	cnicNo = 0;
	gender = ' ';
	strcpy_s(address, temp.c_str());
	strcpy_s(specialAnswer, temp.c_str());
}
Manager_Registration::Manager_Registration(string n, string id, string pass, long int c, char g, string ad, string ans) {
	strcpy_s(name, n.c_str());
	strcpy_s(login_ID, id.c_str());
	strcpy_s(login_Pass, pass.c_str());
	cnicNo = c;
	gender = g;
	strcpy_s(address, ad.c_str());
	strcpy_s(specialAnswer, ans.c_str());
}
Manager_Registration::Manager_Registration(Manager_Registration& obj) {
	strcpy_s(name, obj.name);
	strcpy_s(login_ID, obj.login_ID);
	strcpy_s(login_Pass, obj.login_Pass);
	cnicNo = obj.cnicNo;
	gender = obj.gender;
	strcpy_s(address, obj.address);
	strcpy_s(specialAnswer, obj.specialAnswer);
}
void Manager_Registration::RegAsManager() {
	string temp;
	unsigned long long int t1;
	char gen = 'q';
	cout << "\nEnter Name of the Manager : ";
	cin >> temp;
	setName(temp);
	cout << "\nEnter Login ID of the Manageer : ";
	cin >> temp;
	setLogin_ID(temp);
	cout << "\nEnter Login Pass of the Manager : ";
	cin >> temp;
	setLogin_Pass(temp);
	cout << "\nEnter CNIC of the Manager : ";
	cin >> t1;
	setCnic(t1);
	while (gen != 'M' && gen != 'm' && gen != 'f' && gen != 'F') {
		cout << "\nEnter Gender of the Manager : ";
		cin >> gen;
		setGender(gen);
	}
	cout << "\nEnter Address of the Manager : ";
	cin >> temp;
	setAddress(temp);
	cout << "\nEnter Special Answer of the Manager : ";
	cin >> temp;
	setSpecialAnswer(temp);
}
char* Manager_Registration::getName() {
	return name;
}
char* Manager_Registration::getLogin_ID() {
	return login_ID;
}
char* Manager_Registration::getLogin_Pass() {
	return login_Pass;
}
long int Manager_Registration::getCnic() {
	return cnicNo;
}
char Manager_Registration::getGender() {
	return gender;
}
char* Manager_Registration::getAddress() {
	return address;
}
char* Manager_Registration::getSpecialAnswer() {
	return specialAnswer;
}
void Manager_Registration::setName(string n) {
	strcpy_s(name, n.c_str());
}
void Manager_Registration::setLogin_ID(string l) {
	strcpy_s(login_ID, l.c_str());
}
void Manager_Registration::setLogin_Pass(string p) {
	strcpy_s(login_Pass, p.c_str());
}
void Manager_Registration::setCnic(long int c) {
	cnicNo = c;
}
void Manager_Registration::setGender(char g) {
	gender = g;
}
void Manager_Registration::setAddress(string add) {
	strcpy_s(address, add.c_str());
}
void Manager_Registration::setSpecialAnswer(string ans) {
	strcpy_s(specialAnswer, ans.c_str());
}
void Manager_Registration::manager_Display() {

	cout << "\nManager Name : " << name << "\nLogin ID : " << login_ID << "\nLogin_Pass :  " << login_Pass << "\nCnic : " << cnicNo << "\nGender : " << gender << "\nAddress : " << address << "\nSpecial Answer : " << specialAnswer << endl;
}
Manager_Registration::~Manager_Registration() {
	string temp;
	strcpy_s(name, temp.c_str());
	strcpy_s(login_ID, temp.c_str());
	strcpy_s(login_Pass, temp.c_str());
	cnicNo = 0;
	gender = ' ';
	strcpy_s(address, temp.c_str());
	strcpy_s(specialAnswer, temp.c_str());
}

//-------------------------Meat Class-------------------------//

Meat::Meat() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
Meat::Meat(string n, string c, double p, int q) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
}
void Meat::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);

}
char* Meat::getProName() {
	return proName;
}
char* Meat::getCategory() {
	return category;
}
double Meat::getProPrice() {
	return proPrice;
}
int Meat::getQuantity() {
	return quantity;
}
void Meat::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Meat::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Meat::setProPrice(double p) {
	proPrice = p;
}
void Meat::setQuantity(int q) {
	quantity = q;
}
void Meat::meat_Display() {
	cout << "\nMeat Name : " << proName << "\nCategory : " << category << "\nMeat Price : " << proPrice << "\nQuantity : " << quantity << endl;
}
Meat::~Meat() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}

//-------------------------Dairy Class-------------------------//

Dairy::Dairy() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
Dairy::Dairy(string n, string c, double p, int q) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
}
void Dairy::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);

}
char* Dairy::getProName() {
	return proName;
}
char* Dairy::getCategory() {
	return category;
}
double Dairy::getProPrice() {
	return proPrice;
}
int Dairy::getQuantity() {
	return quantity;
}
void Dairy::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Dairy::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Dairy::setProPrice(double p) {
	proPrice = p;
}
void Dairy::setQuantity(int q) {
	quantity = q;
}
void Dairy::dairy_Display() {
	cout << "\nDairy Name : " << proName << "\nCategory : " << category << "\nDairy Price : " << proPrice << "\nQuantity : " << quantity << endl;
}
Dairy::~Dairy() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
//-------------------------Fruit Class-------------------------//

Fruit::Fruit() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
Fruit::Fruit(string n, string c, double p, int q) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
}
void Fruit::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);

}
char* Fruit::getProName() {
	return proName;
}
char* Fruit::getCategory() {
	return category;
}
double Fruit::getProPrice() {
	return proPrice;
}
int Fruit::getQuantity() {
	return quantity;
}
void Fruit::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Fruit::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Fruit::setProPrice(double p) {
	proPrice = p;
}
void Fruit::setQuantity(int q) {
	quantity = q;
}
void Fruit::fruit_Display() {
	cout << "\nFruit Name : " << proName << "\nCategory : " << category << "\nFruit Price : " << proPrice << "\nQuantity : " << quantity << endl;
}
Fruit::~Fruit() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
//-------------------------Vegetable Class-------------------------//
Vegetable::Vegetable() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
Vegetable::Vegetable(string n, string c, double p, int q) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
}
void Vegetable::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);

}
char* Vegetable::getProName() {
	return proName;
}
char* Vegetable::getCategory() {
	return category;
}
double Vegetable::getProPrice() {
	return proPrice;
}
int Vegetable::getQuantity() {
	return quantity;
}
void Vegetable::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Vegetable::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Vegetable::setProPrice(double p) {
	proPrice = p;
}
void Vegetable::setQuantity(int q) {
	quantity = q;
}
void Vegetable::vegetable_Display() {
	cout << "\nVegetable Name : " << proName << "\nCategory : " << category << "\nVegetable Price : " << proPrice << "\nQuantity : " << quantity << endl;
}
Vegetable::~Vegetable() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
////-------------------------Preishable Class-------------------------//
//
//Preishable::Preishable() {
//	
//}
//Meat getMeat();
//Dairy getDairy();
//Fruit getFruit();
//Vegetable getVegetable();
//void setMeat(Meat);
//void setDairy(Dairy);
//void setFruit(Fruit);
//void setVegetable(Vegetable);
//Preishable(Meat, Dairy, Fruit, Vegetable);
//~Preishable();
//

//-------------------------Snacks Class-------------------------//
Snacks::Snacks() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}
Snacks::Snacks(string n, string c, double p, int q, int e) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
	expiryDate = e;
}
void Snacks::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);
	cout << "Enter Expiry Date of Product in months : ";
	cin >> q;
	setExpiry(q);

}
char* Snacks::getProName() {
	return proName;
}
char* Snacks::getCategory() {
	return category;
}
double Snacks::getProPrice() {
	return proPrice;
}
int Snacks::getQuantity() {
	return quantity;
}
int Snacks::getExpiry() {
	return expiryDate;
}
void Snacks::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Snacks::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Snacks::setProPrice(double p) {
	proPrice = p;
}
void Snacks::setQuantity(int q) {
	quantity = q;
}
void Snacks::snacks_Display() {
	cout << "\nSnacks Name : " << proName << "\nCategory : " << category << "\nSnacks Price : " << proPrice << "\nQuantity : " << quantity << "\nExpiry Date : " << expiryDate << endl;
}
void Snacks::setExpiry(int e) {
	expiryDate = e;
}
Snacks::~Snacks() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}
//-------------------------Spices Class-------------------------//
Spices::Spices() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}
Spices::Spices(string n, string c, double p, int q, int e) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
	expiryDate = e;
}
void Spices::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);
	cout << "Enter Expiry Date of Product in months : ";
	cin >> q;
	setExpiry(q);
}
char* Spices::getProName() {
	return proName;
}
char* Spices::getCategory() {
	return category;
}
double Spices::getProPrice() {
	return proPrice;
}
int Spices::getQuantity() {
	return quantity;
}
int Spices::getExpiry() {
	return expiryDate;
}
void Spices::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Spices::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Spices::setProPrice(double p) {
	proPrice = p;
}
void Spices::setQuantity(int q) {
	quantity = q;
}
void Spices::spices_Display() {
	cout << "\nSpices Name : " << proName << "\nCategory : " << category << "\nSpices Price : " << proPrice << "\nQuantity : " << quantity << "\nExpiry Date : " << expiryDate << endl;
}
void Spices::setExpiry(int e) {
	expiryDate = e;
}
Spices::~Spices() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}

//-------------------------Grains Class-------------------------//
Grains::Grains() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}

Grains::Grains(string n, string c, double p, int q, int e) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
	expiryDate = e;
}
void Grains::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);
	cout << "Enter Expiry Date of Product in months : ";
	cin >> q;
	setExpiry(q);
}
char* Grains::getProName() {
	return proName;
}
char* Grains::getCategory() {
	return category;
}
double Grains::getProPrice() {
	return proPrice;
}
int Grains::getQuantity() {
	return quantity;
}
int Grains::getExpiry() {
	return expiryDate;
}
void Grains::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Grains::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Grains::setProPrice(double p) {
	proPrice = p;
}
void Grains::setQuantity(int q) {
	quantity = q;
}
void Grains::grains_Display() {
	cout << "\nGrains Name : " << proName << "\nCategory : " << category << "\nGrains Price : " << proPrice << "\nQuantity : " << quantity << "\nExpiry Date : " << expiryDate << endl;
}
void Grains::setExpiry(int e) {
	expiryDate = e;
}
Grains::~Grains() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}

//-------------------------Cereal Class-------------------------//

Cereal::Cereal() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}
Cereal::Cereal(string n, string c, double p, int q, int e) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
	expiryDate = e;
}
void Cereal::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);
	cout << "Enter Expiry Date of Product in months : ";
	cin >> q;
	setExpiry(q);
}
char* Cereal::getProName() {
	return proName;
}
char* Cereal::getCategory() {
	return category;
}
double Cereal::getProPrice() {
	return proPrice;
}
int Cereal::getQuantity() {
	return quantity;
}
int Cereal::getExpiry() {
	return expiryDate;
}
void Cereal::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Cereal::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Cereal::setProPrice(double p) {
	proPrice = p;
}
void Cereal::setQuantity(int q) {
	quantity = q;
}
void Cereal::cereal_Display() {
	cout << "\nCereal Name : " << proName << "\nCategory : " << category << "\nCereal Price : " << proPrice << "\nQuantity : " << quantity << "\nExpiry Date : " << expiryDate << endl;
}
void Cereal::setExpiry(int e) {
	expiryDate = e;
}
Cereal::~Cereal() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}
////-------------------------Non_Perishable Class-------------------------//
//
//Non_Preishable();
//Non_Preishable(Snacks, Spices, Grains, Cereal);
//Snacks getSnacks();
//Spices getSpices();
//Grains getGrains();
//Cereal getCereal();
//void setSnacks(Snacks);
//void setSpices(Spices);
//void setGrains(Grains);
//void setCereal(Cereal);
//~Non_Preishable();
//
////-------------------------Food Class-------------------------//
//
//Food();
//Preishable getPreishable();
//Non_Preishable getNon_Preishable();
//void setPreishable(Preishable);
//void setNon_Preishable(Non_Preishable);
//Food(Preishable, Non_Preishable);
//~Food();
//
//-------------------------Personal_Hygiene Class-------------------------//

Personal_Hygiene::Personal_Hygiene() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}
Personal_Hygiene::Personal_Hygiene(string n, string c, double p, int q, int e) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
	expiryDate = e;
}
void Personal_Hygiene::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);
	cout << "Enter Expiry Date of Product in months : ";
	cin >> q;
	setExpiry(q);
}
char* Personal_Hygiene::getProName() {
	return proName;
}
char* Personal_Hygiene::getCategory() {
	return category;
}
double Personal_Hygiene::getProPrice() {
	return proPrice;
}
int Personal_Hygiene::getQuantity() {
	return quantity;
}
int Personal_Hygiene::getExpiry() {
	return expiryDate;
}
void Personal_Hygiene::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void Personal_Hygiene::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void Personal_Hygiene::setProPrice(double p) {
	proPrice = p;
}
void Personal_Hygiene::setQuantity(int q) {
	quantity = q;
}
void Personal_Hygiene::Personal_Hygiene_Display() {
	cout << "\nPersonal_Hygiene Name : " << proName << "\nCategory : " << category << "\nPersonal_Hygiene Price : " << proPrice << "\nQuantity : " << quantity << "\nExpiry Date : " << expiryDate << endl;
}
void Personal_Hygiene::setExpiry(int e) {
	expiryDate = e;
}
Personal_Hygiene::~Personal_Hygiene() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
	expiryDate = 0;
}

//-------------------------House_Hold Class-------------------------//
House_Hold::House_Hold() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
House_Hold::House_Hold(string n, string c, double p, int q) {
	strcpy_s(proName, n.c_str());
	strcpy_s(category, c.c_str());
	proPrice = p;
	quantity = q;
}
void House_Hold::AddProduct() {
	string temp;
	int q; double p;
	cout << "Enter Name of the Prduct : ";
	cin >> temp;
	setProName(temp);
	cout << "Enter Category of the Prduct : ";
	cin >> temp;
	setcategory(temp);
	cout << "Enter Price of the Prduct : ";
	cin >> p;
	setProPrice(p);
	cout << "Enter Quantity of the Prduct : ";
	cin >> q;
	setQuantity(q);
}
char* House_Hold::getProName() {
	return proName;
}
char* House_Hold::getCategory() {
	return category;
}
double House_Hold::getProPrice() {
	return proPrice;
}
int House_Hold::getQuantity() {
	return quantity;
}
void House_Hold::setProName(string n) {
	strcpy_s(proName, n.c_str());
}
void House_Hold::setcategory(string c) {
	strcpy_s(category, c.c_str());
}
void House_Hold::setProPrice(double p) {
	proPrice = p;
}
void House_Hold::setQuantity(int q) {
	quantity = q;
}
void House_Hold::House_Hold_Display() {
	cout << "\nHouse_Hold Name : " << proName << "\nCategory : " << category << "\nHouse_Hold Price : " << proPrice << "\nQuantity : " << quantity <<  endl;
}
House_Hold::~House_Hold() {
	strcpy_s(proName, " ");
	strcpy_s(category, " ");
	proPrice = 0.0;
	quantity = 0;
}
////-------------------------Product Class-------------------------//
//
//Product();
//Product(Food, Personal_Hygiene, House_Hold);
//Food getFood();
//Personal_Hygiene getP_H();
//House_Hold getH_H();
//void setFood(Food);
//void setP_H(Personal_Hygiene);
//void setH_H(House_Hold);
//void DisplayProducts();
//~Product();
//
//-------------------------FeedBack Class-------------------------//

FeedBack::FeedBack() {
	strcpy_s(customerName," ");
	strcpy_s(message," ");
	rating = 0.0;
}
FeedBack::FeedBack(string n, string m, double r) {
	strcpy_s(customerName,n.c_str());
	strcpy_s(message,m.c_str());
	rating = r;
}
void FeedBack::giveFeedBack() {
	double r;
	string name;
	cout << "Enter Your Name : ";
	cin >> name;
	strcpy_s(customerName, name.c_str());
	cout << "Message : ";
	cin >> name;
	strcpy_s(message, name.c_str());
	cout << "Rating for our Service : ";
	cin >> r;
	rating = r;

}
char* FeedBack::getCustomerName() {
	return customerName;
}
char* FeedBack::getMessage() {
	return message;
}
double FeedBack::getRating() {
	return rating;
}
void FeedBack::setCustomerName(string n) {
	strcpy_s(customerName,n.c_str());
}
void FeedBack::setMessage(string m) {
	strcpy_s(message,m.c_str());
}
void FeedBack::setRating(double r) {
	rating = r;
}
void FeedBack::viewFeeds() {
	cout << "\nCustomer Name : " << customerName << "\nMessage : " << message << "\nRating : " << rating << endl;
}
FeedBack::~FeedBack() {
	strcpy_s(customerName, " ");
	strcpy_s(message, " ");
	rating = 0.0;
}

//-------------------------Online_Shopping Class-------------------------//

Online_Shopping::Online_Shopping() {
	totalPrice = 0;
	strcpy_s(methodOfPayment," ");
}
Online_Shopping::Online_Shopping(double t, string m) {
	totalPrice = t;
	strcpy_s(methodOfPayment,m.c_str());
}
Online_Shopping::Online_Shopping(Online_Shopping& obj) {
	totalPrice = obj.totalPrice;
	strcpy_s(methodOfPayment,obj.methodOfPayment);
}
double Online_Shopping::getTotalPrice() {
	return totalPrice;
}
string Online_Shopping::getMOP(){
	return methodOfPayment;
}
void Online_Shopping::setTotalPrice(double t) {
	totalPrice = totalPrice + t;
	cout << "Successful!!!!" << endl;
}
void Online_Shopping::setMOP(string m) {
	strcpy_s(methodOfPayment, m.c_str());
}
Online_Shopping::~Online_Shopping() {
	totalPrice = 0;
	strcpy_s(methodOfPayment, " ");
}

//-------------------------Payment Class-------------------------//

Payment::Payment() {
	totalPrice = 0;
	strcpy_s(methodOfPayment, " ");
}
Payment::Payment(double t, string m) {
	totalPrice = t;
	strcpy_s(methodOfPayment, m.c_str());
}
Payment::Payment(Payment& obj) {
	totalPrice = obj.totalPrice;
	strcpy_s(methodOfPayment, obj.methodOfPayment);
}
char* Payment::getMethodOfPayment() {
	return methodOfPayment;
}
void Payment::setMethodOfPayment(string m) {
	strcpy_s(methodOfPayment, m.c_str());
}
void Payment::addDebitCard() {

}
void Payment::setTotalPrice(double t) {
	totalPrice = t;
}
void Payment::checkOut(Customer_Registration& obj) {
	cout << "\nName : " << obj.getName() << "\nAddress : " << obj.getAddress() << "\nTotal Price : " << totalPrice << "\nMethod of Payment : " << methodOfPayment << endl;
}
Payment::~Payment() {
	totalPrice = 0;
	strcpy_s(methodOfPayment, " ");
}