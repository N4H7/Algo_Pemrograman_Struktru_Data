#include <iostream>
using namespace std;
int main()
{
	cout<<"Perulangan Bertambah"<<endl;
	for (int a = 0; a<=20; a++){
		cout<<a<<endl;
	}
	
	cout<<"\nPerulangan Bertambah Genap"<<endl;
	for (int b = 0; b<=20; b=b+2){
		cout<<b<<endl;
	}
	
	cout<<"\nPerulangan Berkurang"<<endl;
	for (int c = 20; c>=0; c--){
		cout<<c<<endl;
	}
	
	cout<<"\nPerulangan Berkurang Ganjil"<<endl;
	for (int d = 19; d>=1; d=d-2){
		cout<<d<<endl;
	}
	
	return 0;
}	
