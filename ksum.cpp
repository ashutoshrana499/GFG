#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll sum=0;
        for(int i=0;i<k;i++) sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
    
}
