#include<iostream>
using namespace std;
//PATTERN PRINITNG
int main()
{
	int n;
	cout<<"Enter number of rows :";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		cout<<"*****"<<endl;
	}
}

//int main()                 // NISTED LOOP USED
//{
//	int m;
//	cout<<"Enter Number of rows :";  
//	cin>>m;
//	int n;
//	cout<<"Enter Number of cols :";
//	cin>>n;
//	for(int i=1; i<=m; i++)               // ROW LOOP
//	{
//		for(int i=1; i<=n; i++)           // COLOMS
//		{
//			cout<<" *";
//		}
//		cout<<endl;
//	}
//}
