#include<bits/stdc++.h>
using namespace std;

class x
{
    private:
    int a,b,c;
    
    public :
    int d,e;
    
    void setData(int a1,int b1,int c1,int d1,int e1);
    void getData()
    {
        cout<<"Hi"<<a<<endl;
         cout<<"Hi"<<b<<endl;
        cout<<"Hi"<<c<<endl;
        cout<<"Hi"<<d<<endl;
        cout<<"Hi"<<e<<endl;
        
    }
    
};

void x::setData(int a1,int b1,int c1,int d1,int e1){
    a=a1;
    b=b1;
    c=c1;
    d=d1;
    e=e1;
    
    
}

int main()
{
    x a;
    a.setData(1,2,3,4,5);
    a.getData();
    
    
    
return 0;    
}
    
    
    
    
    
