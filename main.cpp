#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    char a=s[0];
    char b=s[2];

    long long int ai=(int)a;
    //cout<<ai-48;
    long long int temp1=ai-48;

    long long int bi=(int)b;
    //cout<<bi-48;
    long long int temp2=bi-48;

    cout<<temp1*temp2<<endl;

}
