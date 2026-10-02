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

    int highestFrequency=INT_MIN, lowestFrequency=INT_MAX;
    for(auto it : mpp){
        if(it.second>highestFrequency){
            highestFrequency=it.second;
        }
        if(it.second<lowestFrequency){
            lowestFrequency=it.second;
        }
    }

    cout<<"\nHighest Frequency --> "<<highestFrequency<<endl;
    cout<<"Lowest Frequency --> "<<lowestFrequency<<endl;
    cout<<"Sum of Lowest and Highest Frequency: "<<(highestFrequency+lowestFrequency)<<endl;

    return 0;
}