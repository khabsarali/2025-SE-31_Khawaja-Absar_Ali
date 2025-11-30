#include <iostream>
//iomanip stand for input output manipulation
#include<iomanip>
using namespace std;
int main() {
//	Declare
    double num1 = 85.5, num2 = 90.75, num3 = 88.25;
//    Add
    double sum = num1 + num2 + num3;
//    average
    double average = sum / 3;
    cout<< fixed<<setprecision(2);
    cout << "The average of "<<num1<<" , "<<num2<<" and "<<num3<<" = "<<average<< endl;
    return 0;
}

