#include<iostream>
using namespace std;
// STAR PLUSH AND HASTAK 
int main()
{
	int n;
	cout<<"Enter Number of row :";
	cin>>n;
	
	int mid=n/2+1;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==mid || j==mid)cout<<"* ";
			else cout<<"# ";
		}
		cout<<endl;
	}
}
