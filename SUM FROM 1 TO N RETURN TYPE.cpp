#include<iostream>
using namespace std;
// PRINT SUM FROM 1 TO,N (RETURN TYPE)
int sum(int n)
{
	if(n==1)return 1;
	return n+ sum(n-1);
}
int main()
{
	int n;
	cout<<"Enter n :";
	cin>>n;
	cout<<sum(n);
}
