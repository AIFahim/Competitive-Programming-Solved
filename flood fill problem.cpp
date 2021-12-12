#include <bits/stdc++.h>
using namespace std;
int r , c;
int dx[] = { 0 , 1 , -1 , 0 };
int dy[] = { 1 ,0 , 0 , -1 };
void floodfill(char mat[][50] , int i , int j, char ch , char color)
{
    ///base case
    if(i < 0 || j < 0 || i >= r || j>=c)
    {
        return;
    }
    ///boundary base case
    if(mat[i][j] != ch)
    {
        return;
    }

    mat[i][j] = color;
    for(int k = 0 ; k < 4; k++)
    {
        floodfill(mat , i+dx[k], j+dy[k],ch,color);
    }
}

int main()
{
     cin>>r>>c;
     char input[15][50];
     for(int i = 0 ; i<r ;i++){
        for(int j = 0 ; j < c ; j++)
        {
          cin>>input[i][j];
        }
     }


//    for(int i = 0 ; i<r ;i++){
//        for(int j = 0 ; j < c ; j++)
//        {
//          cout<<input[i][j];
//        }
//        cout<<endl;
//     }
     floodfill(input, 3 , 3,'.','t');
     for(int i = 0 ; i<r ;i++){
        for(int j = 0 ; j < c ; j++)
        {
          cout<<input[i][j];
        }
        cout<<endl;
     }

}
