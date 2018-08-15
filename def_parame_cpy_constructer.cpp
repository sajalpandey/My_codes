#include<iostream>
using namespace std;
class dist
{
	private:
		int feet;
		float inches;
	public:
		dist()                       //default constructer
		{                                 //initialisation
			feet=0;inches=0.0;
		}
		dist(int f,float in)      //parameterized constructer    
		{
			feet=f;inches=in;
		}
		void get_dist()
		{
			cout<<"Enter feet ";cin>>feet;
			cout<<"\nEnter inches";cin>>inches;
		}
		void show_dist()
		{
			cout<<"feet="<<feet<<endl;
			cout<<"inches"<<inches<<endl;
		}
		void add_dist(dist x,dist y);          
};

void dist::add_dist(dist x,dist y)
{
	inches=x.inches+y.inches;
	feet=0;
	if(inches>=12.0){
		inches=inches-12;
		feet++;
	}
	feet=feet+x.feet+y.feet;
	
}


int main()
{
	dist d1,d2(11,6.25),d3;
	d1.get_dist();
	d3.add_dist(d1,d2);                  //passing object as parameter
	cout<<"\nd1=>\n";d1.show_dist();
	cout<<"\nd2=>\n";d2.show_dist();
	cout<<"\nd3=>\n";d3.show_dist();
}

