#include<iostream>
using namespace std;
int main(){
    int t,rem,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        rem=a%b;
        cout<<rem<<endl;
    }
    return 0;
}