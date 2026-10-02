#include<bits/stdc++.h>
using namespace std;

void readArray(char arr[],int size){
    cout<<"Enter The Elements of Array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printArray(char arr[],int size){
    cout<<"Elements of Array Are: ";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int main(){

    int size;
    cout<<"Enter The Size of Array: ";
    cin>>size;

    char arr[size];
    readArray(arr,size);
    printArray(arr,size);

    //pre-storing
    int hash[256]={0};
    for(int i=0;i<size;i++){
        hash[arr[i]]++;
    }

    int Q;
    cout<<"\nEnter The Number of Test Cases: ";
    cin>>Q;

    while(Q--){
        char ch;
        cout<<"Enter The Charchter Whose Frequency Has To Be Computed: ";
        cin>>ch;

        //fetch
        cout<<"Frequency of "<<ch<<" is: "<<hash[ch]<<endl;
    }

    return 0;
}