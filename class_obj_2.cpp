#include<iostream>
using namespace std;
class part
{
private:
    int modelno;
    int partno;
    float cost;
public:
    void set_part(int mn,int pn,float c)
    {
        modelno=mn;
        partno=pn;
        cost=c;
    }
    void show_data()
    {
        cout<<"model no="<<modelno<<endl;
        cout<<"part no="<<partno<<endl;
        cout<<"cost ="<<cost<<endl;
    }
};

int main()
{
    part p1,p2;
    p1.set_part(6224,375,211.45);
    p1.show_data();
}
