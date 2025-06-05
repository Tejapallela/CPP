#include<iostream>
using namespace std;
int b[10],ele,i;
int incrementarray(int a[]){
   for(i=0;i<ele;i++){
        b[i]=++a[i];
    }
}
int main(){
    int a[5]={10,20,30,40,50};
     ele=sizeof(a)/sizeof(a[0]);
     incrementarray(a);
    for(i=0;i<ele;i++){
        cout <<" "<<b[i];
    }
    cout << endl;
return 0;
}