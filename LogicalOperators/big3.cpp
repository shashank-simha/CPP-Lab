#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers separated by space: ";
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	cout<<"Largerst number is "<<a<<endl;
	
	else if(b>a && b>c)
	cout<<"Largerst number is "<<b<<endl;
	
	else if(c>a && c>b)
	cout<<"Largerst number is "<<c<<endl;
	
	else 
	cout<<"All three numbers are equal"<<endl;
	
	return 0;
}
