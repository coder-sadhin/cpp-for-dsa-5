#include <bits/stdc++.h>
using namespace std;


int main()
{
    string a;
    getline(cin,a);
    cout<<a<<endl;
    stringstream ss(a);
    string word;
    while (ss>>word){
        cout<<word<<endl;
    }
    
    return 0;
}