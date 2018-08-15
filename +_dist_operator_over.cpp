#include<iostream>
using namespace std;
class myclass
{
	int feet;float inches;
	public:
		myclass()                   //non parametrized constructer
		{feet=0;inches=0.0;}
		myclass(int f,float in)     //perametrized constructer  
		{
			feet=f;
			inches=in;
		}
		void get_dist()              //member function
		{
			cout<<"Enter feet\n";cin>>feet;
			cout<<"Enter inches\n";cin>>inches;
		}
		void show_dist()
		{
			cout<<feet<<"  "<<inches;
		}
		myclass operator+(myclass);
};

myclass myclass::operator+(myclass c)
{
	myclass temp;
	temp.feet=feet+c.feet;
	temp.inches=inches+c.inches;
	return temp;
}

int main()
{
	myclass m1,m4,m3;
	m1.get_dist();
	myclass m2(11,6.25);
	m3=m1+m2;
	m4=m1+m2+m3;
	cout<<"\nm1 ";m1.show_dist();
	cout<<"\nm2 ";m2.show_dist();
	cout<<"\nm3 ";m3.show_dist();
	cout<<"\nm4 ";m4.show_dist();
}







