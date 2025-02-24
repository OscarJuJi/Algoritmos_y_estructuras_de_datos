#include <bits/stdc++.h>
using namespace std;
    string ar[3]={"-qwertyuiop-","-asdfghjkl-","-zxcvbnm,./-"};
    char f(char p, char sen){
        for (string s:ar)
    {
        for (int i=0;i<s.size();i++){
            if(s[i] == p){ if (sen=='R'){
                return s[i-1];
            } else {return s[i+1];}}
        } 
    }
    return'-';}
int main(){
    char sen;
    cin>>sen;
    string s;
    cin>>s;
    for (char i:s){char ans = f(i,sen);
    if(ans!='-'){cout<<ans;}
}return 0;}