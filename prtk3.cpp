#include <iostream> //kode dasar
using namespace std; //kode dasar

int main() { //nama judul fungsi
	
	int angka; //menggunakan operator Assignment
	cout<<"masukan angka: "; //output
	cin>>angka; 	//input
	(angka % 2 == 0) ? 
	(cout << "bilangan Genap" ) //output akan keluar jika bilangan yg dimasukan genap 
	:
	(cout<<"Bilangan Ganjil ") //output akan keluar jika bilangan yg dimasukan ganjil
	;
	
	return 0; 

}
