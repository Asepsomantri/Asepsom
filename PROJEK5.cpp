#include <iostream>
using namespace std;

int a, b;
//prototype
int tambahkan(int a, int b);

//program utama
void PROJEK5() {
	cout<<"masukan Nilai A : ";
	cin>>a;
	cout<<"masukan Nilai B : ";
	cin>>b;
	cout<<"Hasil : " <<tambahkan (a,b) <<endl;
	
	}
	
	int tambahkan (int a, int b) {
	return a + b;
	}