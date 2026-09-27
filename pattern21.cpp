// Star Pattern 21
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
        int cols;
        cout<<"Enter The Number of Columns: ";
        cin>>cols;

        for(int i=1;i<=rows;i++){
            for(int j=1;j<=cols;j++){
                if(i==1||j==1||i==rows||j==cols){cout<<"*";}
                else{cout<<" ";}
            }
            cout<<endl;
        }

    }
    return 0;
}