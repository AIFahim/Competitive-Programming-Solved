#include <bits/stdc++.h>
using namespace std;
int setBit(int n)
{
    int ans = 0;
    while(n != 0)
    {
       ans += (n&1);
        n= n>>1;
    }
    return ans;


}


int main()
{

   int tc;
   cin>>tc;
   while(tc--)
   {

       int a , b;
       cin>>a>>b;
        int cnt = 0;
       for(int i = a; i<= b ; i++)
       {
           cnt +=  setBit(i);
       }
       cout<<cnt;

   }





}
