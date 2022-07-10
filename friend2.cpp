#include<iostream>
using namespace std;

class Hello
{
	public:
		void fun();
		
};

class Demo
{
	public:
		int i;
		
	protected:
		int j;
		
	private:
		int k;
		
		Demo()
		{
			i=10;
			j=11;
			k=12;
		}
		
	friend void Hello::fun();
};

void Hello::fun()
{
	Demo obj1;
	cout<<"\n"<<obj1.i;
	cout<<"\n"<<obj1.j;
	cout<<"\n"<<obj1.k;
}

int main()
{
	Hello hobj;
	hobj.fun();
	return 0;
}