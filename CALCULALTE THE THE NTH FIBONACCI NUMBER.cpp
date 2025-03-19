#include<iostream>
using namespace std;
// FUNCTION TO CALCULALTE THE THE NTH FIBONACCI NUMBER USING RECURSION.
int fibo(int n)
{
	if(n==1 || n==2)return 1;
	return fibo(n-1)+fibo(n-2);           // FIBO 
}                                        // 1 1 2 3 5 8 13 21 34 55 89
                                        // CALCULATE NUMBER
int main()                               // 1 2 3 4 5 6 7 8 9 10 11 12......
{
	int n;
	cout<<"Enter n :";
	cin>>n;
	cout<<fibo(n);
}
