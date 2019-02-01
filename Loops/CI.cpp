#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float P,R,T,CI;
	cout<<"Enter Principal : ";
	cin>>P;
    cout<<"Enter Rate fo interest : ";
	cin>>R;
    cout<<"Enter Number of Years : ";
	cin>>T;
	CI=P*pow((1+R/100),T) - P;
	cout<<"Compound Interest is : "<<CI<<endl;
    
	return 0;
}