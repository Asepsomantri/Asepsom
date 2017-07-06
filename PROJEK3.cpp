#include <iostream>
using namespace std;

//prototype
void prosesBaca();
int prosesTambah();
int prosesKurang();
void prosesTampil();

//variabel global
	int a,b;
	
	
//program utama
void PROJEK3 () {

	prosesBaca();
	prosesTampil();

	}
	
//proses membaca
void prosesBaca () {
	cout<<"masukan Nilai A : ";
	cin>>a;
	
	cout<<"masukan Nilai B : ";
	cin>>b;
	}

//proses tambah
int prosesTambah () {
	return a + b;
	}
	
//proses kurang
int prosesKurang () {
	int hasil;
	hasil = a-b;
	
	return hasil;
	}
	
//prosesTampil
void prosesTampil () {

	cout<<"Hasil Tambah : "<<prosesTambah()<<endl;
	cout<<"Hasil Kurang : "<<prosesKurang();
	
	}
	