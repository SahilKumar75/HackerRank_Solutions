#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    string one="S",two="O",three="S";
    int c=0;
    for(int i=0;i<a.length();i++){
        if(i%3==0){
            if(char(a[i])!=char('S')){c++;}
        }
        else if(i%3==1){
            if(char(a[i])!=char('O')){c++;}
        }
        else if(i%3==2){
            if(char(a[i])!=char('S')){c++;}
        }
    }
    cout<<c<<endl;
    return 0;
}
