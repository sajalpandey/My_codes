#include<iostream>
using namespace std;
class myclass
{
	public:
		myclass()
		{
			cout<<"hello constructer\n";
		}
		~myclass()                            //Destructer
		{
			cout<<"hello distructor\n";
		}
};

int main()
{
	myclass c1,c2,c3;
}
