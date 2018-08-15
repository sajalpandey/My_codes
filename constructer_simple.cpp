#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
	public:
		counter()                       // DEFAULT constructer
		{count=0;
		}
		void in_count(){
		count++;
		}
		int get_count(){
		return (count);
		}
};

int main()
{
	counter c1,c2;
	cout<<c1.get_count()<<endl;
	cout<<c2.get_count();
	c1.in_count();
	c2.in_count();
	c2.in_count();
	cout<<"\nc1="<<c1.get_count();
	cout<<"\nc2="<<c2.get_count();
}
