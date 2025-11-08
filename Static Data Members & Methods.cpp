#include<bits/stdc++.h>
using namespace std;

class x
{
    int id;
    static int count;
    
    
    
    public :
    void setData(void);
    void getData(void);
    
    
    
    

  
};

int x::count;

void x::setData(void)
{
   cout<<"Enter the employee id:";
   cin>>id;
   count++;
}

void x::getData(void)
    {
   cout<<"emp id,emp no:";
   cout<<id<<",";
   cout<<count;
        
        
    }



int main()
{
    x em1,em2,em3;
    em1.setData();
    em2.setData();
    em2.getData();
    em3.setData();
   
  
   
   
    
    
    
return 0;    
}
    
    
    
    
    

