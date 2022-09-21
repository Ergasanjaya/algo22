#include <iostream>
using namespace std;

int main() {
	
	 float berat,tb;
	
	cout<<"Program menghitung berat badan ideal"<<endl;
	cout<<"------------------------------------"<<endl;
	
	cout<<"masukan tinggi badan : "; cin>>tb;
	cout<<endl;
	
	berat = (tb - 100) - ((tb - 100) * 0.1);
	cout<<"Berat ideal : " <<berat;
}
