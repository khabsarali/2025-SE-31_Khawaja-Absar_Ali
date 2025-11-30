#include<iostream>
using namespace std;
int main()
{
	int a;
	cout <<"Enter a number:"<<endl;
	cin >> a;
	//    Now we determine the age using ternary operators
	(a<13)?cout<<"Child"<<endl:
	(a>=13 && a<=19)?cout<<"Teenager":cout << "Adult";
	return 0;
}
