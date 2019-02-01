#include<iostream>
using namespace std;

int main()
{
    int i=0;
    float temp,sum=0;
    cout<<"enter the numbers"<<endl;
    do{
        cin>>temp;
        sum+=temp;
        i++;
    }
    while(i<10);
    cout<<"the sum is:"<<sum<<endl;
    cout<<"the average is:"<<sum/10<<endl;
    return 0;
}
