#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    vector< int > baseArr;
    vector< int > updateArr;
    while(tc--)
    {
        int n;
        cin>>n;
        map< int , int > mp;
        vector< int > freq;
        baseArr.resize(n);

        updateArr.resize(n);
        for(int i = 0; i < n ; i++)
        {
            cin>>baseArr[i];
        }
        baseArr[-1] = 0;
        baseArr[n+1] = 0;
        //cout<<" Ok" <<endl;
        for(int i = 0; i < n ; i++)
        {
            cin>>updateArr[i];
        }
        updateArr[-1] = 0;
        updateArr[n+1] = 0;
         //cout<<" Ok" <<endl;
        for(int i = 0; i < n ; i++)
        {
            if(baseArr[i] != updateArr[i])
            {
                freq.push_back(i);
            }
        }
        int cnt = 0;

//        for(int i =0; i<freq.size(); i++)
//        {
//            cout<<freq[i]<<" ";
//        }
//        cout<<"------------------"<<endl;
        for(int i =0; i<freq.size(); i++)
        {
            //cout<<freq[i]<<endl;
           if(updateArr[freq[i]] >= 0 && (baseArr[freq[i] - 1] != 0))
           {
               if((baseArr[freq[i]] + baseArr[freq[i] - 1])>= 0 )
                cnt++;
           }
           if(updateArr[freq[i]] < 0 && (baseArr[freq[i] - 1] != 0))
           {
               if((baseArr[freq[i]] + baseArr[freq[i] - 1]) < 0 )
                cnt++;
           }
        }

        if(cnt != freq.size())
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

        freq.clear();
        updateArr.clear();
        baseArr.clear();

    }


}
