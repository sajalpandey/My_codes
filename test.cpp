#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        if(i==1)
            cout<<"one";
        if(i==2)
            cout<<"two";
        if(i==3)
            cout<<"three";
        if(i==4)
            cout<<"four";
        if(i==5)
            cout<<"five";
        if(i==6)
            cout<<"six";
        if(i==7)
            cout<<"seven";
        if(i==8)
            cout<<"eight"<<endl;;
        if(i==9)
            cout<<"nine";
        if(i>9)
        {
            if(i%2==0)
                cout<<"even";
            else
                cout<<"odd";
        }
    }
    return 0;
}
