#include <iostream>
#include <vector>
using namespace std;

#include <climits>
#include<queue>
vector<int> kLargest(int arr[], int n, int k){
   
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int kthLargest(int* arr, int n, int k) {
    // Write your code here
    vector<int> ans=kLargest(arr,n,k);
    int min=INT_MAX;
    for(int i=0;i<k;i++){
        if(ans[i]<min){
            min=ans[i];
        }
    }
    return min;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << kthLargest(arr, n, k);

    delete[] arr;
}