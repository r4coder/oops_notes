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
       
       x(x &obj)
       {
           cout<<"Copy Constructor is called:";
           a=obj.a;
           b=obj.b;
       }
       
       
       void getnum(void)
       {
           cout<<"a,b: "<<a<<" "<<b;
       }
       
    
       

        
    
    
    
    
    
    
};









int main()
{
    x t(1,2);
    x u=t;
    u.getnum();
    
   
    
    
    
    
    
return 0;    
}
