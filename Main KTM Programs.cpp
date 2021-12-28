// KTM Programs

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(){
	
	// Inisialisasi Variable
	int pilihan, Urutan = 100, Array_Data = 0, Data_Ke;
	string NPM[Urutan];
	string Nama[Urutan];
	string Fakultas[Urutan];
	string Jurusan[Urutan];
	string Prodi[Urutan];
	char Kelas, Ulang;
	
	
	// Halaman Awal
	do {
	
		system("CLS");
		
		cout << "====================" << endl;
		cout << "    KTM Programs    " << endl;
		cout << "====================" << endl;
		
		cout << endl << endl;
		
		cout << "Pilihan :" << endl;
		cout << "1. Buat KTM" << endl;
		cout << "2. Cek data KTM" << endl;
		cout << endl;
		
		cout << "Masukan pilihan (1/2) : ";
		cin  >> pilihan;
		
		if (pilihan == 1){
			
			system("CLS");
			
			// Input pengajuan ktm
			cout << "Halaman Pembuatan KTM" << endl;
			cout << "Isi form sesuai dengan data diri anda" << endl;
			cout << endl << endl;
			
			cout << "NPM : ";
			getline (cin >> ws, NPM[Array_Data]);
			
			cout << "Nama : ";
			getline (cin, Nama[Array_Data]);
			
			cout << "Fakultas : ";
			getline (cin, Fakultas[Array_Data]);
			
			cout << "Jurusan : ";
			getline (cin, Jurusan[Array_Data]);
			
			cout << "Prodi : ";
			getline (cin, Prodi[Array_Data]);
			
			
			// Output hasil pengajuan ktm
			system("CLS");
			cout << "Preview hasil pembuatan KTM" << endl;
			cout << endl;
			cout << "NPM \t : " << NPM[Array_Data] << endl;
			cout << "Nama \t : " << Nama[Array_Data] << endl;
			cout << "Fakultas : " << Fakultas[Array_Data] << endl;
			cout << "Jurusan  : " << Jurusan[Array_Data] << endl;
			cout << "Prodi \t : " << Prodi[Array_Data] << endl;
			cout << "Urutan \t : " << Array_Data << endl;
			getch();
			
			
		}
		
		else if (pilihan == 2){
			
			// Input cek data KTM
			system("CLS");
			cout << "Halaman cek data KTM" << endl;
			cout << endl;
			cout << "Masukan urutan data anda" << endl;
			cout << "Urutan : ";
			cin  >> Data_Ke;
			
			cout << endl;
			
			// Output cek data KTM
			cout << "NPM \t : " << NPM[Data_Ke] << endl;
			cout << "Nama \t : " << Nama[Data_Ke] << endl;
			cout << "Fakultas : " << Fakultas[Data_Ke] << endl;
			cout << "Jurusan  : " << Jurusan[Data_Ke] << endl;
			cout << "Prodi \t : " << Prodi[Data_Ke] << endl;
			
		}
		
		else{
			cout << "Pilihan tidak sesuai" << endl;
		}
	
		// Opsi mengulangi program
	        cout << endl;
	        cout << "Apakah Anda ingin menggunakan program ini kembali? \n";
			cout << "(Input 'Y' atau 'y' jika ingin menggunakan kembali) :  ";
	        cin  >> Ulang;
	
			Array_Data++;
	
	
	} while (Ulang == 'y' || Ulang == 'Y');
	
	// Halaman akhir
	system("CLS");
	cout << "\n Terima kasih telah menggunakan program ini! \n\n";
	cout << "- Press any key to exit -";
	getch();
	system("CLS");
	exit(0);
}