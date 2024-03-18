#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n;i>=1;i--)
	{
		cout<<arr[i]<<" ";
	}
}
