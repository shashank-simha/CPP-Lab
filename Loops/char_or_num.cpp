#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch>=48 && ch<=57) {
        cout<<"The entered character is a number"<<endl;
    }

    else if (ch>=65 && ch<=90) {
        cout<<"The entered character is an Upper case character"<<endl;
    }
    
    else if (ch>=97 && ch<=122) {
        cout<<"The entered character is an Lower case character"<<endl;
    }

    else {
        cout<<"Other character"<<endl;
    }
    return 0;
}
