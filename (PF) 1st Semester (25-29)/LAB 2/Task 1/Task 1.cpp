#include<iostream>
//for power we use cmath
#include<cmath>
using namespace std;
int main(){
//	Declaration and initialization
	double x1=3,y1=4,x2=6,y2=8;
	double squared_distance;
//	Calculate Square Distance
	squared_distance=pow(x2-x1,2)+pow(y2-y1,2);
	cout<<"The squared distance between the points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is:"<<squared_distance<<endl;
	return 0;
	} 
