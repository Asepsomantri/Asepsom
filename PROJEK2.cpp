#include <iostream>
using namespace std;


//prototype
void prosesBaca();
void prosesTukar();
void prosesTampil();

// variabel global
	int a,b, temp;
	
	
//program utama
void PROJEK2 () {
		prosesBaca();
		prosesTukar();
		prosesTampil();
		
		}
		
//proses membaca
void prosesBaca () {
		cout<<"masukan nilai A :  ";
		cin>>a;
		
		cout<<"masukan nilai B : ";
		cin>>b;
		}
		
//proses tukar
void prosesTukar () {
		temp=b;
		b=a;
		a=temp;
		}

//proses tampil
void prosesTampil () {
		cout<<"======================"<<endl;
		cout<<" Nilai A sekarang : "<<a<<endl;
		cout<<" Nilai B sekarang : "<<b;
		
		}