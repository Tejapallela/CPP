/* Write a program to read n sentences. Using a function, find no: of vowels in each 
sentence and print it.
*/
#include<iostream>
using namespace std;
    
void countvowels(char str[], int &vowels){
       vowels=0;
   
       for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            char ch =tolower(str[i]);
            if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'||ch=='u'){
                vowels++;
            }
        }
       }
}
int main(){
    int n;
    cout << "Enter the number of string: "<<endl;
    cin >> n;
    cin.ignore();
     
    char str[n][50];
    for(int i=0;i<n;i++){
        cout << "enter the string: " << i+1 <<": " << endl;
        cin.getline(str[i],100);
    }

    for(int i=0;i<n;i++){
        int vowels;
        countvowels(str[i],vowels);
        cout << "string: "<< i+1 << "vowels: "<< vowels << endl;
    }
}