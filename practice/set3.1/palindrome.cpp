#include<iostream>

using namespace std;
bool palindrome(char str[]){
    int length=0;
    int i;
    while(str[length]!='\0'){
        length++;
    }
   for(i=0;i<length/2;i++){
    if(str[i]!=str[length-i-1]){
        return 0;
    }
   }
   return 1;
}
int main(){
             char str[50];
             cout << " Enter the string for palindrome" << endl;
             cin >> str;
             if(palindrome(str)){
                cout << str << " is a palindrome" << endl;
             }
             else{
                cout << str << " is not a palindrome" << endl;
             }
             return 0;

}