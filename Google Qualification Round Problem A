//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    map< int , int >mp;
//    int arr[]={5, 5 , 2 , 3};
//    for(int i = 0 ; i < 4 ; i++)
//    {
//       mp[arr[i]]++;
//    }
//
//}




#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	int k = 1;

	while(tc--)
	{
	    int trc = 0;
       int n;
       cin>>n;
       //map< int , int > mp;
       vector< vector<int> > v;
       v.resize(n,vector<int>(n));
       //int *count = new int[sizeof(int)*(n)];
       //unordered_map<int, int> mp;
       for(int i = 0 ; i<n ; i++)
       {
       	 for(int j = 0; j<n; j++)
       	 {
       	 	cin>>v[i][j];
       	 	if( i == j ) trc += v[i][j];
       	 }
       }
       int cnt1 =0;
       int cnt2 =0;
       int cntTmp1 = 0;
       int cntTmp2 = 0;
       /// Setting Values

        for (int i = 0; i < n; i++) {
                cnt1 =0; cnt2 =0;
            unordered_map<int, int> mpR;
            unordered_map<int, int> mpC;
                for (int j = 0; j < n; j++) {
                    mpR[v[i][j]]++;
                }
                for (int j = 0; j < n; j++) {
                    mpC[v[j][i]]++;
                }

                for (int j = 0; j < n; j++) {
                    if(mpR[v[i][j]] > 1 ) cnt1++;
                }

                for (int j = 0; j < n; j++) {
                    if(mpC[v[j][i]] > 1 ) cnt2++;
                }

                if(cnt1>1) cntTmp1++;
                //cout<<cntTmp1<<" ";

                if(cnt2>1) cntTmp2++;
                //cout<<cntTmp2<<" ";
    }

//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout<<mp[v[i][j]]<<" ";
//        }
//    }

//      for (auto itr = mp.begin(); itr != mp.end(); itr++) {
////        if (itr->second % 2 == 0) {
////            int x = itr->second;
////            sum += (itr->first) * (itr->second);
////        }
//
//        cout<<itr->first*<<" "<<itr->second<<endl;
//    }




//    }t<<endl;
      cout<<"Case #"<<k++<<": "<<trc<<" "<<cntTmp1<<" "<<cntTmp2<<endl;
	}

}


//       for(int i = 1 ; i<=n ; i++)
//       {
//           for(int j = 1; j<=n; j++)
//           {
//            mp[v[i][j]] = 1;
//
//           }
//       }






//              //mp[v[i][j]] = 1;
//              if(mp[v[i][j]] == 1){
//                 cnt++;
//                 cout<<cnt<<" ";
//              }
//              else

