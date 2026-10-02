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

    map<int,int>mpp;
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
    }

    int Q;
    cout<<"\nEnter The Number of Queries: ";
    cin>>Q;

    while(Q--){
        int num;
        cout<<"Enter A Number Whose Frequency Has To Be Computed: ";
        cin>>num;

        cout<<"Frequency of "<<num<<" is: "<<mpp[num]<<endl;
    }

    return 0;
}