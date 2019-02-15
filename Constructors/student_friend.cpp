#include <iostream>
using namespace std;

class Student
{
  private:
      string name;
      int marks[3];
      char grade;
  
  public:
    Student();
    
    void set_data(string n, int m1, int m2, int m3)
    {
        name  = n;
        marks[0] = m1;
        marks[2] = m2;
        marks[3] = m3;
    }

    void get_data()
    {
        string name;
        int m1,m2,m3;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the marks";
        cin>>m1>>m2>>m3;
        set_data(name, m2,m2,m3);
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks obtained: " << marks[1] << marks[2] << marks[3] << endl;
    }

    friend float markAvg(Student student);

};

float markAvg(Student student)
{
    float avg = 0;
    for(int i = 0; i < 3; i++)
    avg += student.marks[i];

    avg /= 3;

    return avg;
}


int main()
{
    Student st;
    st.get_data();
    st.display();
    cout<<"The average is: "<<markAvg(st);

    return 0;
}
