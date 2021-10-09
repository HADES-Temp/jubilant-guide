#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    string str;
    int low=0,high=0;
    cin>>str;

    for(int i=0;i<str.size();i++){
        if(islower(str[i])){
            low++;
        }
        if(isupper(str[i])){
            high++;
        }
    }

    if(high>low){
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }
    else {
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }

    cout<<str;

    return 0;
}