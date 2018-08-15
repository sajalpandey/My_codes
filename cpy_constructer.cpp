#include<iostream>
using namespace std;

class dist
{
	private:
		int feet; 
		double inches;
	public:
		dist(){
		}
		//dist(){feet=0;inches=0.0;}                       //constructer
		dist(int f,double in)
		{
			feet=f;inches=in;
		}
		void get_dist(){
			cout<<"Enter feet";cin>>feet;
			cout<<"Enter inches";cin>>inches;
		}
		void show_dist(){
			cout<<feet<<" "<<inches;
		}
		dist(dist &c){
			feet=c.feet;
			inches=c.inches;
		}
		
};

int main()
{
	dist d1(11 ,6.25),d3;
	//d1.get_dist();
	dist d2(d1);                                
	d3=d1;
	cout<<"\n";d1.show_dist();
	cout<<"\n";d2.show_dist();
	cout<<"\n";d3.show_dist();
}
