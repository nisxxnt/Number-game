#include<iostream>
using namespace std;
int main()
{
    cout<<"welcome to the course management system"<<endl;
    cout<<"enter the number of courses you want to add: ";
    int n;
    cin>>n;
    string courses[n];
    for(int i=0; i<n; i++)    {
        cout<<"enter the name of course "<<i+1<<": ";
        cin>>courses[i];
    }
    cout<<"the courses you have added are: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<i+1<<". "<<courses[i]<<endl;
    }
}