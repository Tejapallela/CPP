#include<iostream>
using namespace std;
int main(){
    int r=1,n=6;
    
     do{ 
            int c=1;
            while(c<=r){
             cout << "*" ;
             c++;
             }
        r++;
        cout << endl;     
    }
    while(r<=n);
}