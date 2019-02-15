#include<iostream>
using namespace std;

class football{
    string logo;
    int no;
    string name;
    int matches;
    int goal;

    public: void disp(int no,string name,int mat,int goal,string logo)
    {
        no=no;
        name=name;
        matches=mat;
        goal=goal;
        logo=logo;
        cout<<"player number="<<no<<endl<<"name="<<name<<endl<<"no of matches="<<matches<<endl<<"no of goals"<<goal<<endl<<"team="<<logo<<endl;
    }

};


int main()
{
    football f1,f2;
    f1.disp(2,"messi",100,50,"bfc");
    f2.disp(3,"ronaldo",105,30,"rm");
    return 0;

}
