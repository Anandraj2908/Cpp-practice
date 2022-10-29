#include <iostream>

using namespace std;
void heapSort(int arr[], int n) {
    // Write your code
    
    //insertion
    for(int i=1;i<n;i++){
        int childI=i;
        
        while(childI>0){
            int parentI=(childI-1)/2;
            if(arr[childI]<arr[parentI]){
                int temp=arr[childI];
                arr[childI]=arr[parentI];
                arr[parentI]=temp;
                
            }else{
                break;
            }
            childI=parentI;
        }
    }
    
    //sorting
    /*int i=0;
    while(n>0){
        //findMin
        int min=arr[i];
        int minI=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                minI=j;
            }
        }
        int temp=arr[n-1];
        arr[n-1]=arr[minI];
        arr[minI]=temp;
        n--;
    }
    */
    
    //sorting
    int size=n;
    while(size>0){
        int temp=arr[0];
    arr[0]=arr[size-1];
    arr[size-1]=temp;
    
    size--;
    int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndx = 2 * parentIndex + 2;
        while (leftChildIndex < size) { 
            int minIndex = parentIndex;
            if (arr[minIndex] > arr[leftChildIndex]) {
                minIndex = leftChildIndex; 
            } 
            if (rightChildIndx < size && arr[rightChildIndx] < arr[minIndex]) { 
                minIndex = rightChildIndx;
            } 
            if (minIndex == parentIndex) { 
                break; 
            } 
            int temp = arr[minIndex];
            arr[minIndex] = arr[parentIndex];
            arr[parentIndex] = temp;
            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndx = 2 * parentIndex + 2;
        }
        
        
    }
    
    
}


int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}