// this program is made by deepansh jain {55}
#include<iostream>
using namespace std;
int average(int num1,int num2,int num3){
  float  average=(num1+num2+num3)/3.0;
  cout<<"The average of the three numbers are: "<<average;
}
int main(){
	float num1,num2,num3;
	cout<<"Enter the value of first number: ";
	cin>>num1;
		cout<<"Enter the value of second number: ";
	cin>>num2;
		cout<<"Enter the value of third number: ";
	cin>>num3;
	average(num1,num2,num3);
}
