#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter two intergers separated with space: ";
	cin>>a>>b;
	cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
	
	c=a;
	a=b;
	b=c;
	
	cout<<"After swapping: a="<<a<<" b="<<b<<endl;
	return 0;
}
