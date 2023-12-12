#include <iostream>
using namespace std;

int main() 
{
	char operasi;
	cout << "Pilih Operasi (+ - * /): ";
	cin>>operasi;
	
	if (operasi == '+') {
	int a,b;
	cout << "Penjumlahan" "\n" <<endl;
	cout << "Masukan Bilangan A: ";
	cin>>a;
	cout << "Masukan Bilangan B: ";
	cin>>b;	
	cout << "Hasil Penjumlahan A dan B Adalah: " << a + b <<endl;
	}
	
	else if (operasi == '-') {
	int a,b;
	cout << "Pengurangan" "\n" <<endl;
	cout << "Masukan Bilangan A: ";
	cin>>a;
	cout << "Masukan Bilangan B: ";
	cin>>b;	
	cout << "Hasil Pengurangan A dan B Adalah: " << a - b <<endl;
	}
	
	else if (operasi == '*') {
	int a,b;
	cout << "Perkalian" "\n" <<endl;
	cout << "Masukan Bilangan A: ";
	cin>>a;
	cout << "Masukan Bilangan B: ";
	cin>>b;	
	cout << "Hasil Perkalian A dan B Adalah: " << a * b <<endl;
	}
	
	else if (operasi == '/') {
	int a,b;
	cout << "Pembagian" "\n" <<endl;
	cout << "Masukan Bilangan A: ";
	cin>>a;
	cout << "Masukan Bilangan B: ";
	cin>>b;	
	cout << "Hasil Pembagian A dan B Adalah: " << a / b <<endl;
	}
	
	else {
	cout << "Maaf Akang/Teteh, Operasi Yang Di Pilih Belum Tersedia, SIlahkan Pilih Operasi Yang Lain:)!" <<endl;
	}
	
	return 0;
	
}
