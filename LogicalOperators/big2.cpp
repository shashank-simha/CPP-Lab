#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cout<<"Enter 2 numbers separated by space: ";
	cin>>a>>b;
	
	if(a>b)
	cout<<"Largerst number is "<<a<<endl;
	
	else if(a<b)
	cout<<"Largerst number is "<<b<<endl;
	
	else 
	cout<<"Both numbers are equal"<<endl;
	
	return 0;
}
