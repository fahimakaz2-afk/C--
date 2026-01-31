#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void set(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    void sum(complex o1,complex o2)
    {
        a=o1.a + o2.a;
        b=o1.b + o2.b;

    }
    void printno()
     {
        cout<<"the complex no. is:" <<a<<"+"<<b<<"i"<<endl;
     }


};
int main()
{
    int x, y;
    cout<<"enter the two no.";
    cin >>x>>y;
    complex c1,c2,c3;

    c1.set(x,y);
    c1.printno();

    c2.set(4,5);
    c2.printno();


    c3.sum(c1,c2);
    c3.printno();



}