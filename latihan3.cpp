#include <iostream>
using namespace std;

int main(){
	
	double kalori,bb,tb,u;
	
	cout<<"Program menghitung kebutuhan kalori"<<endl;
	cout<<"------------------------------------"<<endl;
	
	cout<<"Masukan berat badan : "; cin>>bb;
	cout<<endl;
	
	cout<<"Masukan tinggi badan : "; cin>>tb;
	cout<<endl;
	
	cout<<"Masukan umur : "; cin>>u;
	cout<<endl;
	
	kalori = (88.4 + 13.4 * bb) + (4.8 * tb) - (5.68 * u);
	
	cout<<"Kalori yang dibutuhkan : " <<kalori;
	
}
