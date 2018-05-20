#pragma once
#include <iostream>
#include <string>
#include <clocale>
using namespace std;
class Payment 
{
private:
	string Name, Surname, Middle_Name; // ��� ������� � ��������   ?
	double Payment_of_man; // ����� ?
	double procent_of_Extra_charge; // ������� �������� ?
	float Income_tax; // ���������� �����   ?
	double accrued_Amount; // �����������  �����  ??
	double retained_Amount; // ���������� �����  ??
	double amount_on_hands; //  ����� ���������� �� ����  ?? 
	int Year_of_start_working; // ��� ������ ������ ?
	short int count_Working_days; //���������� ����������� ����  ?
	long int count_Work_days; // ���������� ������� ����  ?
	int work_experience; // ���� ������ ??
public:
	void Language(); // ���� ������� 

	void set_Name(string); // ��������� �����
	void set_Surname(string); // ��������� �������
	void set_Middle_name(string); // ��������� �������� 
	void set_NSM(string, string, string); 
	string getName();// ��������� ����� 
	string getSurname(); // ��������� �������
	string getMiddle_name(); // ��������� ��������


	void set_Year_of_start_working(int); // ��������� ���� ������ ������ 
	void set_count_Working_days(short int); // ��������� ���������� ����������� ���� 
	void set_count_Work_days(long int); // ��������� ���������� ������� ���� 
	void set_payment_of_man(double); // ��������� ������ 
	void set_procent_of_extra_charge(double ); //���������  �������� �������� 
	void set_Income_tax(float ); // ��������� ����������� ������ 
	int    get_Year_of_start_working(); //������������� ������ ������ 
	short int   get_count_Working_days(); //��������� ���������� ����������� ����
	long int    get_count_Work_days(); // ��������� ���������� ������� ���� 
	double get_payment_of_man(); //��������� ������
	double get_procent_of_extra_charge(); // ��������� �������� �������� 
	float get_Income_tax(); // ��������� ����������� ������
	double get_accrued_amount(); // ��������� ����������� �����
	double get_retained_amount(); //��������� ���������� �����
	int    get_work_experience();
	double get_amount_on_hands();


	void type_all();

	int count_work_experience(); // ������� ����� ������ 
	double count_accured_Amount(); // ���������� ����������� ����� 
	double count_amount_on_hands(); //���������� ����� ���������� �� ���� 
	double count_retained_Amound(); // ���������� ���������� �����




// ������������ 
	Payment() {}; // ����������� �� ���������
    // ������������ ��������������
	Payment(string str);
	Payment(double c); 
	Payment(float c); 
	// Payment(long float c); �� ����� �� ������� �� ������������ ��� ������ long float 
	Payment(int c); 
	Payment(short int c);
	Payment(long int c);
	
	~Payment() {}; // ����������

//��������� 
	Payment operator = (const string &str); 
	Payment operator = (const double &c); 
	// Payment operator = (const long float &c);
	Payment operator = (const float &c);
	Payment operator = (const int &c); 
	Payment operator = (const short int &c);
	Payment operator = (const long int &c);
};