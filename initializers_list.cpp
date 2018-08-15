#include<iostream>
using namespace std;
class Myclass
{
	const int p,q;
	public:
		Myclass(int x,int y):p(x),q(y) {}
		void show(){
			cout<<"p="<<p<<" q="<<q<<endl;
		}
};
int main()
{
	Myclass m(3,99);
	m.show();
}
