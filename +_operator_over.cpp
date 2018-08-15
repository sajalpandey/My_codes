#include<iostream>
using namespace std;
class set
{
	int longitude,latitude;
	public:
		set(){
		}
		set(int x, int y)
		{
			longitude=x;latitude=y;
		}
		void show_data()
		{
			cout<<"\nlongitude="<<longitude;
			cout<<"\nlatitude="<<latitude;
		}
		set operator+(set c)             //'+' operator overloading
		{
			set temp;
			temp.longitude=longitude+c.longitude;
			temp.latitude=latitude+c.latitude;
			return temp;
		}
};

int main(){
	set s1(10,20),s2(5,30);
	set s3=s1+s2;
	cout<<"\ns1>>";s1.show_data();
	cout<<"\ns2>>";s2.show_data();
	cout<<"\ns3>>";s3.show_data();
}
