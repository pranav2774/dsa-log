#include<bits/stdc++.h>
using namespace std;

void swapNum(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
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

    // A.Brute Force Approach
    // int revArr[size];
    // for(int i=0;i<size;i++){
    //     revArr[i]=arr[(size-1)-i];
    // }

    // cout<<"\nReversed Elements of Array are: ";
    // for(int i=0;i<size;i++){
    //     cout<<revArr[i]<<" ";
    // }

    // Time Complexity --> O(N)
    // Space Complexity --> O(N)

    // B.Optimal Approach
    int i=0, j=size-1;
    while(i<j){
        swapNum(&arr[i],&arr[j]);
        i++;
        j--;
    }
    cout<<"\nReversed Elements of Array are: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    // Time Complexity --> O(N/2)
    // Space Complexity --> O(1)

    return 0;
}