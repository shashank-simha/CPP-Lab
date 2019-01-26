#include<iostream>

using namespace std;

int main()
{
	int date,month,year;
	cout<<"Enter date, month and year separated by spaces: ";
	cin>>date>>month>>year;
	
	if(year%4 == 0)
	{
		cout<<"The entered year is a leap year"<<endl;
	}
	
	else
	{
		cout<<"The entered year is not a leap year"<<endl;
	}
	
	switch(month)
	{
		case 1:
			cout<<"The month is January"<<endl;
			if(date>=1 && date<=31)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 2:
			cout<<"The month is February"<<endl;
			if((date>=1 && date<=28) || (year%4==0 && date==29))
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 3:
			cout<<"The month is March"<<endl;
			if(date>=1 && date<=31)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 4:
			cout<<"The month is April"<<endl;
			if(date>=1 && date<=30)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 5:
			cout<<"The month is May"<<endl;
			if(date>=1 && date<=31)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 6:
			cout<<"The month is June"<<endl;
			if(date>=1 && date<=30)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 7:
			cout<<"The month is July"<<endl;
			if(date>=1 && date<=31)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 8:
			cout<<"The month is August"<<endl;
			if(date>=1 && date<=31)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 9:
			cout<<"The month is September"<<endl;
			if(date>=1 && date<=30)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 10:
			cout<<"The month is October"<<endl;
			if(date>=1 && date<=31)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 11:
			cout<<"The month is November"<<endl;
			if(date>=1 && date<=30)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		case 12:
			cout<<"The month is "<<endl;
			if(date>=1 && date<=31)
				cout<<"The entered date is valid"<<endl;
			else
				cout<<"The entered date is invalid"<<endl;
			break;
			
		default:
			cout<<"The entered month is invalid"<<endl;
			break;
	}
	return 0;
}
