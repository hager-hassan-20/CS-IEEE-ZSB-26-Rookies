#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    list<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
   a.sort();
   a.unique();
   cout<<a.size()<<endl;
    return 0;
}

