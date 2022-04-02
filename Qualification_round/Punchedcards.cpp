#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int case_no=1;
    while(t--){
        int r,c;
        cin>>r>>c;
        cout<<"Case #"<<case_no<<":"<<endl;
        for(int i=0;i<r*2+1;i++){
            for(int j=0;j<c*2+1;j++){
                if((i==0 && j==0) || (i==0 && j==1) || (i==1 && j==0) || (i==1 && j==1)){
                    cout<<".";
                }
                else if((i==0 && j%2==0) ||(i%2==0) && (j%2==0)){
                    cout<<"+";
                }
                else if((i==0 && j%2!=0) || (i%2==0) && (j%2!=0)){
                    cout<<"-";
                }
                else if((i==1 && j%2==0) || (i%2!=0 && (j%2==0))){
                    cout<<"|";
                }
                else
                cout<<".";
            }
            cout<<endl;
        }
        ++case_no;
    }
    return 0;
}