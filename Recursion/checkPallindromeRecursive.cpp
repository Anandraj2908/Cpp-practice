#include <iostream>

using namespace std;

#include <bits/stdc++.h>
bool isPallindrome(char input[],int s,int e){
    
    if(s==e){
        return true;
    }
    
    if(input[s] !=input[e]){
        return false;
    }
    
    if(s<e+1){
        return isPallindrome(input,s+1,e-1);
    }
}

bool checkPalindrome(char input[]) {
    // Write your code here
    
    int size=strlen(input);
    //base case
    if(size==0){
        return true;
    }
    
    return isPallindrome(input,0,size-1);
}


int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}