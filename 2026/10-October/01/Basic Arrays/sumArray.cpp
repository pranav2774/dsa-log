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

    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    cout<<"\nSum of Elements of Array are: "<<sum<<endl;

    return 0;
}