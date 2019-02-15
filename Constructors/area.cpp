#include<iostream>
#include<math.h>

#define pi 3.14

using namespace std;

class area
{
    int base;
    float height;
    int length;
    int breadth;
    int radius;

    public:area()
    {
        cout<<"The required area is"<<endl;
    }


    area(int b,float h)
    {
        base=b;
        height=h;
        cout<<"Area of triangle is "<<0.5*base*height<<endl;
    }

    area(int l,int br)
    {
        length=l;
        breadth=br;
        cout<<"Area of rectangle is "<<length*breadth<<endl;
    }

    area(int r)
    {
        radius=r;
        cout<<"area of circle is "<<pi*radius*radius;
    }

};


int main()
{

    int b,l,br,r,c;
    float h;

    cout<<"Enter the choice:  1=triangle 2=rectangle 3=circle "<<endl;
    cin>>c;
    area();
    
    switch(c)
    {
        case 1: cout<<"enter value of base and height";
                cin>>b>>h;
                area(b,h);
                break;

        case 2: cout<<"enter value of length and breadth";
                cin>>l>>br;
                area(l,br);
                break;

        case 3: cout<<"enter the value of radius";
                cin>>r;
                area(r);
                break;
        // default: cout<<"wrong choice"<<endl;
    }
    return 0;
}