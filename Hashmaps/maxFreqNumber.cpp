#include <iostream>
using namespace std;

#include <unordered_map>
int highestFrequency(int arr[], int n) {
    // Write your code here
    
    unordered_map<int,int> freq;
    int max=-1;
    int ans=arr[0];
   for(int i=0;i<n;i++){
       if(freq.count(arr[i])>0){
          freq[arr[i]]++;
          
          
       }
       else{
           freq[arr[i]]=1;
       }
   }
   int j=freq.size()-1;
   while(j>=0){
       if(max<=freq[arr[j]]){
              max=freq[arr[j]];
              ans=arr[j];
          }
       j--;
   }
   return ans;

}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}