#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int p1=0, p2=n-1;
      while(p1<p2){
        int sum=a[p1]+a[p2] ;

    if(x>sum){
        p1++;
    } else if(x<sum) {
        p2--;
    }else{
        break;
    }
    if(x>sum || x<sum){
        cout<<p1+1<<" "<<p2+1<<"\n" ;
    } else{
        cout<<"IMPOSSIBLE"<<"\n";
    }
      }
    return 0;
}

