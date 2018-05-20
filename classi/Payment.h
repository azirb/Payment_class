#pragma once
#include <iostream>
#include <string>
#include <clocale>
using namespace std;
class Payment 
{
private:
	string Name, Surname, Middle_Name; // »м€ ‘амили€ и ќтчество   ?
	double Payment_of_man; // оклад ?
	double procent_of_Extra_charge; // процент надбавки ?
	float Income_tax; // подоходный налог   ?
	double accrued_Amount; // начисленна€  сумма  ??
	double retained_Amount; // удерженна€ сумма  ??
	double amount_on_hands; //  сумма полученна€ на руки  ?? 
	int Year_of_start_working; // год начала работы ?
	short int count_Working_days; //количество отработаных дней  ?
	long int count_Work_days; // количество рабочих дней  ?
	int work_experience; // стаж работы ??
public:
	void Language(); // €зык системы 

	void set_Name(string); // установка имени
	void set_Surname(string); // установка фамилии
	void set_Middle_name(string); // установка отчества 
	void set_NSM(string, string, string); 
	string getName();// получение имени 
	string getSurname(); // получение фамилии
	string getMiddle_name(); // получение ќтчества


	void set_Year_of_start_working(int); // установка года начала работы 
	void set_count_Working_days(short int); // установка количества отработаных дней 
	void set_count_Work_days(long int); // установка количества рабочих дней 
	void set_payment_of_man(double); // установка оклада 
	void set_procent_of_extra_charge(double ); //установка  процента надбавки 
	void set_Income_tax(float ); // установка подоходного налога 
	int    get_Year_of_start_working(); //получениегода начала работы 
	short int   get_count_Working_days(); //получени€ количества отработаных дней
	long int    get_count_Work_days(); // получение количества рабочих дней 
	double get_payment_of_man(); //получение оклада
	double get_procent_of_extra_charge(); // получение процента надбавки 
	float get_Income_tax(); // получение подоходного налога
	double get_accrued_amount(); // получение начисленной суммы
	double get_retained_amount(); //получение удержанной суммы
	int    get_work_experience();
	double get_amount_on_hands();


	void type_all();

	int count_work_experience(); // подсчет стажа работы 
	double count_accured_Amount(); // вычисление начисленной суммы 
	double count_amount_on_hands(); //вычисление суммы выдаваемой на руки 
	double count_retained_Amound(); // вычисление удержанной суммы




// конструкторы 
	Payment() {}; // конструктор по умолчанию
    // конструкторы преобразовани€
	Payment(string str);
	Payment(double c); 
	Payment(float c); 
	// Payment(long float c); по какой то причине не определ€етс€ тип данных long float 
	Payment(int c); 
	Payment(short int c);
	Payment(long int c);
	
	~Payment() {}; // ƒиструктор

//операторы 
	Payment operator = (const string &str); 
	Payment operator = (const double &c); 
	// Payment operator = (const long float &c);
	Payment operator = (const float &c);
	Payment operator = (const int &c); 
	Payment operator = (const short int &c);
	Payment operator = (const long int &c);
};