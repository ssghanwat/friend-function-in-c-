#include<iostream>
using namespace std;

class Hello
{
	public:
		void fun();
		void gun();
		
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
		
	//friend void Hello::fun();
	//friend void Hello::gun();
	friend class Hello;	
};

void Hello::fun()
{
	Demo obj1;
	cout<<"\n"<<obj1.i;
	cout<<"\n"<<obj1.j;
	cout<<"\n"<<obj1.k;
}

void Hello::gun()
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
	hobj.gun();
	return 0;
}