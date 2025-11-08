#include<bits/stdc++.h>
using namespace std;

class x
{
    private:
    string s;
    void mummy(bool a);
    
    public :
    void daddy(bool b);
    

  
};

void x:: mummy(bool a)
{
     if(a==true)
     {
         cout<<"true";
     }
     
     else{
         cout<<"false";
     }
}

void x::daddy(bool b)
    {
        mummy(b);
        
        
        
    }



int main()
{
    x a;
    a.daddy(false);
   
    
    
    
return 0;    
}
    
    
    
    
    
