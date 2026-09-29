#include<bits/stdc++.h>
using namespace std;
// // In C++ STL, we are going to learn
// 1.Containers
// 2.Iterators
// 3.Algorithm
// 4.Functors

// -----C++ STL-----
// 1.Pair
void explainPair(){
   pair<int,int> p1 = {25,10};

   cout<<p1.first<<" "<<p1.second<<endl;

   pair<pair<int,int>,int> p2 = {{4,8},{12}};

   cout<<p2.first.first<<" "<<p2.first.second<<" "<<p2.second<<endl;

   pair<int,int>arr[] = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};

   cout<<arr[0].first<<" "<<arr[1].second<<" "<<arr[2].first<<" "<<arr[3].second<<" "<<arr[4].first<<endl;

}

// 2.Vector
void explainVector(){
    // Declaring vector
    vector<int>vec1;
    vec1.push_back(100);
    vec1.push_back(200);
    vec1.emplace_back(300);
    vec1.emplace_back(400);

    vector<pair<int,int>>vec2;
    vec2.push_back({100,200});
    vec2.emplace_back(300,400);
    vec2.pop_back();

    vector<int>vec3(5,100); //{100,100,100,100,100}   
    vector<int>vec4(5); //{0,0,0,0,0}
    
    vector<int>vec5(5,20);
    vector<int>vec6(vec5); //copies vec5 into vec6

    // Iterating over vector
    vector<int>v1 = {20,10,15,7,6};
    vector<int> :: iterator i1 = v1.begin();
    
    cout<<*(i1)<<endl;
    i1++;
    cout<<*(i1)<<endl;
    i1+=2;
    cout<<*(i1)<<endl;

    vector<int> :: iterator i2 = v1.begin();
    vector<int> :: iterator i3 = v1.end();
    // vector<int> :: iterator i4 = v1.rbegin();
    // vector<int> :: iterator i5 = v1.rend();

    cout<<v1[2]<<" "<<v1.at(2)<<endl;

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(vector<int> :: iterator i = v1.begin(); i!=v1.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    for(auto i = v1.begin();i!=v1.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    for(auto it : v1){
        cout<<it<<" ";
    }
    cout<<endl;

    //erase() function in vector
    vector<int>v2={10,20,18,12,23,35};
    v2.erase(v2.begin()+2);//{10,20,12,23,35}
    for(auto it : v2){cout<<it<<" ";}cout<<endl;
    v2.erase(v2.begin()+2,v2.begin()+4);//{10,20,35}
    for(auto it : v2){cout<<it<<" ";}cout<<endl;

    //insert() function in vector
    v2.insert(v2.begin()+2,18);//{10,20,18,35}
    v2.insert(v2.begin()+3,12);//{10,20,18,12,35}
    v2.insert(v2.begin()+4,23);//{10,20,18,12,23,35}
    v2.insert(v2.begin()+3,2,45);
    for(auto it : v2){cout<<it<<" ";}cout<<endl;
    vector<int>copy;
    copy.insert(copy.begin(),v2.begin(),v2.end());
    for(auto it : copy){cout<<it<<" ";}cout<<endl;

    //some more functions in vector
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    
    vector<int>v4(2,7);
    v4.swap(copy);
    // for(auto it : copy){cout<<it<<" ";}cout<<endl;
    // for(auto it : v4){cout<<it<<" ";}cout<<endl;

    copy.clear();
    cout<<copy.empty()<<endl;

}
void explainList(){
    list<int>ls;
    ls.push_back(2);//{2}
    ls.push_back(4);//{2,4}
    ls.push_front(5);//{5,2,4}
    ls.emplace_front(10);//{10,5,2,4}

    for(list<int> :: iterator it=ls.begin();it!=ls.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // rest all other functions are similar to vector
    // begin(), end(), rend(), rbegin(), insert(), erase(), etc.
}
void explainDequeue(){
    deque<int>dq;
    dq.push_back(3);//{3}
    dq.push_front(2);//{2,3}
    dq.emplace_back(4);//{2,3,4}
    dq.emplace_front(1);//{1,2,3,4}

    for(auto it : dq){
        cout<<it<<" ";
    }
    cout<<endl;

    dq.pop_back();//{1,2,3}
    dq.pop_front();//{2,3}

    for(auto it : dq){
        cout<<it<<" ";
    }
    cout<<endl;

    // rest all other functions are similar to vector
    // begin(), end(), rend(), rbegin(), insert(), erase(), etc.
}
void explainStack(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout<<st.top()<<endl;//5
    st.pop();
    cout<<st.top()<<endl;//4
    
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;

    stack<int>s2;
    s2.push(5);
    s2.push(6);
    s2.push(7);
    s2.push(8);

    s2.swap(st);

    cout<<s2.top()<<endl;
    //time complexity - O(1) for all operations
}
void explainQueue(){
    queue<int>q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.push(3);//{1,2,3}
    q.push(4);//{1,2,3,4}
    q.emplace(5);//{1,2,3,4,5}

    cout<<q.front()<<endl;//1
    cout<<q.back()<<endl;//5

    q.back()+=5;
    q.front()+=9;

    q.pop();//{2,3,4,10}
    cout<<q.front()<<endl;//2

    cout<<q.size()<<endl;//4
    cout<<q.empty()<<endl;//0

    //time complexity - O(1) for all operations
    //rest size(), swap() and empty() functions are same as stack
}
void explainPriorityQueue(){
    priority_queue<int>pq;
    pq.push(8);//{8}
    pq.push(10);//{10,8}
    pq.push(25);//{25,10,8}
    pq.push(4);//{25,10,8,4}
    pq.push(12);//{25,12,10,8,4}
    pq.emplace(35);//{35,25,12,10,8,4}

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl;

    //Minimum priority queue --> Min Heap
    priority_queue<int, vector<int>, greater<int>>pqm;
    pqm.emplace(78);//{78}
    pqm.push(120);//{78,120}
    pqm.push(100);//{78,100,120}
    pqm.push(55);//{55,78,100,120}

    cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;

    //time complexity - O(1) for top() and O(log N) for push() and pop()
}
void explainSet(){
    //set is a container which stores everything sorted and unqiue
    set<int>st;
    st.insert(10);
    st.insert(20);
    st.insert(20);
    st.insert(40);
    st.insert(30);//10,20,30,40

    auto i1 = st.find(10);
    auto i2 = st.find(40);

    cout<<*(i1)<<" "<<*(i2)<<endl;

    st.erase(i2);//{10,20,30}

    st.insert(40);//10,20,30,40
    st.insert(50);//10,20,30,40,50
    st.insert(60);//10,20,30,40,50,60
    st.insert(70);//10,20,30,40,50,60,70
    st.insert(80);//10,20,30,40,50,60,70,80

    auto i3 = st.find(50);
    auto i4 = st.find(80);

    st.erase(i3,i4);

    cout<<st.count(10)<<endl;
    cout<<st.count(100)<<endl;

    //rest all operations are similar to vector
    //time complexity --> O(logN)
}
void explainMultiSet(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    cout<<ms.count(1)<<endl; //3

    ms.erase(1); // removes all occurence of 1's

    cout<<ms.count(1)<<endl; //0

    ms.insert(18);
    ms.insert(18);
    ms.insert(18);
    ms.insert(18);
    ms.insert(18);

    cout<<ms.count(18)<<endl; //5 --> [18,18,18,18,18]
    ms.erase(ms.find(18)); //only remove begin() 18 --> [18,18,18,18]
    
    auto i = ms.find(18);
    auto i1 = next(i,1);
    auto i2 = next(i,3);

    ms.erase(i1,i2);

    cout<<ms.count(18)<<endl;    

    //rest all functions are same as set
    //time complexity --> O(logN)
}
void explainUnorderedSet(){
    //all functions work here, except lower_bound() and upper_bound()
    //similar to map, but keys are not stored in sorted order
    //time complexity --> O(1) and O(N) in worst case
}
void explainMap(){
    map<int,int>m1;
    map<int,pair<int,int>>m2;
    map<pair<int,int>,int>m3;

    m1.insert(1,8);
    m1.insert(4,5);
    m1.insert(0,7);

    m2[1] = {8,9};
    m3[{4,5}] = 7;

    for(auto it : m1){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<m1[1]<<endl;
    cout<<m1[0]<<endl;
    cout<<m1[5]<<endl;

    auto i1 = m1.find(1);
    cout<<(*i1).first<<" "<<(*i1).second<<endl;

    auto i2 = m1.find(100); // as 100 is not present -- so it points end()

    //rest all functions are same
    //time complexity --> O(logN)
}
void explainmultiMap(){
    //similar to map, but keys are not unique
    //time complexity --> O(logN)
}
void explainunorderedMap(){
    //similar to map, but keys are not stored in sorted order
    //time complexity --> O(1) and O(N) in worst case
}
int main(){
    // explainPair();
    // explainVector();
    // explainList();
    // explainDequeue();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();    
    explainMultiSet();

    return 0;
}