#include <iostream>
#include <climits>
using namespace std;

#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        // Write your code here
        //Remove min 
        int size=getSize();
        pq[0]=pq[size-1];
        pq.pop_back();
        int ans=pq[0];
        //Rearrange
        int parentI=0;
        
        while(){
            int lChildI=(2*parentI)+1;
            int rChildI=(2*parentI)+2;
            if(pq[parentI]>pq[lChildI] && pq[parentI]>pq[rChildI]){
                int minI=(pq[lChildI]<pq[rChildI])?lChildI:rChildI;
                int temp=pq[parentI];
                pq[parentI]=pq[minI];
                pq[minI]=temp;
                parentI=minI;
                
            }
            else if(pq[parentI]>pq[lChildI]){
                int temp=pq[parentI];
                pq[parentI]=pq[lChildI];
                pq[lChildI]=temp;
                parentI=lChildI;
            }
            else if(pq[parentI]>pq[rChildI]){
                int temp=pq[parentI];
                pq[parentI]=pq[rChildI];
                pq[rChildI]=temp;
                parentI=rChildI;
            }
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
            case 2:  // getMin
                cout << pq.getMin() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMin() << "\n";
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