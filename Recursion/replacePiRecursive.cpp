#include <iostream>


using namespace std;

// Change in the given string itself. So no need to return or print anything
#include <bits/stdc++.h>
void removeX(char input[]) {
    // Write your code here
    if(input[0]=='\0'){
        return;
    }
    
    removeX(input+1);
    
    //small calculation
    if(input[0]=='x'){
        for(int i=0;i<=strlen(input);i++){
            input[i]=input[i+1];
        }
    }
}


int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
