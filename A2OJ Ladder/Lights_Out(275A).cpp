#include<iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    int mat[5][5],input[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            input[i][j]=0;
        }
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>input[i][j];
        }
    }


    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            mat[i][j]=input[i][j] + input[i+1][j] + input[i-1][j] + input[i][j+1] + input[i][j-1] + 1;
            mat[i][j]=mat[i][j]%2;
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    

    return 0;
}