#include<iostream>
using namespace std;
class Employee
{ 
    int id;
    int salary;
    public:
    void setid(void)
    {
        salary = 122;
        cout<<"enter the id of employee: ";
        cin>>id;

    }
    void getid(void)
    {
        cout<<"the id of the employee is:"<<id<<endl;
    }
};
int main()
{
    Employee e[4];
   
    for(int i=0; i<4;i++)
    {
        e[i].setid();
        e[i].getid();
       
    }

    
    return 0;
}
    
        


   