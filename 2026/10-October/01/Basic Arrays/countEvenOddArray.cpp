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

    int oddDigits = 0, evenDigits = 0;
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0) oddDigits++;
        else evenDigits++;
    }

    cout<<"\nNumber of Odd Digits in Array is: "<<oddDigits;
    cout<<"\nNumber of Even Digits in Array is: "<<evenDigits<<endl;
    
    return 0;
}