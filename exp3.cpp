#include<iostream>
#include<iomanip>
using namespace std;
class date
{
private:
       	int day;
	int month;
	int year;

public:

 date()
   {
	cout<<"Enter the date"<<endl;
	cin>>day;

	cout<<"Enter the month"<<endl;
	cin>>month;

	cout<<"Enter the year"<<endl;
	cin>>year;
  }


       void display()
		{
  		cout<<"Dates in the format of  dd-mm-yyyy is:- " <<day<<"-"<<month<<"-"<<year<<endl;

		cout<<"Dates in the format of dd/mm/yyyy is :-"<<day<<"/"<<month<<"/"<<year<<endl;

          	}

			date(int d,int m,int y)
				{
					cout<<"Enter date"<<endl;
					cin>>d;
					cout<<"Enter month"<<endl;
					cin>>m;
					cout<<"Enter year"<<endl;
					cin>>y;
					 cout<<"Dates in the format of  dd-mm-yyyy is:- " <<d<<"-"<<m<<"-"<<y<<endl;

                			cout<<"Dates in the format of dd/mm/yyyy is :-"<<d<<"/"<<m<<"/"<<y<<endl;


				}

};

int main(){

	date a;
         a.display();
int d;
int m;
int y;

        date b(d,m,y);
}
