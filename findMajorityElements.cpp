#include <bits/stdc++.h>
using namespace std;
map < long long , long long > mp;
vector <long long > vi;
set<long long >st;
int main()
{

    long long int tc , temp_tc;
    cin>>tc;
    temp_tc = tc/3;
    while(tc--)
    {
       long long int n;
       cin>>n;
       mp[n]++;
       if(mp[n]>temp_tc) st.insert(n);
    }
    for(int i:st)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
