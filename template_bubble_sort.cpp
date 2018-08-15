#include<iostream>
using namespace std;
template <class x,class y>
void bsort(x *ptr,y size)
{
	x temp;
	y i,j,exch;
	for(i=0;i<size-1;i++)
	{
		exch=0;
		for(j=0;j<size-1-i;j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
				exch++;
			}
		}
		if(exch==0)
		 break;
	}
}

int main()
{
	int iarr[]={78,23,56,33,89,2,9};
	double darr[]={11.2,4.3,5,99.1,3.1,5.88,17.8};
	bsort(iarr,7);
	bsort(darr,7);
	cout<<"Integer array after sorting :"<<endl;
	for(int i=0;i<7;i++)
		cout<<iarr[i]<<" ";
	cout<<endl;
	cout<<"double array after sorting :"<<endl;
	for(int i=0;i<7;i++)
		cout<<darr[i]<<" ";
	cout<<endl;
}
