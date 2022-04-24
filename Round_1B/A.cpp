#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int case_count=1;
    while(t--){
        int p;
        cin>>p;
        deque<int> dq;
        for(int i=0;i<p;i++){
            int temp;
            cin>>temp;
            dq.push_back(temp);
        }
        int prev=-1;
        long long count=0;
        while(!dq.empty()){
            if(dq.front()<=dq.back()){
                if(dq.front()>=prev){
                    count++;
                    prev=dq.front();
                }
                dq.pop_front();
            }
            else{
                if(dq.back()>=prev){
                    count++;
                    prev=dq.back();
                }
                dq.pop_back();
            }
        }
        cout<<"Case #"<<case_count<<": "<<count<<endl;
        case_count++;
    }
    return 0;
}