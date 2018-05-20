#include "Payment.h"
#include <iostream>
using namespace std;

const double Income_tax = 13; 
int main()
{
	setlocale(LC_ALL, "Russian"); 

	int count_workers; 
	cout << "¬ведите количество работников " << endl; 
	cin >> count_workers; 

	Payment *workers = new Payment[count_workers]; 

	string Name, MIddle_name, Surname; 
	double Payment, Extra_charge; 
	int Year,work_days,working_days; 
	
	// fill all info about workers 
	for (int i = 0; i < count_workers; i++)
	{
		cout << "¬ведите »м€ ‘амиллию ќтчество работника "; 
		cin >> Name; 
		cin >> Surname;
		cin >> MIddle_name;  
		cout << "¬ведите год начала работы "; 
		cin >> Year; 
		cout << "¬ведите количество рабочих и отработанных дней ";
		cin >> work_days;
		cin >> working_days; 
		cout << "¬ведите оклад и процент надбавки "; 
		cin >> Payment; 
		cin >> Extra_charge; 
		workers[i].set_NSM(Name, Surname, MIddle_name);
		workers[i].set_Year_of_start_working(Year); 
		workers[i].set_count_Work_days(work_days);
		workers[i].set_count_Working_days(working_days); 
		workers[i].set_payment_of_man(Payment); 
		workers[i].set_procent_of_extra_charge(Extra_charge); 
		workers[i].set_Income_tax(Income_tax); 
		workers[i].count_work_experience();
		workers[i].count_accured_Amount(); 
		workers[i].count_retained_Amound(); 
		workers[i].count_amount_on_hands(); 
	}

	cout << endl; 
	workers[1].type_all();
	system("pause"); 
	return 0;
}