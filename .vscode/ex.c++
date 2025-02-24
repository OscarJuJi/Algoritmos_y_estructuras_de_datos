#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> numeros(n);
    for (int &i:numeros) {
cin>>i;
    }
    sort(numeros.begin(),numeros.end());
    cout<<numeros[(n-1)/2]<< endl;
}