#include <bits/stdc++.h>
using namespace std;
string getString(char x)
{
    string s(1, x);

    return s;
}
string givesParentesis(char a ,char b)
{
   string res = "";
   int x = a - '0';
   int y = b - '0';
   if(a>b)
   {
       int tmp = (x-y);
       while(tmp--)
       {
           res = res + ")";
       }
   }
   else
   {
       int tmp = (y-x);
        while(tmp--)
       {
           res = res + "(";
       }
   }
   return res;

}

int main()
{
    int tc;
    int z = 1;
    cin>>tc;
    while(tc--)
    {
        string st;
        cin>>st;
        string sttmp = "";
        string update = "";
        for(int i=0 ; i<st.size()-1;i++)
        {
          sttmp =  getString(st[i])+givesParentesis(st[i],st[i+1]) ;
          update = update+sttmp;

        }
        update = update + getString(st[st.size()-1]);
//        cout<<endl<<"final update "<<update<<endl;

        //cout<<update<<"   +    \\\\\\\\\\\\\\\\\\\\/"<<endl;
        /// Work For 1st Parenthesis
        string blank = "";
        //string s1;

        int k = st[0]-'0';
        while(k--)
        {
          blank = blank + "(";
        }
        sttmp = blank + update;
//        cout<<sttmp<<" 1st "<<endl;
        /////////////////////////////////

        /// Work For last Parenthesis
        k = st[st.size()-1]-'0';
        blank = "";
        while(k--)
        {
          blank = blank + ")";
        }
        sttmp = sttmp + blank ;

       cout<<"Case #"<<z++<<": "<<sttmp<<endl;


    }

}

//            cout<<" getString(st[i]) "<<getString(st[i])<<endl;
//            cout<<" givesParentesis(st[i],st[i+1]) "<<givesParentesis(st[i],st[i+1])<<endl;
//            cout<<" st.substr(i+1,st.size()-1) "<<st.substr(i+1,st.size()-1)<<endl<<endl;


/*if(st[i]>st[i+1])*/
//else sttmp = ""+st.substr(i,i)+givesParentesis(st[i],st[i+1])+st.substr(i+1,st.size()-1);
/*getString(st[i+1])*/
      //sttmp = ""+getString(st[i])+givesParentesis(st[i],st[i+1])+st.substr(i+1,st.size()-1);
//        cout<<sttmp<<"last"<<endl;

        //////////////////////////////////
