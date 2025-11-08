#include<bits/stdc++.h>
using namespace std;

class x
{
    int itemid[100];
    int itemprice[100];
    int counter;
    
    
    public :
    void initcounter(void){counter=0;}
    void setPrice(void);
    void displayPrice(void);
    
    
    

  
};

void x::setPrice(void)
{
   cout<<"Enter the itemid:";
   cin>>itemid[counter];
   cout<<"Enter the item price:";
   cin>>itemprice[counter];
   counter++;
}

void x::displayPrice(void)
    {
             
        for(int i=0;i<3;i++)
        {
            cout<<"The Price of Item with Item Id:"<<itemid[i]<<","<<itemprice[i];
            
        }
        
        
    }



int main()
{
    x shop;
    shop.initcounter();
   for(int i=0;i<3;i++)
   {
       shop.setPrice();
   }
   shop.displayPrice();
   
    
    
    
return 0;    
}
    
    
    
    
    

