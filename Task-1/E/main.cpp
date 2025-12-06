#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
       int v1=a[i];
       int v2=x-v1;

        if(mp.find(v2)!=mp.end()){
            cout<<mp[v2]<<' '<<i+1<<endl;
            return 0;
        }
    if(mp.find(v1)==mp.end()){
        mp[v1]=i+1;
    }
    }


    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}

