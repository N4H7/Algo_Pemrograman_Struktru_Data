#include <iostream>
#include <string>
using namespace std;
struct siswa{
	int no_induk;
	string nama;
	float nilai;
};
int main(){
	siswa Arkan, Lucas;
	Arkan.no_induk = 1;
	Arkan.nama = "Arkan Januar";
	Arkan.nilai = 75.5;
	Arkan.no_induk = 2;
	Lucas.no_induk = 2;
	Lucas.nama = "Lucas Laksono";
	Lucas.nilai = 83.9;
	cout<<Arkan.nama<< " dengan nomor induk "<<Arkan.no_induk<< " mendapatkan nilai "<<Arkan.nilai<<endl;
	cout<<Lucas.nama<< " dengan nomor induk "<<Lucas.no_induk<< " mendapatkan nilai "<<Lucas.nilai<<endl;
	return 0;
}

//============================================================================================================

struct siswa{
	int no_induk;
	string nama;
	float nilai;
};
int main(){
	siswa Jery={1, "Jery Januar", 85.5};
	siswa Tono={1, "Tono Laksono", 89.9};
	cout<<Jery.nama<<" mendapatkan nilai "Jery.nilai<<endl;
	cout<<Tono.nama<<" mendapatkan nilai "Tono.nilai<<endl;
	return 0;
}

//=============================================================================================================

int main(){
	struct dtmhs{
		char nim[9];
		char nama [15];
	};
	struct dtnil{
		float nil1;
		float nil2;
	};
	struct{
		struct dthms mhs;
		struct stnil nil;
	}nilai;
	//clrscr();

	cout<<"Masukan NIM = "; cin>>nilai.mhs.nim;
	cout<<"Masukan Nama = "; cin>>nilai.mhs.nama;
	cout<<"Masukan Nilai UTS = "; cin>>nilai.nil.nil1;
	cout<<"Masukan Nilai UAS = "; cin>>nilai.nil.nil2;
	cout<<endl;
	
	cout<<"Masukan NIM = "<<nilai.mhs.nim<<endl;
	cout<<"Masukan Nama = "<<nilai.mhs.nama<<endl;
	cout<<"Masukan Nilai UTS = "<<nilai.nil.nil1<<endl;
	cout<<"Masukan Nilai UAS = "<<nilai.nil.nil2<<endl;
	cout<<endl;
getchar();
return(0);
}

typedef struct orang{
	char nama[30];
	short umur;
};
org;
int main(){
	org saya[5];
	int i,x;
	for(i=0; i<=2; i++){
		cout<<"Nama : ";cin>>saya[i].nama;
		cout<<"Umur : ";cin>>saya[i].umur;
		cout<<endl;
	}
	for(x=0; x<=2; x++){
		cout<<"Data ke ["<<x<<"] "<<"bernama "<<saya[x].nama"dan berumur "<<saya[x].umur<<" tahun";
		cout<<endl;
	}
} 

struct Sum{
	int add(int num1, int num2){
		return num1 + num2;
	}
	int add(int num1, int num2, int num3){
		return num1 + num2 + num3;
	}
};
int main(){
	Sum calculator;
	cout<<"Hasil 1 = "<<calculator.add(5, 7)<<endl;
	cout<<"Hasil 2 = "<<calculatro.add(9, 2, 5)<<endl;
}

int main(){
	struct {
		char nim[9];
		char nama[15];
		float nilai;
	};
	mahasiswa;
	//clrscr();
	cout<<"Masukan NIM = ";
	cin>>mahasiswa.nim;
	cout<<"Masukan Nama = ";
	con>>mahasiswa.nama;
	cout<<"Masukan Nilai Akhir";
	cin>>mahasiswa.nilai;
	
	cout<<"\n\nData Yang di Inputkan adlah : \n\n";
	cout<<"NIM = "<<mahasiswa.nim<<endl;
	cout<<"Nama = "<<mahasiswa.nama<<endl;
	cout<<"Nilai Akhir = "<<mahasiswa.nilai<<endl;
	getchar();
}
