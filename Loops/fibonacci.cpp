#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, t3 = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << t1 << " " ;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        
        cout << t3 << " ";
    }
    return 0;
}