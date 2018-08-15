#include<iostream>
using namespace std;
template <class stacktype>
class stack
{
	stacktype arr[10];
	int top;
	public:
		stack() {top=0;}
		void push(stacktype data)
		{
			if(top==10){
				cout<<"stack is full"<<endl;
				return;
			}
			top++;
			arr[top]=data;
		}
		stacktype pop()
		{
			if(top==0){
				cout<<"stack is empty"<<endl;
				return 0;
			}
			stacktype data=arr[top];
			top--;
			return data;
		}
		void traverse()
		{
			for(int i=1;i<=top;i++)
			cout<<arr[i]<<"->";
			cout<<endl;
		}
};

int main()
{
	stack<char> s1;
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s1.traverse();
	stack <double> d1;
	d1.push(1.1);
	d1.push(2.1);
	d1.push(3.1);
	cout<<"stack of characters :"<<endl;
	for(int i=0;i<3;i++)
	cout<<s1.pop()<<endl;
	cout<<endl;
	d1.traverse();
	cout<<"stack of double :"<<endl;
	for(int i=0;i<3;i++)
	cout<<d1.pop()<<endl;
	cout<<endl;
}
