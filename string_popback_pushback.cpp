#include<iostream>
using namespace std;

int main()
{
     string s;


    cout<<"enter a string"<<endl;
    getline(cin,s);
    cout<<s<<endl;


    s.push_back('p');
    cout<<"After push back string is "<<s<<endl;

    s.pop_back();
    cout<<"after pop back string is "<<s<<endl;


    return 0;
}
