#include<iostream>
using namespace std;
//
//int main()
//{
//	son1 s1;
//	s1.show1();
//	
//	son2 s2;
//	s2.show2();
//}
//class father
//{
//	protected:
//		string surname="aalam";
//};
//class son1:father
//{
//	string name="mishal";
//	public:
//}
//void show1()
//{
//	cout<<" "<<surname<<endl;
//}
//class son2: father
//{
//	sting name="mahtab aalam";
//	public:
//}
//void show2()
//{
//	cout<<" "<<surname<endl;
//}

class father
{
	protected:
		string surname="aalam";
};
class son1::father
{
         string    name="jawed";
	public:

void show1()
{
	cout<<" "<<surname<<endl;
}
};
class son2:: father
{
	string name="mishal aalam";
	public:

void show2()
{
	cout<<" "<<surname<<endl;
}
};
int main()
{
	son1 s1;
	s1.show1();
	
	son2 s2;
	s2.show2();
}
