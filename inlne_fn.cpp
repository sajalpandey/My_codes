#include<iostream>
using namespace std;

inline int max(int x,int y)
{
	return(x>y?x:y);
}

int main()
{
	cout<<max(18,41)<<endl;
	cout<<max(4,9);
}
