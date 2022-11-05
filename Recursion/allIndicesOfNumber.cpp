#include<iostream>

using namespace std;


int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */

     //base case
    if(size<0){
        return 0;
    }

    //recursive call
    int sizeOfO=allIndexes(input+1,size-1,x,output);

    //small calculation

    //shifting array indexes by 1
    for(int i=0;i<sizeOfO;i++){
        output[i]=output[i]+1;
    }

    //if case
    if(input[0]==x){
        sizeOfO=sizeOfO+1;
        for(int i=sizeOfO-2;i>=0;i--){
            output[i+1]=output[i];
        }
        output[0]=0;
        
    }
    return sizeOfO;
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}


