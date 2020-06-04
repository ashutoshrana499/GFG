#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        
        unordered_set<int> s;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            s.insert(ar[i]);
        }
        
        bool f = false;
        for(int i=0;i<n && !f;i++){
            if(s.find(ar[i]^c) != s.end())
                f = true;
        }
        f? cout<<"Yes":cout<<"No";
        cout<<endl;
    }
    return 0;
}
