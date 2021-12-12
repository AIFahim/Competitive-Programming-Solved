#include <bits/stdc++.h>
using namespace std;


int main()
{
    int left[1001], right[1001];

    left[0] = 1;
    for(int i = 1 ; i < n ; i++){
        int mx = 1;
        for(int j = 0; j <i; j++){
            if(a[i]>a[j]){
                mx = max(mx, left[j]+1);
            }
        }
        left[i] = mx;
    }


    right[n-1] = 1;
    for(int i=n-2 ; i>=0 ; i--)
    {
        int mx = 1;
        for(int j = i+1 ; j<n; j++)
        {
            if(a[i]>a[j]){
                mx = max(mx , right[j]+1);
                cout<<mx<< " ";
            }
        }

    }
    cout<<endl;


}
