// replace pi with 3.14wherever pi charecther are found is in the string

#include<bits/stdc++.h>
using namespace std;

void replacePi(string s)
{
    if(s.length()==0)
    {
        return;
    }

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1));
    }
    

    /*
    int i=0;
    if((s[i]+s[i+1])==('p'+'i'))
    {
        string ros = s.substr(i+1);
    }
    */   
}

int main()
{
    string s;
    cin>>s;
    replacePi(s);
}