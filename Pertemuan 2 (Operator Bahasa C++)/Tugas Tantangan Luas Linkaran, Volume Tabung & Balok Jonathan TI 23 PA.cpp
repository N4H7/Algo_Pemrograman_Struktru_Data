#include <iostream>
using namespace std;
int main()
{
	// Luas Lingkaran 1
	cout<< " !!Menghitung Luas Lingkaran!!"<<endl;
	cout<< " !!         Pertama         !!"<<endl;
	cout<< " ============================="<<endl;
	
	float r1,phi1,L1;
	phi1 = 3.14;
	cout<< "Masukan Panjang Jari-Jari: ";
	cin>>r1;
	cout<< "Jari -Jari Lingkarang Pertama Adalah: "<< r1 << "cm" << "\n";
	
	// Luas Lingkarang 2
	cout<< "\n !!Menghitung Luas Lingkaran!!"<<endl;
	cout<< " !!         Kedua           !!"<<endl;
	cout<< " ============================="<<endl;
	
	float r2,phi2,L2;
	phi2 = 3.14;
	cout<< "Masukan Panjang Jari-Jari: ";
	cin>>r2;
	cout<< "Jari-Jari Lingkaran Kedua Adalah: "<< r2 << "cm" << "\n";
	
	// =====================================================================
	
	// Volume Tabung 1
	cout<< "\n !!Menghitung Volume Tabung!!"<<endl;
	cout<< " !!         Pertama        !!"<<endl;
	cout<< " ============================"<<endl;
	
	float r3,phi3,t3,V3;
	phi3 = 3.14;
	cout<< "Masukan Panjang Jari-Jari: ";
	cin>>r3;
	cout<< "Masukan Tinggi Tabung: ";
	cin>>t3;
	cout<<endl;
	cout<< "Jari-Jari Tabung Pertama Adalah: "<< r3 << "cm" << "\n";
	cout<< "Tinggi Tabung Pertama Adalah: "<< t3 << "cm" << "\n";
	
	// Volume Tabung 2
	cout<< "\n !!Menghitung Volume Tabung!!"<<endl;
	cout<< " !!         Pertama        !!"<<endl;
	cout<< " ============================"<<endl;
	
	float r4,phi4,t4,V4;
	phi4 = 3.14;
	cout<< "Masukan Panjang Jari-Jari: ";
	cin>>r4;
	cout<< "Masukan Tinggi Tabung: ";
	cin>>t4;
	cout<<endl;
	cout<< "Jari-Jari Tabung Pertama Adalah: "<< r4 << "cm" << "\n";
	cout<< "Tinggi Tabung Pertama Adalah: "<< t4 << "cm" << "\n";
	
	// ======================================================================
	
	// Volume Balok 1
	cout<< "\n !!Menghitung Volume Balok!!"<<endl;
	cout<< " !!         Pertama        !!"<<endl;
	cout<< " =========================="<<endl;
	
	float p,l,t,v;
	cout<< "Masukan Panjang Balok Pertama: ";
	cin>>p;
	cout<< "Masukan Lebar Balok Pertama: ";
	cin>>l;
	cout<< "Masukan Tinggi Balok Pertama: ";
	cin>>t;
	cout<<endl;
	cout<< "Panjang Balok Pertama Adalah: "<< p << "cm" << "\n";
	cout<< "Lebar Balok Pertama Adalah: "<< l << "cm" << "\n";
	cout<< "Tinggi Balok Pertama Adalah: "<< t << "cm" << "\n";
	
	// Volume Balok 2
	cout<< "\n !!Menghitung Volume Balok!!"<<endl;
	cout<< " !!          Kedua         !!"<<endl;
	cout<< " =========================="<<endl;
	
	float p2,l2,t2,v2;
	cout<< "Masukan Panjang Balok Kedua: ";
	cin>>p2;
	cout<< "Masukan Lebar Balok Kedua: ";
	cin>>l2;
	cout<< "Masukan Tinggi Balok Kedua: ";
	cin>>t2;
	cout<<endl;
	cout<< "Panjang Balok Kedua Adalah: "<< p2 << "cm" << "\n";
	cout<< "Lebar Balok Kedua Adalah: "<< l2 << "cm" << "\n";
	cout<< "Tinggi Balok Kedua Adalah: "<< t2 << "cm" << "\n";
	cout<<"\n";
	
	// =======================================================================
	
	// Hasil Luas Lingkaran Pertama
	L1 = phi1 * r1 * r1;
	
	cout<< "L =" <<phi1<< " X " <<r1<< " x " <<r1;
	cout<<endl;
	cout<< "Hasil Dari Luas Lingkarang Pertama Adalah: "<<L1<< " Cm2";
	cout<<endl;
	cout<<"\n";
	
	// Hasil Luas Lingkaran Kedua
	L2 = phi2 * r2 * r2;
	
	cout<< "L =" <<phi2<< " X " <<r2<< " x " <<r2;
	cout<<endl;
	cout<< "Hasil Dari Luas Lingkarang Pertama Adalah: "<<L2<< " Cm2";
	cout<<endl;
	cout<<"\n";

	// Hasil Tabung 1
	V3 = phi3 * r3 * r3 * t3;
	
	cout<< "V =" <<phi3<< " X " <<r3<< " x " <<r3<< " x " <<t3;
	cout<<endl;
	cout<< "Hasil Dari Volume Tabung Pertama Adalah: "<<V3<< " Cm3";
	cout<<endl;
	cout<<"\n";
	
	// Hasil Tabung 2
	V4 = phi4 * r4 * r4 * t4;
	
	cout<< "V =" <<phi4<< " X " <<r4<< " x " <<r4<< " x " <<t4;
	cout<<endl;
	cout<< "Hasil Dari Volume Tabung Pertama Adalah: "<<V4<< " Cm3";
	cout<<endl;
	cout<<"\n";
	
	// Hasil Balok 1
	v = p * l * t;
	
	cout<< "v =" <<p<< " x " <<l<< " x " <<t;
	cout<<endl;
	cout<< "Hasil Dari Volume Balok Pertama Adalah: "<<v<< " cm3";
	cout<<endl;
	cout<<"\n";
	
	// Hasil Balok 2
	v2 = p2 * l2 * t2;
	
	cout<< "v =" <<p2<< " x " <<l2<< " x " <<t2;
	cout<<endl;
	cout<< "Hasil Dari Volume Balok Pertama Adalah: "<<v2<< " cm3";
	cout<<endl;
	cout<<"\n";
	
	return 0;
}
