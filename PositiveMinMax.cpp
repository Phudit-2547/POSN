//Find positive min max
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int num[8];
    for(int i=0;i<8;++i){
        cin>>num[i];
    }
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<8;++i){
        if(num[i]>max && num[i]>0 ){
            max=num[i];
        }
        if(num[i]<min && num[i]>0 ){
            min=num[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
}
