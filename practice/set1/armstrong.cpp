#include<iostream>
using namespace std;

int main(){
    int num,digit,sum=0,res;

    cout<<"enter the number: " << endl;
    cin >> num;

    
        res=num;
        while(res!=0){
         digit=res%10;
          sum+=digit*digit*digit;
          res/=10;
        }
        if(num==sum){
            cout <<"is a armstrong number: " << sum << endl;
        }
        else{
            cout << "is not a armstrong number: "<< sum << endl;
        }
    
}