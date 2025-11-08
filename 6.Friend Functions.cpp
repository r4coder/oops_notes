#include<bits/stdc++.h>
using namespace std;

class x
{
    int a,b;
   
   public:
   
   friend x sumc(x v1,x v2);
   
   
void setData(int y,int z)
{
   a=y;
   b=z;
}

void getData()
    {
      cout<<"re,im:"<<a<<" "<<b;
    }
    
    
};

x sumc(x v1,x v2)
{
     x v3;
     v3.setData((v1.a+v2.a),(v1.b+v2.b));
     return v3;
     
      
}








int main()
{
    x c1,c2,c3,sum;
    c1.setData(1,2);
    c2.setData(3,4);
    
    sum=sumc(c1,c2);
    sum.getData();
    
   
  
   
   
    
    
    
return 0;    
}
    
    
    
    
    
