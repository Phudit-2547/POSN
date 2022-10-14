#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int cnt=0;
    while(x!=0){
        cin>>x;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
