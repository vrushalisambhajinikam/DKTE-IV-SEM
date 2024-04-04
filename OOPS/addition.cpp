#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int num1,num2,result;
	char op;
	cout<<"Enter First val:"<<endl;
	cin>>num1;
	cout<<"Enter 2nd val:";
	cin>>num2;
	
	cout<<"Enter any one: +,-,*,/"<<endl;
	cin>>op;
	
	v.push_back(num1);
	v.push_back(num2);
	
	switch(op) {
        case '+':
            result = num1 + num2;
            	v.push_back(result);
            break;
            
        case '-':
            result = num1 - num2;
            v.push_back(result);
            break;
            
        case '*':
            result = num1 * num2;
            v.push_back(result);
			break;
			
        case '/':
            if(num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
                return 1;
            }
            result = num1 / num2;
            v.push_back(result);
            break;
            
        default:
            cout << "Invalid operator!"<< endl;
            return 1;
    }
    
    cout<<v[2];
}
