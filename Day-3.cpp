#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1,v2;
    // v1={4,9,5};
    // v2={9,4,9,8,4};
    
    // v1={4,3,2,1,1,1,1};
    // v2={5,9,8,4,3,2,1};
    
    
    // v1={1,2,2,1};
    // v2={2,2};
    
    
    //APPROACH-1 T.C-O(nlogn) S.C-O(n)
    set<int>s;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    int n=v1.size(),m=v2.size(),i=0,j=0;
    
    while(i<n && j<m){
        if(v1[i]==v2[j]){
            s.insert(v1[i]);
            i++;
            j++;
        }
        else if(v1[i]<v2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    for(auto x:s){
        cout<<x<<" ";
    }
    
    
    
    APPROACH-2  T.C- O(n*m)  S.C.-O(n) 
    unordered_set<int>s1,s2;
    for(auto x:v1)s1.insert(x);
    
    for(auto x:v2){
        if(s1.count(x)){
            s2.insert(x);
        }
    }
    for(auto x:s2)cout<<x<<" ";
    
    return 0;
}
