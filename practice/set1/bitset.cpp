#include<iostream>
using namespace std;
int main(){
    int num,pos,setpos,res,n;
    cout << "enter the number: " << endl;
    cin >> num;
    /////////////////////////////////////
    //printing binary
    for(pos=7;pos>=0;pos--){
        cout << ((num>>pos)&1);
    }
    ////////////////////////////////////
    cout << endl;
    cout << "enter the setbit pos: "<< endl; 
    cin >> setpos;
    /////////////////////////////////////
    // set the bit
    res=(num|(1<<setpos));
    cout <<"res: " <<  res;
       cout << endl;
    for(pos=7;pos>=0;pos--){
        cout << ((res>>pos)&1);
    }   
}