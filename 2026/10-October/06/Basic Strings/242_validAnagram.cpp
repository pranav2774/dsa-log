#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "rat";
    string t = "car";

    if(s.size()!=t.size()){
        cout<<"false"<<endl;
        return 0;
    }

    int freq[26]={0};

    //store freq of each character in string s and string t
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }

    //check whether every freq[i] is 0
    // if yes, then given two strings are anagram of each other
    // if not, then given two strings are not anagram of each other
    bool isAnagram=true;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            isAnagram=false;
            break;
        }
    }


    //Display Result
    if(isAnagram){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}