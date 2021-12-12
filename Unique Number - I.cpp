#include <bits/stdc++.h>
using namespace std;
int main()
{
   //vector< int > vi;
   int n;
   cin>>n;
   int res=0;
   for(int i = 0; i<n ; i++)
   {
      int tmp;
      cin>>tmp;
      res = res^tmp;
      //vi.push_back(tmp);

   }
   cout<<res<<endl;




}
