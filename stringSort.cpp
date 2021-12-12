#include <bits/stdc++.h>
using namespace std;
bool cmp(string st1, string st2)
{
    //bat batman
   if(st1.size() <= st2.size() && st2.substr(0,st1.size()) == st1) return false;
   else if(st2.size() <= st1.size() && st1.substr(0, st2.size()) == st2) return true;
   else return st1 < st2;



}
int main()
{
   int tc;
   vector<string> vi;
   cin>>tc;
   while(tc--)
   {
       string st;
       cin>>st;
       vi.push_back(st);
   }
   sort(vi.begin(), vi.end(), cmp);
   for(auto x: vi) cout<<x<<endl;


}
