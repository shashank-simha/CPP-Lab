#include<iostream>
using namespace std;

int main()
{
    int sum=0,n;
    cout<<"enter the numbers"<<endl;
    cin>>n;
       while(n%10!=0)
    {

        sum+=n%10;
        n=n/10;
    }
    cout<<"The sum of digits is: "<<sum<<endl;
    return 0;
}
