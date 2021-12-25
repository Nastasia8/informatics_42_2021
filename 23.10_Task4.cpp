#include <iostream>
#include <cmath>

using namespace std;


int Deapazon(int b, int e){
    int s=0;
    for(int i=b; i<=e; i++){
        if (i%2==0){
            s+= i;
        }
    }
    return s;
}

int main(){
int begin, end, result;
cout<<"Diapazon: "<<endl;
cout<<"Beginning: ";
cin>>begin;
cout<<"Ending: ";
cin>>end;
result = Deapazon(begin,end);
cout<<result<<endl;
return 0;
}