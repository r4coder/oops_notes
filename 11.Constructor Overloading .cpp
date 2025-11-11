#include<bits/stdc++.h>
using namespace std;


class x
{
    int a,b;
     
     public:
       x(int x,int y)
       {
           a=x;
           b=y;
       }
       
       x(int x)
       {
           a=x;
           b=0;
       }
       
       x()
       {
           a=0;
           b=0;
       }
       
       void getnum(void)
       {
           cout<<"a is"<<a<<"b is"<<b;
       }

        
    
    
    
    
    
    
};









int main()
{
    x t(1,2);
    x u(1);
    x v;
    u.getnum();
    
   
    
    
    
    
    
return 0;    
}
