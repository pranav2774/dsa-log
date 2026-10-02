#include<bits/stdc++.h>
using namespace std;

void readArray(int arr[],int size){
    cout<<"Enter The Elements of Array: ";
    for(int i=0;i<size;i++){cin>>arr[i];}
}
void printArray(int arr[],int size){
    cout<<"Elements of Array Are: ";
    for(int i=0;i<size;i++){cout<<arr[i]<<" ";}
}

int main(){

    int size;
    cout<<"Enter The Size of Array: ";
    cin>>size;

    int arr[size];
    readArray(arr,size);
    printArray(arr,size);

    int atMax;
    cout<<"\nEnter The at max element arra contains: ";
    cin>>atMax;

    int hash[atMax+1]={0};

    for(int i=0;i<size;i++){
        hash[arr[i]]++;
    }

    int Q;
    cout<<"Enter The Number of Test Cases: ";
    cin>>Q;
    
    while(Q--){
        int num;
        cout<<"Enter A Number Whose Frequency Has To Be Calculated: ";
        cin>>num;

        cout<<"Frequency of "<<num<<" is: "<<hash[num]<<endl;

    }
    return 0;
}