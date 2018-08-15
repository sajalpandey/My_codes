#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char> v(10);
	vector<char> v2;
	char str[]="<sajal>";
	unsigned int i,val;
	for(i=0;i<10;i++)
		v[i]=i+'a';
	//copy charcters of str into vector v2
	i=0;
	while(str[i]!='\0')
		v2.push_back(str[i++]);
		
	//display content of vector v
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	
	//using iterator
	vector<char>::iterator p;
	p=v.begin();
	p=p+2; //points to 3rd element
	
	//inserting 10 x's in vector v
	v.insert(p,10,'x');  //using insert function
	p=v.begin();
	//p=p+2;
	v.insert(p+10,'y');
	cout<<"size after inserting 10 x's="<<v.size()<<endl;
	
	cout<<"content after insertion\n";
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
	//removing inserted x's
	p=v.begin();
	p=p+2;
	v.erase(p,p+10); //using erase function
	
	cout<<"content after erasing x's"<<endl;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;	
	//display content of vector v2
	for(i=0;i<v2.size();i++)
		cout<<v2[i]<<" ";
	cout<<endl;
		
	//inserting v2 into v
	v.insert(p,v2.begin(),v2.end());
	cout<<"size after v2 insertion="<<v.size()<<endl;
	
	//content after insertion
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	
}
