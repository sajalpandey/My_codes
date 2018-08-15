#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i,val;
	vector<int> v1;
	vector<int> v2(4,10);
	for(i=0;i<v2.size();i++)
		cout<<v2[i]<<" ";
	cout<<"\ncurrent capacity="<<v1.capacity()<<endl;             //capacity()
	cout<<"enter values to insert"<<endl;
	while(1)
	{
		cin>>val;
		if(val==0)
		 break;
		v1.push_back(val);                                      //push_back()
	}
	cout<<"current capacity="<<v1.capacity()<<endl;
	cout<<"size of vector="<<v1.size()<<endl;                   //size()
	for(i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	v1.pop_back();                                               //pop_back()
	v1.pop_back();
	cout<<"current capacity="<<v1.capacity()<<endl;
	cout<<"size of vector="<<v1.size()<<endl;                   
	for(i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	cout<<"value at position 4 is="<<v1.at(3)<<endl;           //at()
	v1.clear(); 
	cout<<"after clear operation "<<endl;                         //clear()
	cout<<"current capacity="<<v1.capacity()<<endl;
	cout<<"size of vector="<<v1.size()<<endl; 
	
	
	
	vector<char> c1(5);
	for(i=0;i<4;i++)
		c1[i]=(i+'a');
	for(i=0;i<4;i++)
		cout<<c1[i]<<" ";
	c1.push_back(i+'l');
	cout<<endl;
	for(i=0;i<c1.size();i++)
		cout<<c1[i]<<" ";
	cout<<endl;
	cout<<"value at forst position ="<<c1.front();
	cout<<endl;
	cout<<"value at last position ="<<c1.back();
		
	cout<<endl;
}
