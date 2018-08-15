#include<iostream>
class box
{
	int l,b,h;
	public:
		box(int,int,int);           //parametrized constructer
		box(box &);               //copy constructer 
		void show();
};

box::box(int l,int b,int h)
{
	this->l=l;               //accessing data members of calling object
	this->b=b;
	this->h=h;
}

box::box(box & p)             //reference variable
{
/*	l=p.l;
	h=p.h;
	b=p.b;*/	
	*this=p;            //or b2=b1  
}

void box::show()
{
	std::cout<<l<<" "<<b<<" "<<h<<std::endl;
}
int main()
{
	box b1(5,7,9);
	box b2(b1);
	b1.show();
	b2.show();
}

