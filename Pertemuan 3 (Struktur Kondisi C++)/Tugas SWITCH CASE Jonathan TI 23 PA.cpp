#include <iostream>
using namespace std;
int main()
{
	char nama[40];
	int ns1,ns2,ns3,rr;
	cout<<"Menghitung Nilai Rata-Rata"<<endl;
	cout<<"Masukan Nama Siswa: ";
	cin>>nama;
	cout<<"Masukan Nilai pertandingan I: ";
	cin>>ns1;
	cout<<"Masukan Nilai pertandingan II: ";
	cin>>ns2;
	cout<<"Masukan Nilai pertandingan III: ";
	cin>>ns3;
	
	rr = (ns1 + ns2 + ns3) / 3;
	
//	=================================================

	switch (rr)
	{
	case 70 ... 84:
		cout<<"\nSiswa yang Bernama "<<nama;
		cout<<"\nMemperoleh Nilai Rata-Rata "<<rr<<" Dari Hasil Perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapatkan adalah uang sebesar Rp 2.500.000!";
		break;

	case 85 ... 100:
		cout<<"\nSiswa Bernama "<<nama;
		cout<<"\nMemperoleh Nilai Rata-Rata "<<rr<<" Dari Hasil Perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapatkan adalah Processor Intel Core i5!";
		break;

	case 1 ... 69:
		cout<<"\nSiswa Bernama "<<nama;
		cout<<"\nMemperoleh Nilai Rata-Rata "<<rr<<" Dari Hasil Perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapatkan adalah hiburan!";
		break;
	}
	return 0;
}

