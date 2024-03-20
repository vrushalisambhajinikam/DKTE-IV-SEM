#include<iostream>
using namespace std;

struct Product
{
	int prod_id;
	string prod_name;
	float prod_price,gst;
	int static_product_list[100];


};
 
Product product_list[100];
int num_prod=0;
int index;
void insert_at()
{
	if(num_prod>=100)
	{
		cout<<"Cannot insert \n";
		return;
	}
	Product p1;
	 cout<<"Product ID :"<<endl;
                        cin>>p1.prod_id;
                        cout<<"\n Product Name: ";
                        cin>>p1.prod_name;
                        cout<<"\n Product Price : ";
                        cin>>p1.prod_price;
                        cout<<"\n Product GST  : ";
                        cin>>p1.gst;
		cout<<"Enter Index\n";
		cin>>index;
	product_list[index]=p1;
	cout<<"Product Inserted Successfully";
}  

void delete_at()
{

}

void Search()
{
 
}

void Display()
{
	Product p1;
	 cout<<p1.prod_id<<endl;
                        cout<<p1.prod_name<<endl;
                        cout<<p1.prod_price<<endl;
                        cout<<p1.gst;

}

int main()
{
	int choice;
	Product p1;
	do
	{

	cout<<"1.Insertion"<<endl;
	cout<<"2.Deletion"<<endl;
	cout<<"3.Search"<<endl;
	cout<<"4.Traverse/Display"<<endl;

	cout<<"Enter Your Choice: \n";
	cin>>choice;
                                                                          
	switch(choice)
	{
		case 1:
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
	}while(choice!=5);	
}
