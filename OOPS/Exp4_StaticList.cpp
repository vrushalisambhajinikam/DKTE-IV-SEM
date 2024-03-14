#include<iostream>
using namespace std;

struct Product
{
	int prod_id;
	string prod_name;
	float price,gst;
};


Product static_prod_list[100];
int num_prod=0;


int insert_at()
{
	
}  

void delete_at()
{

}

void Search()
{
 
}

void Display()
{

}

int main()
{
	int choice;
	Product p1;
	int index;

	cout<<"1.Insertion"<<endl;
	cout<<"2.Deletion"<<endl;
	cout<<"3.Search"<<endl;
	cout<<"4.Traverse/Display"<<endl;

	cout<<"Enter Your Choice: \n";
	cin>>choice;
                                                                          
	switch(choice)
	{
		case 1:
			cout<<"Product ID :"<<endl;
			cin>>p1.prod_id;
			cout<<"\n Product Name: ";
			cin>>p1.prod_name;
			cout<<"\n Product Price : ";
                        cin>>p1.prod_id;
                        cout<<"\n Product GST  : ";
                        cin>>p1.gst;
			insert_at();
			break;

		case 2:
			delete_at();
			break;

		case 3:
			Search();
			break;

		case 4:
			Display();
			break;

		default :
			cout<<"Invalid Choice";

	}	
}
