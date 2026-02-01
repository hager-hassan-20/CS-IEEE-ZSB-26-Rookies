#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            int a[n];
            for(int i=0; i<n; i++){
                cin>>a[i];
            }
        for(int i=0; i<n; i++){
                int x=0;
                for(int j=0; j<n; j++){
                    if(i!=j){
                        x^=a[j];
                    }
                }
                if(a[i]==x){
                    cout<<a[i]<<"\n";
                    break;

                }
            }
    }
    return 0;
}
