#include<iostream>
using namespace std;
int string_numric(string s){
         int num=0;
         for(char c:s){
             num=num*10+(c-'0');
         }
         return num;
}


int main(){
    int res;
    string s="356";
    res=string_numric(s);
    cout <<  res <<endl; 
}