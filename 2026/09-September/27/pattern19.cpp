// Star Pattern 19
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

        int nbsp = 0;
        //upper part
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=(rows+1)-i;j++){
                cout<<"*";
            }
            for(int l=1;l<=nbsp;l++){
                cout<<" ";
            }
            for(int k=1;k<=(rows+1)-i;k++){
                cout<<"*";
            }
            cout<<endl;
            nbsp+=2;
        }

        //lower part
        nbsp-=2;
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k=1;k<=nbsp;k++){
                cout<<" ";
            }
            for(int l=1;l<=i;l++){
                cout<<"*";
            }
            cout<<endl;
            nbsp-=2;
        }
    }
    return 0;
}