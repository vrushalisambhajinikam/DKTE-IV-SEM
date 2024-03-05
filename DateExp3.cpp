
#include<iostream>
using namespace std;
class DateExp
{
	        public:
                int date,month,year,dyear,dmonth,ddate,date2,month2,year2;

        public:
 		DateExp()
		{
			cout<<"Enter Date:"<<endl;
			cin>>date;
			cout<<"Enter Month:"<<endl;
			cin>>month;
			cout<<"Enter Year:"<<endl;
			cin>>year;
		}               
		void Display()
		{
			cout<<"Format Date :     "<<date<<"/"<<month<<"/"<<year<<endl;
		}

	public:
		 DateExp(int date2,int month2,int year2)
                {
	
			  cout<<"Date :"<<date2<<endl;
                        cout<<"Month:"<<month2<<endl;
                        cout<<"Year:"<<year2<<endl;
		}
		
		
		int calYear()
		{
			 
                        if(year>year2)
                        {
                                dyear=year-year2;
                        }
                        else if(year==year2)
                        {
				dyear=0;
                                cout<<"Both Year are equal";
                        }
                        else 
                        {
                                dyear=year-year2;
                        }
			return dyear;
		}

		int  calMonth()
		{
			if(month>month2)
			{
				dmonth=month-month2;
			}
			else if(month==month2)
			{
				dmonth=0;
			}
			else
			{
				dmonth=month-month2;
			}
			return dmonth;
		}

		int calDate()
		{
			if(date>date2)
			{
				ddate=date-date2;
			}
			else if(date==date2)
			{
				ddate=0;
			}
			else
			{
				ddate=date-date2;
			}
			return ddate;

		}
		void Diff()
		{
			int  newdate=calDate();
			int newmonth=calMonth();
			int newyear=calYear();

			cout<<"Diff is :"<<newdate<<"/"<<newmonth<<"/"<<newyear<<endl;
		}

};
int main()
{
		DateExp d1;
		d1.Display();
		int date2,month2,year2;
		DateExp d2(10,5,2024);
		d2.Diff();
}
