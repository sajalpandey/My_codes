#include<iostream>
#include<string.h>
class emp
{
	int age;
	char name[20];
	static int count;                 //static data member
	public:
		emp(int ,char *);
		void show();
		static void showcount();         //static member function
};

int emp::count;
emp::emp(int a,char *p)
{
	age=a;
	strcpy(name,p);
	count++;
}

void emp::show()
{
	std::cout<<"age ="<<age<<" "<<"name="<<name<<std::endl;
}

void emp::showcount()
{
	std::cout<<"Total employee working :"<<count<<std::endl;;
}

int main()
{
	emp::showcount();
	emp e(21,"rajput");
	emp f(23,"sajal");
	e.show();
	f.show();
	e.showcount();
}
