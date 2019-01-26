#include<iostream>
#define pi 3.14

using namespace std;

int main()
{
	float r, circ, area;
	cout<<"Enter the radius of the circle: ";
	cin>>r;
	
	area = pi * r * r;
	circ = 2 * pi * r;
	cout<<"Area = "<<area<<endl;
	cout<<"Circumferance = "<<circ<<endl;
	return 0;
}
