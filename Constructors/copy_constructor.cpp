#include <iostream>
using namespace std;

class Student
{
  private:
      string name;
      int age, year, sem;
      int marks[5];
      char grade;
      static int count_created;
      static int count_destroyed;
  
  public:
    Student(string n, int a, int y, int s)
    {
        count_created++;
        name  = n;
        age = a;
        year = y;
        sem = s;
    }

    void setMarksAndGrade()
    {
        bool pass = true;
        int temp, sum = 0;
        cout << "Enter your marks: " << endl;
        for(int i = 0; i < 5; i++)
        {
            cout << "Enter marks " << i+1 << ": ";
            cin >> temp;
            marks[i] = temp;
        }
        for(int i = 0; i < 5; i++)
        {
            sum += marks[i];
            if(marks[i] < 50)
                pass = false;
        }
        cout << sum << endl;
        float percent = sum/5;
        if(!pass)
        {
            grade = 'F';
        }
        else
        {
            if(percent >= 90 && percent <= 100)
                grade = 'S';
            else if(percent >= 80 && percent <= 89)
                grade = 'A';
            else if(percent >= 70 && percent <= 79)
                grade = 'B';
            else if(percent >= 60 && percent <= 69)
                grade = 'C';
            else if(percent >= 50 && percent <= 59)
                grade = 'D';
            else
                grade = 'F';
        }
    }

    void display_info()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Year of study: " << year << endl;
        cout << "Semester: " << sem << endl;
        cout << "Grade: " << grade << endl;
     }

    static void display_count();

    ~Student()
    {
        count_destroyed++;
    }
};

int Student::count_created = 0;
int Student::count_destroyed = 0;

void Student::display_count()
{
    cout << "Object creation: " << Student::count_created << " times" << endl;
    cout << "Object destroyed: " << Student::count_destroyed << " times" << endl;
}

int main()
{

    Student s2("Shva", 21, 2019, 6);
{
    Student s1("Shiva", 21, 2019, 6);

    s1.setMarksAndGrade();
    s1.display_info();
}

    s2.setMarksAndGrade();
    s2.display_info();
    Student::display_count();
}
