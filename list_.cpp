#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;
int main()
{
	int i,val;
	list<int> l1;
	list<string> s1 {"india","newdelhi","lucknow"};
	for(i=0;i<10;i++)
		l1.push_back(rand());
		 //push_back()
	list<int>::iterator p;  //iterator
	p=l1.begin();         //begin()
	while(p!=l1.end()){   //end()
		cout<<*p<<" ";
		p++;
	}
	//push_front
	cout<<endl;
	l1.push_front(34);
	p=l1.begin();         //begin()
	while(p!=l1.end()){   //end()
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	
	//pop_back()
	//pop_front()
	l1.pop_back();
	l1.pop_front();
	cout<<endl;
	
	//sort()
	l1.sort();
	cout<<"list after sorting "<<endl;
	p=l1.begin();         
	while(p!=l1.end()){   
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	
	//reverse()
	cout<<"list after reversing "<<endl;
	l1.reverse();
	p=l1.begin();         
	while(p!=l1.end()){   
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	
	//second list
	list<string>::iterator s=s1.begin();
	while(s!=s1.end())
	{
		cout<<*s<<" ";
		s++;
	}
	cout<<endl;
}
