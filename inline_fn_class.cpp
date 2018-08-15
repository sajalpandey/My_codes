#include<iostream>
using namespace std;
 class myclass
 {
 	private:
 		int a,b;
 	public:
 		void val(int x, int y);
 		void show();
 			
 };
 void myclass::val(int x,int y)
 {
 	a=x;b=y;               //automatic inline or implicit inline
 }
 void myclass::show()
 {
 	cout<<"a="<<a<<" \nb="<<b;          //automatic inline in class
 }
 
 int main()
 {
 	myclass c1;
 	c1.val(1200,1854);
 	c1.show();
 }
