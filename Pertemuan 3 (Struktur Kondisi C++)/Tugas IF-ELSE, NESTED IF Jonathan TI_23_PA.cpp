#include <iostream>
using namespace std;
int main()
{
	char nama[40];
	float ns1,ns2,ns3,rr;
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
	
	
	if (rr >= 1)
	{
		if (rr >= 70 && rr < 85){
			cout<<"\nSiswa yang Bernama "<<nama;
			cout<<"\nMemperoleh Nilai Rata-Rata "<<rr<<" Dari Hasil Perlombaan yang diikutinya"<<endl;
			cout<<"Hadiah yang didapatkan adalah uang sebesar Rp 2.500.000!";
		}
		else if (rr >= 85){
			cout<<"\nSiswa Bernama "<<nama;
			cout<<"\nMemperoleh Nilai Rata-Rata "<<rr<<" Dari Hasil Perlombaan yang diikutinya"<<endl;
			cout<<"Hadiah yang didapatkan adalah Processor Intel Core i5!";
		}
		else if (rr < 70){
			cout<<"\nSiswa Bernama "<<nama;
			cout<<"\nMemperoleh Nilai Rata-Rata "<<rr<<" Dari Hasil Perlombaan yang diikutinya"<<endl;
			cout<<"Hadiah yang didapatkan adalah hiburan!";
		}
	}
	else (rr = 0) {
		cout<<"\nSiswa Bernama "<<nama;
		cout<<"\nMemperoleh Nilai Rata-Rata "<<rr<<" Dari Hasil Perlombaan yang diikutinya"<<endl;
		cout<<"Hadiah yang didapatkan adalah hiburan!";
	}
	
	return 0;
}
