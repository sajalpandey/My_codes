#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	   char str[1000];
	   cin>>str;
	   char str2[201];
	   cout<<str;
	   int i=0,l=strlen(str),j=0;
	   while(i<l && str[i])
	   {
	       //cout<<str[i++];
	       if(str[i]=='b')
	        i++;
	       else if(str[i]=='a'&& str[i+1]=='c')
	        i=i+2;
	       else
	       {
	           str2[j]=str[i];j++;
	       }
	   }
	   str2[j]='\0';
	   cout<<str2<<endl;
	}
	return 0;
}
