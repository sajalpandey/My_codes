 #include<iostream>
 #include<cstdio>

 using namespace std;
 //using namespace std;
 class dist
 {
 private:
     int feet;
     float inches;
 public:
    void setdist(int ft,float in)
    {
        feet=ft;
        inches=in;
    }
    void getdist()
    {
        cout<<"enter feet";
        cin>>feet;
        cout<<"enter inches";
        cin>>inches;
    }
    void showdist();                          
    
 };
 void dist::showdist()
    {
        cout<<feet<<" - "<<inches;              /*scope resolution operator*/
    }

 int main()
 {
    dist d1;
    dist d2;
    d1.setdist(11,6.25);
    d2.getdist();
    cout<<" Dist 1\n";
    d1.showdist();
    cout<<"\n";
    cout<<" Dist 2\n";
    d2.showdist();
 }
