#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Your Account Balance:$";
	//Taking the value from the user
	cin>>a;
	//using bool a datatype returns only two values 1and 0 (true or false)
    bool loyal;
    cout << "Are you loyal customer? (1 = Yes, 0 = No): ";
    cin >> loyal;
//    Now we determine the account using ternary operators
	(a<100)?cout<<"Low Account Balance"<<endl:
	(a>=100&&a<=500)?cout<<"Standard Account":cout<<"Premium Account"<<endl;
	cout<<"Special Offer Status: ";
	bool (a>200 && loyal)?cout<<"You are Eligible":cout<<"Not Eligible";
	return 0;
    }
