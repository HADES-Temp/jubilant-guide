#include<iostream>
#include<string.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    string str;
    cin>>str;

    for(int i=0;i<str.size();i++){
        if(str[i]=='.'){
            cout<<0;
        }
        else if(str[i]=='-' && str[i+1]=='.'){
            cout<<1;
            i++;
        }
        else{
            cout<<2;
            i++;
        }
    }

    

    return 0;
}