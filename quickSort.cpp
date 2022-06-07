#include<iostream>
using namespace std;

int partition(int input[],int start,int end){
    int p=input[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(input[i]<p){
            count++;
        }
    }
    
    //swapping 
    input[start]=input[start+count];
    input[start+count]=p;
    
    int i=start,j=end,k=0;
    while(i<start+count && j>start+count){
        if(input[i]<p){
            i++;
        }
        else if(input[j]>p){
            j--;
        }
        else if(input[j]==p){
            j--;
        }
        else{
            int temp;
            temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }

    return start+count;
}

void QuickSort(int input[],int start,int end){
    
    if(start>=end){
        return;
    }
    
    int p=partition(input,start,end);
    QuickSort(input,start,p-1);
    QuickSort(input,p+1,end);
}

void quickSort(int input[], int size) {
   
    QuickSort(input,0,size-1);

}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


