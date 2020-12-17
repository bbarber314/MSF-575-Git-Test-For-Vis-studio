#include "../../headers/stdafx.h" //Using <iostream> from stdafx.h
using namespace std;

struct Date {
	int day=1;
	int month=1;
	int year=2000;
};

struct Bar
{
	Date BarDate;
	string Symbol;
	double OpenPrice=100;
	double ClosePrice=100;
	double HighPrice=101;
	double LowPrice=99;
	int Volume=1;
};

void chapter1ex2() {
	Bar ibm;
	ibm.BarDate.day = 1;
	ibm.BarDate.month = 12;
	ibm.BarDate.year = 2020;
	ibm.Symbol = "IBM";
	ibm.OpenPrice = 100.00 ;
	ibm.ClosePrice = 114.10 ;
	ibm.HighPrice = 120.25;
	ibm.LowPrice = 95.02;
	ibm.Volume = 5342789;

	cout << ibm.Symbol << " for date " << ibm.BarDate.month << "/" << ibm.BarDate.day << "/" << ibm.BarDate.year << ": Open:$" << ibm.OpenPrice << "; High:$" << ibm.HighPrice << "; Low:$" << ibm.LowPrice << "; Close:$" << ibm.ClosePrice << endl;
}