#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int a,b,res;
	char op;
	
	cout<<"Enter 2 numbers separated by space: ";
	cin>>a>>b;
	
	cout<<"Enter the operator ";
	cin>>op;
	
	if(op=='+')
	{
		res = a + b;
	}
	
	else if(op=='-')
	{
		res = a - b;
	}
	
	else if(op=='*')
	{
		res = a * b;
	}
	
	else if(op=='/')
	{
		res = a / b;
	}
	
	else if(op=='%')
	{
		res = a % b;
	}
	
	else
	{
		cout<<"Enter a valid choise"<<endl;
		exit(0);
	}
		
	cout<<"Result: "<< a << " " << op << " " << b << " = " << res << endl;
			
	return 0;
}
