#include<iostream>
using namespace std;
class counter
{
   static int number;

   public: counter()
    {
        ++number;
        cout<<"number of objects created is"<<counter::number<<endl;
    }

};

int counter::number=0;

int main()
{
    counter obj1,obj2,obj3;
    return 0;
}
