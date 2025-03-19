#include<iostream>
using namespace std;
class abc{
	int x,y;
	public:
		abc()
		{
			x=5;
			y=9;
		}
		int display()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
};
int main()
{
	abc a;
	a.display();
	return 0;
}




	

