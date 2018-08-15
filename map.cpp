#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<char,int> m1;
	int i;
	//put pairs in map m1
	for(i=0;i<26;i++)
		m1.insert(pair<char,int>('A'+i,65+i));
		
	//finding value in map
	char ch;
	cout<<"Enter key"<<endl;
	cin>>ch;
	map<char,int>::iterator p=m1.begin();
	//using find() function
	p=m1.find(ch);
	if(p!=m1.end())
		cout<<"its ASCII value is="<<p->second<<endl;
	else
		cout<<"key not in map"<<endl;
		
	//defining second map
	map<int,string> customer;
	//inserting values in map
	customer[100]="gajendra";
	customer[123]="amit";
	customer[145]="bhola";
	customer[200]="sehwag";
	map<int,string>::iterator t=customer.begin();
	while(t!=customer.end())
	{
		cout<<t->second<<endl;
		t++;
	}
	
	customer.insert(pair<int,string>(205,"sajal"));
	t=customer.begin();
	cout<<"\nafter insertion "<<endl;
	while(t!=customer.end())
	{
		cout<<t->second<<endl;
		t++;
	}
}
