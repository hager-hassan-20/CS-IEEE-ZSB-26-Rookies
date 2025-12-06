#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int counter=0;
   int maxC=0;
   for(int i=0;i<s.size();i++){
        if(s[i]==s[i-1]){
            counter++;
        }else{
            counter=1;
        }
        if(counter>maxC){
            maxC=counter;
        }

   }
   cout<<maxC<<endl;

return 0;
}
