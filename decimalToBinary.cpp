#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int currentNumber;
    int decimalN=0;
    int i=0;
    while(n>0){
        currentNumber=n%10;
        n=n/10;
        if(currentNumber==1){
            decimalN=decimalN+pow(2,i);
            i++;
        }
        else{
            i++;
        }
        
    }
    cout<<decimalN;
}