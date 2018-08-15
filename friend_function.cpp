#include<iostream>
class student
{
	int roll;
	char grade;
	float per;
	public:
		void get();
		friend void show(const student &);       //friend function
};
void student::get()
{
	std::cout<<"Enter roll, grade  and per"<<std::endl;
	std::cin>>roll>>grade>>per;
}

void show(const student &p)
{
	std::cout<<p.roll<<p.grade<<p.per<<std::endl;
}

int main()
{
	student s;
	s.get();
	show(s);
}
