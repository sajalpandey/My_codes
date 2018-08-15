#include<iostream>
using namespace std;
namespace myspace
{
	int a;
	void f1();
	class myclass{
		public:
			void fun1();
	};
}

void myspace::f1(){
	cout<<"You are inside f1"<<endl;
}
void myspace::myclass::fun1(){
	cout<<"You are inside fun1"<<endl;
}

using namespace myspace;
int main()
{
	a=10;
	cout<<"a="<<a<<endl;
	f1();
	myclass m;
	m.fun1();
}
