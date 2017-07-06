/* Asep Somantri
* NIM. 16.111.173
* TIF RM 16C
* TUGAS UAS (06/07/2017)
*/

/#include <iostream> //input & output stream
/#include "array1.cpp"
/#include "Binary.cpp"
/#include "main.cpp"
/#include "matriks1.cpp"
/#include "matriks2.cpp"
/#include "matriks3.cpp"
/#include "menentukannilaimax.cpp"
/#include "praktek2.cpp"
/#include "praktek3.cpp"
/#include "praktek4.cpp"
/#include "PROJEK1.cpp"
/#include "PROJEK2.cpp"
/#include "PROJEK3.cpp"
/#include "PROJEK4.cpp"
/#include "PROJEK5.cpp"
/#include "sttb.cpp"
/#include "tugas.cpp"
/#include "Tugas_Tiket_kereta_api.cpp"
/#include "tugasfactorial.cpp"

using namespace std;

int main(){
	int pil;
	system("clear");
		cout<<"-----------------------------\n";
		cout<<"PROGRAM KOMPILASI APPLIKASI\n";
		cout<<"UAS ALGORITMA PEMROGRAMAN II\n";
		cout<<"Dosen : Frencius, MT.\n";
		cout<<"Nama  : Asep Somantri\n\n\n";
        cout<<"-----------------------------\n";
		cout<<"------------MENU-------------\n";
        cout<<"1. array\n";
        cout<<"2. Binary\n";
        cout<<"3. main\n";
        cout<<"4. matriks1\n";
        cout<<"5. matriks2\n";
        cout<<"6. matriks3\n";
        cout<<"7. menentukannilaimax\n";
        cout<<"8. praktek2\n";
        cout<<"9. praktek3\n";
        cout<<"10.praktek4\n";
        cout<<"11. PROJEK1\n";
        cout<<"12. PROJEK2\n";
		cout<<"13. PROJEK3\n";
		cout<<"14. PROJEK4\n";
		cout<<"15. PROJEK5\n";
		cout<<"16. sttb\n";
		cout<<"17. tugas\n";
		cout<<"18. Tugas_Tiket_kereta_api\n";
		cout<<"19. tugasfactorial\n";
    
    
    
        
        cout<<"\n"<<"Masukan Pilihan :";
		cin>>pil;
		
		if(cin.fail()){
			cin.clear(); cin.ignore(); main();
		} else {		
			//seleksi data
			if(pil == 1){ per1();}
			else if(pil == 2){ array(); }
            else if(pil == 3){ Binary(); }
            else if(pil == 4){ main(); }
            else if(pil == 5){ matriks1(); }
            else if(pil == 6){ matriks2(); }
            else if(pil == 7){ matriks3(); }
            else if(pil == 8){ menentukannilaimax(); }
            else if(pil == 9){ praktek2(); }
            else if(pil == 10){ praktek3(); }
            else if(pil == 11){ praktek4(); }
            else if(pil == 12){ PROJEK1(); }
			else if(pil == 13){ PROJEK2(); }
			else if(pil == 14){ PROJEK3(); }
			else if(pil == 15){ PROJEK4(); }
			else if(pil == 16){ PROJEK5(); }
			else if(pil == 17){ sttb(); }
			else if(pil == 18){ Tugas_Tiket_kereta_api(); }
			else if(pil == 19){ tugasfactorial(); }
			
			else{
				//return main();
                cout<<"KESALAHAN INPUT, ULANGI!\n\n";
			}
		}		
	
}