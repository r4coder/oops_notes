#include<bits/stdc++.h>
using namespace std;

class x
{
    int a,b;
   
   public:
   
   
void setData(int y,int z)
{
   a=y;
   b=z;
}

void getData(x c1,x c2)
    {
       a=c1.a+c2.a;
       b=c1.b+c2.b;
       cout<<"re,im:"<<a<<" "<<b;
    }
    
    
};








int main()
{
    x c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);
    c3.getData(c1,c2);
    
   
  
   
   
    
    
    
return 0;    
}
    
    
    
    
    

