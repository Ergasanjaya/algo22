#include <iostream>
using namespace std;

int main()
{

	const double pi = 3.14;

	double vol, r, t;
	cout << "Program mencari volume kerucut" << endl;
	cout << "-----------" << endl;

	cout << "masukin jari-jari = ";
	cin >> r;
	cout << endl;

	cout << "Masukan tinggi = ";
	cin >> t;

	vol = (pi * r * r * t) / 3;
	cout << endl;
	cout << "Volume : " << vol;
	return 0;
}
