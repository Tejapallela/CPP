#include<iostream>
using namespace std;

int main(){
    int num,i;
    int a=0,b=1,nexterm;
    cout << "enter the number: " << endl;
    cin >> num;
 
    for(i=0;i<=num;i++){
    cout << a << " ";
    nexterm=a+b;
    a=b;
    b=nexterm;
    }
    cout << endl;
}