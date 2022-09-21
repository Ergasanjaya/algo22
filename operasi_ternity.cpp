#include <iostream>
using namespace std;

int main() {
	
	double uas, uts, nilai;
	
	cout<<"masukan nilai uts anda : "; cin>>uts;
	cout<<endl;
	
	cout<<"masukan nilai uts anda : "; cin>>uas;	
	
	nilai = (uts + uas) / 2;
	
	(nilai >= 60 ) ? (cout<<"Lulus") : (cout<<"tidak lulus");
}
