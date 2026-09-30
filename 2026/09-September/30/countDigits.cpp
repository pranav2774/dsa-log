#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int N;
        cout<<"Enter A Number: ";
        cin>>N;

        int orgNumber = N;
        int count=0;
        while(N>0){
            count++;
            N=N/10;
        }
        cout<<"Number of Digits in "<<orgNumber<<" is: "<<count<<endl;
    }
    return 0;
}

// Note: 
// 1)Alternate solution: int count = (int)(log10(n)+1);
// 2)As count of digit is actually how many times it is getting divided by 10, so time complexity --> O(log10(N))
// 3)Anywhere, if we repeatedly divided by N then time complexity is lograthmic