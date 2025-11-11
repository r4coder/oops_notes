#include<bits/stdc++.h>
using namespace std;

class y;


class x
{
    public:
         int add(int a,int b)
         {
             return (a+b);
         }
         
         int sumRealComplex(Complex,Complex);
         int sumcomplex(Complex,Complex);
         
    
  
    
};

class y
{
    int a,b;
    friend int x::sumRealComplex(Complex,Complex);
    
    public:
    void setnum(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    
    void getnum()
    {
        cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
    }
    
};

    
    
    
    
    
    
}







int main()
{
    x o1,o2;
    o1.setnum(1,4);
    o2.setnum(5,7);
    y o3;
    int res=o3.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    res=o3.sumcomplex(o1,o2);
    cout<<"The sum of imaginary part of o1 and o2 is "<<res<<endl;
    
    return 0;
  }
    
    
    
    
    
