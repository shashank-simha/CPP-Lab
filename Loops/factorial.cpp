#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial<<endl;    
    return 0;
}
