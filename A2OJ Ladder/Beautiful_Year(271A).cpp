#include<iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;

    cin>>n;

    int a,b,c,d;
    
    while(1){
        n++;
        a=n%10;
        b=(n/10)%10;
        c= (n/100)%10; 
        d= (n/1000)%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) 
        break;

    }

    cout<<n;

    return 0;
}