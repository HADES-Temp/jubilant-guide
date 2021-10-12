#include<iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;

    cin>>n;

    int a,b,c,sum_a=0,sum_b=0,sum_c=0;

    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        sum_a+=a;
        sum_b+=b;
        sum_c+=c;
    }

    if(sum_a==0 && sum_b==0 && sum_c==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}