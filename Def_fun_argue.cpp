#include<iostream>

void printline(char[]="sajal",int=5);
int main()
{
	printline("s",3);
	printline("r");
	printline();
}

void printline(char s[],int n)
{
	for(int i=0;i<n;i++)
	{
		std::cout<<s;
	}
	std::cout<<"\n";
}
