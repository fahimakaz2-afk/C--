#include<iostream>
using namespace std;

class shop
{
   public:
   int itemId[100];
   int itemprice[100];
   int counter;
   void intitcounter() { counter=0; }
   void setprice()
   { cout<<"enter the item id and no."<<counter<<endl;
      cin>>itemId[counter];
      cout<< "enter the item price"<<endl;
      cin>>itemprice[counter];
      counter++;
   }
   void displayprice()
   {
      for(int i=0;i<counter;i++)
      {
         cout<< "the price of iterm with id"<<itemId[i]<<"is"<<itemprice[i]<<endl;
      }
   }
   

};
int main() 
{
   shop dukaan;
   dukaan.setprice();
   dukaan.setprice(); 
   return 0;
}