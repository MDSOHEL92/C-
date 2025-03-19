#include<iostream>
using namespace std;
// SWAP FUNCTION // CALL BY REFRENCE
 void swap(int &x, int &y)
 {
 	int temp = x;
 	x = y;
 	y = temp;
 }
    int main()
{
 	int x = 12;
 	int y = 45;
 	
 	cout<<x<<y;
	cout<<" "<<endl;
 	swap(x,y);
 	cout<<x<<y;
 	
	cout<<" "<<endl;
 }
