// Star Pattern 18
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
            for(int j=(rows+1)-i;j<=rows;j++){
                int a = 64 + j;
                char ch = (char)a;
                cout<<ch;
            }
            cout<<endl;
        }
    }
    return 0;
}