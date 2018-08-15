#include<iostream>
using namespace std;

class smallobj
{
	//private:
		
	public:
		int somedata;
		void setdata(int d)
		{
			somedata=d;
		}
		void showdata()
		{
			cout<<"data is "<<somedata<<endl;
		}
};
int main()
{
	smallobj s1,s2;
	//s1.somedata=1076;
	/*s1.setdata(1066);
	s2.setdata(1776);*/
	s1.showdata();
	s2.showdata();
}
