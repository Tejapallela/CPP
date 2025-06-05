#include<iostream>
using namespace std;

bool isarmstrong (int num){
    int sum=0,a=num,digit;
    while(a!=0){
        digit=a%10;
        sum+=digit*digit*digit;
        a/=10;
    }
    return sum==num;
}
int main(){
    int i;
    for(i=0;i<=500;i++){
        
        if(isarmstrong(i)!=0){
          cout << " "<< i ;
        }
    
    }
    cout << endl ;
}