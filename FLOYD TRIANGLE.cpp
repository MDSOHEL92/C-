#include<iostream>
using namespace std;
// FLOYD TRIANGLE
int main()
{
int n;
cout<<"Enter the row :";
cin>>n;

int a=1;
for(int i=1; i<=n; i++)
{
	for(int j=1; j<=i; j++)
	{
		cout<<"1 "<<" ";
	}
	cout<<endl;
}	
}
