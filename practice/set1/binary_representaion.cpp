#include<iostream>
using namespace std;
int main(){
   int num,pos,bit;
   cout << "Enter the number: "<<endl;
   cin >> num;
pos=31;
   while(pos>=0)
    {
       bit = ((num>>pos) &1);
       if((bit==1)){
       cout << bit;
       }
       pos--;
   }
   cout << endl;
}