
#include<iostream>
#include<math.h>
using namespace std;

class DateExp 
{
		private:
			int date, month, year;
				 
		public:
		
			
			DateExp()
			 {
				cout << "Enter Date:" << endl;
				cin >> date;
				cout << "Enter Month:" << endl;
				cin >> month;
				cout << "Enter Year:" << endl;
				cin >> year;
			}
			
			void display() 
			{
				cout << "Format Date : " << date << "/" << month << "/" << year << endl;
			 
			}
			
			int calculateDays() 
			{
				return year * 365 + month * 30 + date;
			}
			
};

int main()
 {
	DateExp d1, d2;

	
	cout << "First Date:" << endl;
	d1.display();
	cout << "Second Date:" << endl;
	
	d2.display();
	
	int diffDays =abs(d1.calculateDays() - d2.calculateDays());
	int diffYear = diffDays / 365;
	int diffMonth = diffDays / 30;
	
	cout << "The difference between the two dates is: " << diffYear << " years, " << diffMonth << " months, " << diffDays << " days." << endl;
	
	
	
	
	return 0;
}
