#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N,i;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    } 
     for(i=N;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}
