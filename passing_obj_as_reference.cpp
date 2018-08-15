#include<iostream>
class account
{
	char name[30];
	float balance;
	public:
		void get();
		void show();
		void transfer(account &);
};

void account::get()
{
	std::cout<<"Enter accountee name ";
	std::cin>>name;
	std::cout<<"Enter account balance";
	std::cin>>balance;
}

void account::show()
{
	std::cout<<"Name  :"<<name<<std::endl;
	std::cout<<"Balance :"<<balance<<std::endl;
}

void account::transfer(account &p)
{
	int x,y;
	x=balance;
	y=p.balance;
	std::cout<<"Enter amount which to be tranfered from first user to second"<<std::endl;
	float amount;
	std::cin>>amount;
	if((x-amount)>500.0)
	{
		balance=balance-amount;
		p.balance=p.balance+amount;
		std::cout<<"Transaction successfull !!!";
	}
	else
	 std::cout<<"Transcation unsuccessfull  !!!";
}

int main()
{
	account a1,a2;
	a1.get();
	a2.get();
	a1.show();
	a2.show();
	a1.transfer(a2);
	std::cout<<"\nBalance after transaction"<<std::endl;
	a1.show();
	a2.show();
}
