// Star Pattern 7
// Striver's A2Z DSA Sheet
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cout<<"Enter The Number of Test Cases: ";
    cin>>T;

    while(T--){
        int rows;
        cout<<"Enter The Number of Rows: ";
        cin>>rows;

        for(int i=1;i<=rows;i++){
            //spaces
            for(int j=1;j<=(rows-i);j++){
                cout<<" ";
            }
            //stars
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}