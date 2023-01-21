#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v={1,1,0,1,1,1,1,1,1};
    int n=v.size(),ans=INT_MIN;
    
    // Approach-1  T.C.-O(n^2) S.C-O(1)
    // -------------------------------------------------
    for(int i=0;i<n;i++){
        if(v[i]==1){
            int j=i,cnt=0;
            while(j<n){
                if(v[j]==1){
                    cnt++;
                }
                else{
                    break;
                }
                j++;
            }
            ans=max(ans,cnt);
        }
        else{
            continue;
        }
    }
    
    // --------------------------------------------------
    
    // Approach -2 T.C-O(n) , S.C-O(1);
    int i=0,cnt=0;
    while(i<n){
        if(v[i]==1){
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=0;
        }
        i++;
    }
    ans=max(ans,cnt);
    cout<<"Answer is: "<<ans<<endl;
    
    return 0;
}
