#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin>>n;

    for(int i = 0; i <= n; i++)
    {
        cout<<setw(n-i+1);
        for(int j = i; j >= 0; j--)
        {
            cout<<j;
        }
        for(int j = 1; j < i+1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}