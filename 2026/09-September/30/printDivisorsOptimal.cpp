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

        vector<int>v;
        for(int i=1;i*i<=N;i++){
            if(N%i==0){
                v.push_back(i);
                if(N/i!=i){
                    v.push_back(N/i);
                }
            }
        }

        sort(v.begin(),v.end());
        cout<<"Divisors of "<<N<<" are: ";
        for(auto it : v){
            cout<<it<<" ";
        }
    }
    return 0;
}