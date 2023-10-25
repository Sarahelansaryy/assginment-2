#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    string o="";
    getline(cin,s);
    int blank=0;


        for(int i=0;i<s.length();i++){

            if(i==0 && s[0]>='a' && s[0]<='z'){
                s[0]=toupper(s[0]);

            }else  if(s[i]==' ' && s[i+1]==' ' ){
                continue;}
            if(s[i]==' '&& s[i+1]=='.'){
                continue;
            }

            o+=tolower(s[i]);
        }
        cout<<o;

    return 0;}