#include<bits/stdc++.h>
using namespace std;

int main ()
{
    // we can decleare a string using string data type.
    string s;
    cout<<"Enter a string\n";
    // taking input in string using cin.
    //cin>>s;       // cin reads until space appear in a string 
    // cout<<s; 
    // taking input in string using getline().
    getline(cin,s);  // getline() reads untill a  new line apeare .
    cout<<s; 
     return 0;
}