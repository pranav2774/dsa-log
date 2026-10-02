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

int minElement(int a, int b){
    return (a<b) ? a : b;
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

    int highestOccuringElement=INT_MIN, highestFrequency=0;
    int secondHighestOccuringElement=INT_MIN, secondHighestFrequency=0;

    for(auto it : mpp){
        if(it.second>highestFrequency){
            secondHighestOccuringElement=highestOccuringElement;
            secondHighestFrequency=highestFrequency;
            highestOccuringElement=it.first;
            highestFrequency=it.second;
        }
    }

    cout<<"\nSecond Highest Occuring Element: "<<secondHighestOccuringElement<<endl;
    cout<<"Frequency: "<<secondHighestFrequency<<endl;

    return 0;
}