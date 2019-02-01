#include<iostream>
using namespace std;

int main()
{
    int i,temp=0,sum=0;
    cout<<"enter ten numbers"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    cout<<"the sum is:"<<sum<<endl;
    cout<<"the average is:"<<sum/10<<endl;
    return 0;
}