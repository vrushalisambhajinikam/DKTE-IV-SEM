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
	 cout<<"\n Product ID :";
                        cin>>p1.prod_id;
                        cout<<"\n Product Name: ";
                        cin>>p1.prod_name;
                        cout<<"\n Product Price : ";
                        cin>>p1.prod_price;
                        cout<<"\n Product GST  : ";
                        cin>>p1.gst;
	
	product_list[num_prod]=p1;
	  num_prod++;
	cout<<"Product Inserted Successfully\n";
}  

void delete_at()
{
	int index;
	cout<<"Enter index number";
	cin>>index;
	if(index==0||index>=num_prod)
	{
		cout<<"No single element is present in list...Sorry"<<endl;
		return;
	}	
	for(int i=index;i<num_prod-1;i++)
	{
		product_list[i]=product_list[i+1];
	}
	num_prod--;
	
	cout<<"product Info Deleted Successfully \n";	
}

void Search()
                                                                                                                                                                                                                                                                                                                                                                        {
	int search_index;
	cout<<"Enter Search key index \n";
	cin>>search_index; 
	
	for(int i=0;i<=num_prod;i++)
	{
		if(search_index==i)
		{
			cout<<"Search product found \n";
		}
		else 
		{
			cout<<"Your product index not found \n";
		}break;
	}
}

void Display()
{
	if(num_prod==0)
	{
		cout<<"No product is available to display\n";
		return;	
	}
	else
	{
		for(int i=0;i<num_prod;i++)
		{
			 cout<<product_list[i].prod_id<<endl;
                        cout<<product_list[i].prod_name<<endl;
                        cout<<product_list[i].prod_price<<endl;
                        cout<<product_list[i].gst<<endl;
		}
	}

}

int main()
{
	int choice;
	Product p1;
	do
	{
	cout<<"\n";
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

