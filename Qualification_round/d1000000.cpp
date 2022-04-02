#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int case_no=1;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=1;
        for(int i=0;i<n;i++){
            if(arr[i]>=count)
            count++;
        }
        cout<<"Case #"<<case_no<<": "<<count-1<<endl;
        
        ++case_no;
    }
    return 0;
}