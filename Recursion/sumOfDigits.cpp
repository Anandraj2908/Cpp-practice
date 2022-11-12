#include <iostream>

using namespace std;

int sumOfDigits(int n) {
    // Write your code here
    
    if(n%10==n){
        return n;
    }
    
    int ans=sumOfDigits(n/10);
    
    return ans+n%10;
}


int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
