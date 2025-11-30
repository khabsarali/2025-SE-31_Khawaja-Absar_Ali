#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a number: " << endl;
	cin >> a;
	//    Now we determine the integer using ternary operators
	(a%2==0)?cout<<"The number "<< a << " is " << " even " <<endl: cout<<" The Number "<<a<<" is " << "odd" << endl;
	
	return 0;
	
}

