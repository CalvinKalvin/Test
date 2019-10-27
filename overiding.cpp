#include<iostream>
using namespace std;

class Base{
	public:
	virtual	void display()
		{
			cout << "In Base";
		}
};

class Derived:public Base{
	public:
		void display()
		{
			cout << "In Derived";
		}
};

int main()
{

	Base *obj1;
	Derived obj;
	obj1 = &obj;

	obj1->display();
}
