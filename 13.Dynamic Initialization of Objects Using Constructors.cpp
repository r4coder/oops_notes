#include<bits/stdc++.h>
using namespace std;


class x
{
    int a,b,z=1;
     
     public:
       x(int x,int y)
       {
          a=x;
          b=y;
          
          for(int i=0;i<4;i++)
          {
              z=a*z;
          }
          
          
       }
       
       void getnum(void)
       {
           cout<<"a,b,z:"<<" "<<a<<" "<<b<<" "<<z;
       }
       
       

        
    
    
    
    
    
    
};









int main()
{
    x t(2,1);
    t.getnum();
    
   
    
    
    
    
    
return 0;    
}
