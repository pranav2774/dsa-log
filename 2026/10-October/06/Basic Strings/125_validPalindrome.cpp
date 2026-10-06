#include<bits/stdc++.h>
using namespace std;
char convertUpperToLower(char ch){
    return ch - 'A' + 'a';
}
bool isAlphaNumeric(char ch){
    if(ch>='0' && ch<='9') return true;
    if(ch>='A' && ch<='Z') return true;
    if(ch>='a' && ch<='z') return true;
    return false;
}
int main(){
    string s = "madam";
    bool isPalindrome=true;
    int i=0,j=s.size()-1;
    while(i<j){
        while(i<j && !isAlphaNumeric(s[i])) i++;
        while(i<j && !isAlphaNumeric(s[j])) j--;

        int left = s[i];
        int right = s[j];

        if(left>='A' && left<='Z') left = convertUpperToLower(left);
        if(right>='A' && right<='Z') right = convertUpperToLower(right);

        if(left!=right){
            isPalindrome=false;
            break;
        }

        i++;
        j--;
    }

    if(isPalindrome){cout<<"GIVEN STRING IS PALINDROME :)"<<endl;}
    else{cout<<"GIVEN STRING IS NOT PALINDROME :("<<endl;}

    return 0;
}