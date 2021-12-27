#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    int h,h1,s,s1,k,z,z1;
    string t;
    
    cout <<endl;
    k=0;
    h=4;
    s=1;        
    s1=0;
    h1=0;
    t='@';
    while (h1!=h)
    {           
        cout <<"  ";
        while(s1!=s)
        {
            cout <<t;
            s1++;
        }  
        s1=0;
        s=s+1;
        cout <<endl;
        h1++;
    }
    
    cout <<endl;
    k=0;
    h=4;
    s=4;        
    s1=0;
    h1=0;
    t='#';
    while (h1!=h)
    {           
        cout <<"  ";
        while(s1!=s)
        {
            cout <<t;
            s1++;
        }  
        s1=0;
        s=s-1;
        cout <<endl;
        h1++;
    }
    
     cout <<endl;
    k=0;
    h=4;
    s=1;        
    s1=0;
    h1=0;
    z1=0;
    z=4;
    t='$';
    while (h1!=h)
    {           
        cout <<"  ";\
        while(z1!=z)
        {
            cout <<" ";
            z1++;
        }
        z1=0;
        z=z-1;
        while(s1!=s)
        {
            cout <<t;
            s1++;
        }  
        s1=0;
        s=s+1;
        cout <<endl;
        h1++;
    }
    
      cout <<endl;
    k=0;
    h=4;
    s=4;        
    s1=0;
    h1=0;
    z1=0;
    z=1;
    t='%';
    while (h1!=h)
    {           
        cout <<"  ";\
        while(z1!=z)
        {
            cout <<" ";
            z1++;
        }
        z1=0;
        z=z+1;
        while(s1!=s)
        {
            cout <<t;
            s1++;
        }  
        s1=0;
        s=s-1;
        cout <<endl;
        h1++;
    }



    return 0;

}