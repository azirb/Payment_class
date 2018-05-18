#include "Payment.h"
#include <iostream>
using namespace std;
int main()
{
	Payment Guy;
	Guy.Language();

	string Name_of_work;
	string Surname_of_work;
	string Middle_name_of_work;
	int Year = 2008;
	short int working_days = 20;
	long int Work_days = 21;
	int current_year=2018;
	double Payment=30000;
	double nadbavka;
	float income=15;
   
	cout << "Введите процент надбавки ";
	cin >> nadbavka;
	
	Guy.set_procent_of_extra_charge(nadbavka);

	Guy = "1) Виталий"; 
	Guy = "2) Шушкевич"; 
	Guy = "3) Алексеевич"; 
	Guy = Year; 
	Guy = working_days; 
	Guy = Work_days; 
	Guy = Payment; 
	Guy = income; 

	Guy.count_work_experience(current_year);
	Guy.count_accured_Amount();
	Guy.count_retained_Amound();
	Guy.count_amount_on_hands();

	Guy.type_all(); 

	system("pause"); 
	return 0;
}