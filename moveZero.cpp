#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {0,1,0,3,12};
    vector<int>temp;
    //temp.
    int cntInd = 0;
    for(auto i : nums)
    {
        if(i != 0)
        {
             cntInd++;
            temp.push_back(i);
        }
        //else
    }
    //cout<<" cntInd "<<cntInd<<" nums.size "<<nums.size()<<endl;
    for(int i = cntInd; i<nums.size(); i++)
    {
        temp.push_back(0);
    }
//    for(int i = 0 ; i < nums.size(); i++)
//    {
//      cout<<temp[i]<<" ";
//    }
//    for(int i = 0 ; i < nums.size(); i++)
//    {
//      cout<<nums[i]<<" ";
//    }
    for(int i = 0 ; i < nums.size(); i++)
    {
      nums[i] = temp[i];
    }
//    for(int i = 0 ; i < nums.size(); i++)
//    {
//      cout<<nums[i]<<" ";
//    }
}
