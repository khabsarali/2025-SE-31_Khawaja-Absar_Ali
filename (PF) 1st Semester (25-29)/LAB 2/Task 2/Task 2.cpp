#include<iostream>
using namespace std;
int main(){
//	Declare Constant (% is a modulus operator)
     const double SALES_TAX_RATE = 0.06;
//  Declare each item
    double item1 = 12.95 , item2 = 24.95 , item3 = 6.95 , item4 = 14.95 , item5 = 3.95;
//    Displaying each item
    cout<<"Item 1 :$"<<item1<<endl;
    cout<<"Item 2 :$"<<item1<<endl;
    cout<<"Item 3 :$"<<item1<<endl;
    cout<<"Item 4 :$"<<item1<<endl;
    cout<<"Item 5 :$"<<item1<<endl;
//    Calculate Sum
    double subtotal = item1 + item2 + item3 + item4 + item5;
//    Calculate saletax
    double salestax = subtotal * SALES_TAX_RATE;
//    Calculate total
    double total = subtotal+salestax;
//    Displaying all calculations
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (6%): $" << salestax << endl;
    cout << "Total Amount: $" << total << endl;
    return 0;
    }
