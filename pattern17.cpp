// Star Pattern 17
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
            for(int j=1;j<=rows-i;j++){
                cout<<"  ";
            }
            //alphabet-1
            for(int k=1;k<=i;k++){
                int a = 64 + k;
                char ch = (char)a;
                cout<<ch<<" ";
            }
            //alphabet-2
            for(int l=i-1;l>=1;l--){
                int b = 64 + l;
                char ch = (char)b;
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}