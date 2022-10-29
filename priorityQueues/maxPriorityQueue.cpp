#include <iostream>
using namespace std;

#include <vector>
class PriorityQueue {
    // Declare the data members here
    vector<int> pq;
   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
        // Implement the insert() function here
        pq.push_back(element);
        int childI=pq.size()-1;
        int parentI=(childI-1)/2;
        while(pq[parentI]<pq[childI]){
            int temp=pq[parentI];
            pq[parentI]=pq[childI];
            pq[childI]=temp;
            childI=parentI;
            parentI=(childI-1)/2;
        }
    }

    int getMax() {
        // Implement the getMax() function here
        return pq[0];
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        if(pq.size()==0){
            return true;
        }
        return false;
    }
   
    int removeMax(){
        int ans=pq[0];
        //replace with last element and delete
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        //rearrangement
        int pI=0;
        int lChildI=1;
        int rChildI=2;
        while(lChildI<pq.size() && rChildI<pq.size()){
            int mI=pI;
            if(pq[mI]<pq[lChildI]){
                mI=lChildI;
            }
            if(pq[mI]<pq[rChildI]){
                mI=rChildI;
            }
            
            int temp=pq[mI];
            pq[mI]=pq[pI];
            pq[pI]=temp;
            pI=mI;
            lChildI=(2*pI)+1;
            rChildI=(2*pI)+2;
        }
        
        return ans;
    }
};

int main() {
    PriorityQueue pq;
    int choice;
    cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:  // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2:  // getMax
                cout << pq.getMax() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMax() << "\n";
                break;
            case 4:  // size
                cout << pq.getSize() << "\n";
                break;
            case 5:  // isEmpty
                cout << (pq.isEmpty() ? "true\n" : "false\n");
            default:
                return 0;
        }
        
        cin >> choice;
    }
}