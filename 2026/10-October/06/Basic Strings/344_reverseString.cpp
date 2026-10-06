#include<bits/stdc++.h>
using namespace std;
void swapChar(char* c1, char* c2){
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}
void readString(char arr[],int size){
    cout<<"Enter The Elements of String: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printString(char arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void reverseString(char arr[],int start,int size){
    if(start>=(size/2)){
        return ;
    }
    swapChar(&arr[start],&arr[(size-1)-start]);
    reverseString(arr,start+1,size);
}
int main(){

    int size;
    cout<<"Enter The Size of String: ";
    cin>>size;

    char arr[size];
    readString(arr,size);
    cout<<"Elements of String Are: ";
    printString(arr,size);

    reverseString(arr,0,size);
    cout<<"\nReversed Elements of String Are: ";
    printString(arr,size);

    return 0;
}