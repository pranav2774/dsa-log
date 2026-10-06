#include<bits/stdc++.h>
using namespace std;
int convertCharToInt(char ch){
    return ch - '0';
}
int main(){
    string s="35427";
    int ansIndex=-1;

    for(int i=s.size()-1;i>=0;i--){
        int currNum = convertCharToInt(s[i]);
        if(currNum%2!=0){
            ansIndex=i;
            break;
        }
    }
    cout<<s.substr(0,ansIndex+1);

    return 0;
}