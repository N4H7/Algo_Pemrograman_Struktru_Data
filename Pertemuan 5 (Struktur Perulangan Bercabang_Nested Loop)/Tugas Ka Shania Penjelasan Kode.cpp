#include <iostream>
using namespace std;
int main()
{
int x, bil=0; //Menyatakan variabel x dan bil sebagai integer, dan bil=0
cout<< "Masukan Bilangan Pembatas Akhir: "; //Melaksanakan output text dan input angka
cin>>x; //Memasukan nilai yang di input ke dalan nilai x

	do{ //Lakukan kode yang berada di dalam kurung kurawal
	if (bil>=x) //kode logika jika nilai dari bil lebih besar sama dengan 0, maka laksanakan kode di bawahnya
	break; // kode untuk stop jalannya kode, sehingga jika bil sudah lebih besar dari nilai x maka program akan berhenti sepenuhyna
	cout<<bil<<" "; //Melaksanakn output nilai dari bil dan spasi (" ") setelahnya
	} //tanda akhir dari kode yang di jalankan oleh kode logika (IF)
	while(bil+=4); // do dilaksanakan terlebih dahulu lalu di cek oleh while, bisa kode do terlebih dahulu ataupun while terlebih dahulu
	getchar(); // Membaca tipe data berupa karakter
}

