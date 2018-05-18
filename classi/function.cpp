#include "Payment.h"
#include <clocale>
#include <iostream>
#include <cmath>
using namespace std;

void Payment ::Language() // язык системы 
{
	setlocale(LC_ALL, "Russian");
}

void Payment ::set_Name(string Name_of_work)
{
	Name = Name_of_work;
}
void Payment ::set_Surname(string Surname_of_work)
{
	Surname = Surname_of_work;
}
void Payment ::set_Middle_name(string Middle_name_of_work)
{
	Middle_Name = Middle_name_of_work;
}
string Payment ::getName() // получение имени фамилии и отчества 
{
	return Name;
}
string Payment ::getSurname() // получение имени фамилии и отчества 
{
	return Surname;
}
string Payment ::getMiddle_name() // получение имени фамилии и отчества 
{
	return Middle_Name;
}

void Payment ::set_Year_of_start_working(int Year) // получения года начала работы 
{
	Year_of_start_working = Year;
}
int Payment ::get_Year_of_start_working() // получения года начала работы 
{
	return Year_of_start_working;
}

void Payment ::set_count_Working_days(short int count) // получения количества отработаных дней 
{
	count_Working_days = count;
}
short int Payment ::get_count_Working_days()
{
	return count_Working_days;
}

void Payment ::set_count_Work_days(long int count) // получение количества рабочих дней 
{
	count_Work_days = count;
}
long int Payment ::get_count_Work_days() // получение количества рабочих дней 
{
	return count_Work_days;
}

void Payment ::set_payment_of_man(double payment) // оклад 
{
	Payment_of_man = payment;
}
double Payment ::get_payment_of_man()
{
	return Payment_of_man;
}

void Payment ::set_procent_of_extra_charge(double procent) // получесние процента надбавки 
{
	procent_of_Extra_charge = procent;
}
double Payment ::get_procent_of_extra_charge()
{
	return procent_of_Extra_charge;
}

void Payment ::set_Income_tax(float income) // получение подоходного налога 
{
	Income_tax = income;
}
float Payment ::get_Income_tax() // получение подоходного налога 
{
	return Income_tax;
}

double Payment ::get_accrued_amount()
{
	return accrued_Amount;
}

double Payment ::get_retained_amount()
{
	return retained_Amount;
}

int Payment::get_work_experience()
{
	return work_experience;
}

double Payment ::get_amount_on_hands()
{
	return amount_on_hands; 
}


void Payment::type_all()
{
	int exp; 
	double acc_am, ret_am, am_hand;
	exp = get_work_experience();
	acc_am = get_accrued_amount();
	ret_am = get_retained_amount(); 
	am_hand = get_amount_on_hands();

	cout << "" << Name << endl;
	cout << "" << Surname << endl;
	cout << "" << Middle_Name << endl;
	cout << "Payment " << Payment_of_man << endl;
	cout << "Year " << Year_of_start_working << endl;
	cout << "Income " << Income_tax << endl;
	cout << "Work " << count_Work_days << endl;
	cout << "Working " << count_Working_days<< endl;
	cout << "Опыть работы " << exp << endl;
	cout << "Начисленная сумма " << acc_am << endl; 
	cout << "Удерженная сумма " << ret_am << endl; 
	cout << "Выданная на руки сумма " << am_hand << endl;
}

int Payment ::count_work_experience(int current_year) // подсчет стажа работы 
{
	int c;
	c = get_Year_of_start_working();
	work_experience = current_year - c;
	return work_experience;
}

double Payment::count_accured_Amount() // вычисление начисленной суммы 
{
	double p, e;
	short int c; 
	long int  o;
	o = get_count_Work_days();
	c = get_count_Working_days();
	p = get_payment_of_man();
	e = get_procent_of_extra_charge();
	accrued_Amount = ((p*o) / c)*e / 100 + ((p*o) / c);
	return accrued_Amount;
}

double Payment::count_amount_on_hands() //вычисление суммы выдаваемой на руки 
{
	double acc_am, ret_am;
	acc_am = get_accrued_amount();
	ret_am = get_retained_amount();
	amount_on_hands = acc_am - ret_am;
	return amount_on_hands;
}

double Payment::count_retained_Amound() // вычисление удержанной суммы
{
	double acc_am, pay;
	float in_t;
	acc_am = get_accrued_amount();
	in_t = get_Income_tax();
	pay = get_payment_of_man();
	retained_Amount = acc_am*(in_t / 100) + 0.01*acc_am;
	return retained_Amount;
}

//конструкторы 
Payment :: Payment (string str)
{
	Name = str; 
	Surname = str; 
	Middle_Name = str; 
}

Payment::Payment(double c)
{
	Payment_of_man = c; 
}
Payment::Payment(float c)
{
	Income_tax = c; 
}

Payment::Payment(int c)
{
	Year_of_start_working = c; 
}
 Payment::Payment(long int c)
{
	count_Work_days = c; 
}

Payment::Payment(short int c)
{
	count_Working_days = c; 
}

// операторы
Payment Payment :: operator = (const string &str)
{
	if (str[0] == '1' )
	{
		Name = str;
		return  *this;
	}
	else
	{
		if (str[0] == '2')
		{
			Surname = str;
			return *this; 
		}
		else
		{
			Middle_Name = str;
			return *this;
		}
	}
}

Payment Payment :: operator= (const double &c)
{
	Payment_of_man = c;
	return  *this;
}

Payment Payment :: operator= (const float &c)
{
	Income_tax = c;
	return *this; 
}

Payment Payment :: operator= (const int &c)
{
	Year_of_start_working = c; 
	return *this; 
}

Payment Payment :: operator= (const long int &c)
{
	count_Work_days = c; 
	return *this;
}

Payment Payment :: operator= (const short int &c)
{
	count_Working_days = c;
	return *this;
}