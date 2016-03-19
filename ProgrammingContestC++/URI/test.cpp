#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fast;
    //4 3 : 5 + 7+ 9
    int cases,x,y,add1;
    for(int i=1; i<=cases;cases++){
    cin>>x>>y;
    if(x%2==0)
        x+=1;
    for(int j=1;j<=y;j++)
        add1+=x;
        x+=2;
        }
    cout<<add1<<endl;

    return 0;
}
