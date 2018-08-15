#include<iostream>
class emp
{
	int age;
	char name[20];
	float salary;
	public:
		void get();
		void show();
};

void emp::get()
{
	std::cout<<"enter age, name & salary of employee\n";
	std::cin>>this->age>>this->name>>this->salary;         //accessing data members using this pointer
}

void emp::show()
{
	std::cout<<"age="<<this->age<<std::endl;         //this pointer hols address of calling object
	std::cout<<"Name="<<this->name<<std::endl;
	std::cout<<"Salary="<<this->salary<<std::endl;
}

int main()
{
	emp e,f;
	e.get();
	std::cin.ignore();
	f.get();
	e.show();
	f.show();
}
