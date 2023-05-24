#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#include<fstream>

using namespace std;

class Registration
{
private:
	char name[100];
	char login_ID[100];
	char login_Pass[100];
	long int cnicNo;
	char gender;
	char address[100];
	char specialAnswer[100];
public:
	Registration();
	Registration(string, string, string, long int, char, string, string);
	Registration(Registration&);
	void RegAsCustomer(Registration&);
	void RegAsManager(Registration&);
	char* getName();
	char* getLogin_ID();
	char* getLogin_Pass();
	long int getCnic();
	char getGender();
	char* getAddress();
	char* getSpecialAnswer();
	void setName(string);
	void setLogin_ID(string);
	void setLogin_Pass(string);
	void setCnic(long int);
	void setGender(char);
	void setAddress(string);
	void setSpecialAnswer(string);
	void Display();
	~Registration();

};

class Customer_Registration : public Registration {
private:
	char name[100];
	char login_ID[100];
	char login_Pass[100];
	long int cnicNo;
	char gender;
	char address[100];
	char specialAnswer[100];
public:
	Customer_Registration();
	Customer_Registration(string, string, string, long int, char, string, string);
	Customer_Registration(Customer_Registration&);
	void RegAsCustomer();
	char* getName();
	char* getLogin_ID();
	char* getLogin_Pass();
	long int getCnic();
	char getGender();
	char* getAddress();
	char* getSpecialAnswer();
	void setName(string);
	void setLogin_ID(string);
	void setLogin_Pass(string);
	void setCnic(long int);
	void setGender(char);
	void setAddress(string);
	void setSpecialAnswer(string);
	void customer_Display();
	~Customer_Registration();
};

class Manager_Registration : public Registration {
private:
	char name[100];
	char login_ID[100];
	char login_Pass[100];
	long int cnicNo;
	char gender;
	char address[100];
	char specialAnswer[100];
public:
	Manager_Registration();
	Manager_Registration(string, string, string, long int, char, string, string);
	Manager_Registration(Manager_Registration&);
	void RegAsManager();
	char* getName();
	char* getLogin_ID();
	char* getLogin_Pass();
	long int getCnic();
	char getGender();
	char* getAddress();
	char* getSpecialAnswer();
	void setName(string);
	void setLogin_ID(string);
	void setLogin_Pass(string);
	void setCnic(long int);
	void setGender(char);
	void setAddress(string);
	void setSpecialAnswer(string);
	void manager_Display();
	~Manager_Registration();
};

//-----------------------------------------Product Section------------------------------------------------------//
class Meat {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
public:
	Meat();
	Meat(string, string, double, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void meat_Display();
	~Meat();

};
class Dairy {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
public:
	Dairy();
	Dairy(string, string, double, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void dairy_Display();
	~Dairy();
};
class Fruit {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
public:
	Fruit();
	Fruit(string, string, double, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void fruit_Display();
	~Fruit();
};
class Vegetable {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
public:
	Vegetable();
	Vegetable(string, string, double, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void vegetable_Display();
	~Vegetable();
};
//class Preishable {
//private:
//	Meat meat;
//	Dairy dairy;
//	Fruit fruit;
//	Vegetable vegetable;
//public:
//	Preishable();
//	Meat getMeat();
//	Dairy getDairy();
//	Fruit getFruit();
//	Vegetable getVegetable();
//	void setMeat(Meat);
//	void setDairy(Dairy);
//	void setFruit(Fruit);
//	void setVegetable(Vegetable);
//	Preishable(Meat,Dairy,Fruit,Vegetable);
//	~Preishable();
//};
//

class Snacks {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
	int expiryDate;
public:
	Snacks();
	Snacks(string, string, double, int, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	int getExpiry();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void setExpiry(int);
	void snacks_Display();
	~Snacks();

};
class Spices {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
	int expiryDate;
public:
	Spices();
	Spices(string, string, double, int, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	int getExpiry();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void setExpiry(int);
	void spices_Display();
	~Spices();
};
class Grains {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
	int expiryDate;
public:
	Grains();
	Grains(string, string, double, int, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	int getExpiry();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void setExpiry(int);
	void grains_Display();
	~Grains();
};
class Cereal {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
	int expiryDate;
public:
	Cereal();
	Cereal(string, string, double, int, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	int getExpiry();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void setExpiry(int);
	void cereal_Display();
	~Cereal();

};
//class Non_Preishable {
//private:
//	Snacks* snacks;
//	Spices* spices;
//	Grains* grains;
//	Cereal* cereal;
//public:
//	Non_Preishable();
//	Non_Preishable(Snacks, Spices, Grains, Cereal);
//	Snacks getSnacks();
//	Spices getSpices();
//	Grains getGrains();
//	Cereal getCereal();
//	void setSnacks(Snacks);
//	void setSpices(Spices);
//	void setGrains(Grains);
//	void setCereal(Cereal);
//	~Non_Preishable();
//};
//
//class Food {
//private:
//	Preishable* pr;
//	Non_Preishable nonPr;
//public:
//	Food();
//	Preishable getPreishable();
//	Non_Preishable getNon_Preishable();
//	void setPreishable(Preishable);
//	void setNon_Preishable(Non_Preishable);
//	Food(Preishable, Non_Preishable);
//	~Food();
//};

class Personal_Hygiene {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
	int expiryDate;
public:
	Personal_Hygiene();
	Personal_Hygiene(string, string, double, int, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	int getExpiry();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void setExpiry(int);
	void Personal_Hygiene_Display();
	~Personal_Hygiene();
};

class House_Hold {
private:
	char proName[100];
	char category[100];
	double proPrice;
	int quantity;
public:
	House_Hold();
	House_Hold(string, string, double, int);
	void AddProduct();
	char* getProName();
	char* getCategory();
	double getProPrice();
	int getQuantity();
	void setProName(string);
	void setcategory(string);
	void setProPrice(double);
	void setQuantity(int);
	void House_Hold_Display();
	~House_Hold();
};

//class Product {
//private:
//	Food* food;
//	Personal_Hygiene* p_H;
//	House_Hold h_H;
//public:
//	Product();
//	Product(Food, Personal_Hygiene, House_Hold);
//	Food getFood();
//	Personal_Hygiene getP_H();
//	House_Hold getH_H();
//	void setFood(Food);
//	void setP_H(Personal_Hygiene);
//	void setH_H(House_Hold);
//	void DisplayProducts();
//	~Product();
//
//};
//
//---------------------------------------Online Store-------------------------------------------------//

class FeedBack {
private:
	char customerName[100];
	char message[100];
	double rating;
public:
	FeedBack();
	FeedBack(string, string, double);
	void giveFeedBack();
	char* getCustomerName();
	char* getMessage();
	double getRating();
	void setCustomerName(string);
	void setMessage(string);
	void setRating(double);
	void viewFeeds();
	~FeedBack();
};

class Online_Shopping {
private:
	double totalPrice;
	char methodOfPayment[100];
public:
	Online_Shopping();
	Online_Shopping(double, string);
	Online_Shopping(Online_Shopping&);
	double getTotalPrice();
	string getMOP();
	void setTotalPrice(double);
	void setMOP(string);
	~Online_Shopping();
};

class Payment {
private:
	double totalPrice;
	char methodOfPayment[100];
public:
	Payment();
	Payment(double, string);
	Payment(Payment&);
	char* getMethodOfPayment();
	void setMethodOfPayment(string);
	void setTotalPrice(double);
	void addDebitCard();
	void checkOut(Customer_Registration&);
	~Payment();
};