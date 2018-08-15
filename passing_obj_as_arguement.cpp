#include<iostream>
class box
{
	int l,b,h;
	public:
		void get()
		{
			std::cout<<"Enter length,bredth and height\n";
			std::cin>>l>>b>>h;
		}
		void show()
		{
			std::cout<<l<<b<<h<<std::endl;
		}
		int comparevol( box &);
};

int box::comparevol(box &p)
{
	int x,y;
	x=l*b*h;
	y=p.l*p.h*p.b;
	std::cout<<"volume of first box is="<<x<<std::endl;
	std::cout<<"volume of second box is="<<y<<std::endl;
	if(x==y)
	 return 0;
	else if(x>y)
	 return 1;
	else
	 return -1;  
}

int main()
{
	box b1,b2;
	b1.get();
	b2.get();
	b1.show();
	b2.show();
	int ans;
	ans=b1.comparevol(b2);
	if(ans==0)
	 std::cout<<"volumes are equal";
	else if(ans==1)
	 std::cout<<"volume od b1 is greater";
	else 
	 std::cout<<"volume of b2 is greater";  
}
