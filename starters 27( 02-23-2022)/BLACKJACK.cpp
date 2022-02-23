#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y;
        cin>>x>>y;
        if((21-x-y)<=10)
        cout<<(21-x-y)<<endl;

        else
        cout<<-1<<endl;
    }
}