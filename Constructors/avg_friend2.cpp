#include<iostream>

using namespace std;
class Numbers2;
class Numbers1
{
   public: int a[2];


   public: Numbers1()
   {
       cout<<"Enter two integers: ";
       for(int i = 0; i < 2; i++)
       cin>>a[i];
   }

   public: friend float calculateAvg(Numbers1 n1, Numbers2 n2);

};
class Numbers2
{
   public: int a[3];


   public: Numbers2()
   {
       cout<<"Enter three integers: ";
       for(int i = 0; i < 3; i++)
       cin>>a[i];
   }

   public: friend float calculateAvg(Numbers1 n1, Numbers2 n2);

};


float calculateAvg(Numbers1 n1, Numbers2 n2)
{
   float avg = 0;
   
   for(int i = 0; i < 2; i++)
   avg += n1.a[i];
   
   for(int i = 0; i < 3; i++)
   avg += n2.a[i];

   avg /= 5;

   return avg;
}

int main()
{
   Numbers1 n1;
   Numbers2 n2;
   float average;

   average = calculateAvg(n1, n2);
   cout<<"The average is "<<average<<endl;

   return 0;
}