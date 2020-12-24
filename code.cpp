
#include<bits/stdc++.h>
#define endl "\n" 
#define pi acos(-1)
#define ll long long 
using namespace std;
void solve();
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int q=1;cin>>q;
    while(q--){
        solve();
    }
    return 0;
}
void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k,p=-1;cin>>k;
    int arr[n-k+1]={0};
    for(int i=0;i<=n-k;i++){
        if(a[i]<0){
            if(arr[i]==0)
            arr[i]=a[i];
            int b=k,l=i;
            if(l!=0){
                while(l>p&&l!=0){
                    l--;
                    b--;
                    if(b==0)
                    break;
                    if(arr[l]==0)
                    arr[l]=a[i];
                    else
                    break;
                }
            }
            p=i;
        }
    }
    for(int i=n-k+1;i<n;i++){
        if(a[i]<0){
            int b=k,l=i;
            while(true){
                l--;
                if(l<=p)
                break;
                b--;
                if(b==0)
                break;
                if(l<=n-k){
                    if(arr[l]==0)
                    arr[l]=a[i];
                    else
                    break;
                }
            }
            break;
        }
    }
    for(int i=0;i<=n-k;i++)
    cout<<arr[i]<<" ";
    
    cout<<endl;
}
