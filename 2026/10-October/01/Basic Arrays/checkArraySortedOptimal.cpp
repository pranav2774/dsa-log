#include<bits/stdc++.h>
using namespace std;

void readArray(int arr[],int size){
    cout<<"Enter The Elements of Array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printArray(int arr[],int size){
    cout<<"Elements of Array Are: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter The Size of Array: ";
    cin>>size;

    int arr[size];
    readArray(arr,size);
    printArray(arr,size);

    bool isSorted=true;
    for(int i=1;i<size;i++){
        if(arr[i-1]>=arr[i]){
            isSorted=false;
            break;
        }
    }

    if(isSorted){
        cout<<"\nGiven Array Is Sorted In Ascending Order :)"<<endl;
    }
    else{
        cout<<"\nGiven Array Is Not Sorted In Ascending Order :("<<endl;
    }

    // TIME COMPLEXITY --> O(N) --> Optimal Approach

    return 0;
}