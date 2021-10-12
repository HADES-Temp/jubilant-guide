#include<iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    int mat[5][5],ith,jth,ans;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                ith=i;
                jth=j;
            }
        }
    }

    ith=2-ith;
    jth=2-jth;

    if(ith<0)
    {
         ith=-ith;
    }
    if(jth<0)
    {
         jth=-jth;
    }

    cout<<ith+jth;

    return 0;
}