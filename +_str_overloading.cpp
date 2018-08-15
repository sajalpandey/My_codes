#include<iostream>
#include<cstring>
using namespace std;
class stringstr
{
	char str[100];
	public:
		stringstr(){
			strcpy(str," ");
		}
		stringstr(char s[])
		{
			strcpy(str,s);
		}
		
		stringstr operator+(stringstr s)
		{
			stringstr temp;
			//if(strlen(str)+strlen(s.str)<100)
			{
				strcpy(temp.str,str);
				strcat(temp.str,s.str);
			}
			//else
			//cout<<"\nstring overflow";
			return temp;
		}
		void display()
		{
			puts(str);
		//	cout<<"\n";
		}
};

int main()
{
	char str[100];
	cout<<"Enter a string\n";
	gets(str);
	stringstr s1(str);
	cout<<"Enter a string\n";
	gets(str);
	stringstr s2(str);
	stringstr s3;
	s1.display();
	s2.display();
	s3.display();
	s3=s1+s2;
	s3.display();
}
