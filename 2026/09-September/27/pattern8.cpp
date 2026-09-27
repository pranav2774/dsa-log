// Star Pattern 8
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
            for(int j=1;j<=i-1;j++){
                cout<<" ";
            }
            //stars
            for(int k=1;k<2*(rows+1-i);k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}