#include<iostream>
using namespace std;
int main(){
    int num,pos,num1,res;
    cout << "enter the number: " << endl;
    cin >> num;
    for(pos=7;pos>=0;pos--){
        cout << ((num>>pos)&1);

    }
    ////////////////////////////////////
    /*clear the bit */
    cout << "enter the clear bit pos: " << endl;
    cin >> num1;
    num=num&~(1<<num1);
    for(pos=7;pos>=0;pos--){
      cout << ((num>>pos)&1);
    }
    ///////////////////////////////////
}