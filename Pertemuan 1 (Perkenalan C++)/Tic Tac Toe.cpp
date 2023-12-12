#include<iostream>
using namespace std;

int main ()
{
	
	int space [3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	string n1;
	string n2;
	cout<<"Enter The Name Of The First Player : \n";
	getline(cin, n1);
	cout<<"Enter The Name Of The Second PLayer : \n";
	getline(cin, n2);
	cout<<n1<< "is Player1 So He/She Will Play First \n";
	cout<<n1<< "is Player2 So He/She Will Play Second \n";
	
   cout<< "   |     |  \n";
   cout<< " "<<space[0][0]<<" |  "<<space[0][1]<<"  | "<<space[0][2]<<"  \n";
   cout<< "___|_____|___\n";
   cout<< "   |     |  \n";
   cout<< " "<<space[1][0]<<" |  "<<space[1][1]<<"  | "<<space[1][2]<<"  \n";
   cout<< "___|_____|___\n";
   cout<< "   |     |  \n";
   cout<< " "<<space[2][0]<<" |  "<<space[2][1]<<"  | "<<space[2][2]<<"  \n";
   cout<< "   |     |  \n";
}
