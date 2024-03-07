#include<iostream>
using namespace std;

int main()
{
	string name[100];
	int roll_no[100];
	float marks[100];
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n Enter student name:";
		cin.ignore();
	 	getline(cin,name[i]);
	 	cout<<"\n Roll no:";
	 	cin>>roll_no[i];
	 	cout<<"\n Marks:";
	 	cin>>marks[i];
	}
	
	cout<<"==========================="<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Name	     	:"<<name[i]<<endl;
	 	cout<<"Roll No	 	:"<<roll_no[i]<<endl;
	 	cout<<"Marks		:"<<marks[i]<<endl;
	}
}
  
