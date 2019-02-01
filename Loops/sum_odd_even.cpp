#include<iostream>
using namespace std;

int main()
{
    int even=0, odd=0,i;
    
    for( i = 1; i <= 10; i++)
    {
        if (i%2 == 0) {
            even += i;
        }

        else
        {
            odd += i;
        }
        
    }
    cout<<"Sum of even numbers = "<<even<<endl<<"Sum of odd numbers = "<<odd<<endl;
    return 0;
} 