#include<iostream>

using namespace std;

class Average
{
    public: int numbers[5];
    
    public: Average()
    {
        cout<<"Enter five integers: ";
        for(int i = 0; i < 5; i++)
        cin>>numbers[i];
    }

    public: friend float calculate(Average average);

};

float calculate(Average average)
{
    float avg = 0;
    for(int i = 0; i < 5; i++)
    avg += average.numbers[i];

    avg /= 5;

    return avg;
}

int main()
{
    Average avg;
    float average;

    average = calculate(avg);
    cout<<"The average is "<<average<<endl;

    return 0;
}