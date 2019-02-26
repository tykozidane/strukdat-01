/*
Nama	: Tyko Zidane Badhawi
NPM		: 140810180031
tanggal	: 26/02/2019
desk	: perubahan suhu
*/
#include<iostream>
using namespace std;

float cel2fah (float temp)
{
	return temp*9/5 + 32;
}

int main()
{
	int celcius =9;
	float fahrenhait = cel2fah(celcius);
	cout << "temp is " << fahrenhait;
}
