#include<bits/stdc++.h>
using namespace std;

void readArray(int arr[],int size){
    cout<<"Enter The Elements of Array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapNum(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void reverseArray(int arr[],int start,int end){
    if(start>=end){
        return ;
    }
    swapNum(&arr[start],&arr[end]);
    reverseArray(arr,start+1,end-1);
}


int main(){
    int size;
    cout<<"Enter The Size of Array: ";
    cin>>size;

    int arr[size];
    readArray(arr,size);
    cout<<"Elements of Array Are: ";
    printArray(arr,size);

    reverseArray(arr,0,size-1);
    cout<<"Reversed Elements of Array Are: ";
    printArray(arr,size);

    return 0;
}