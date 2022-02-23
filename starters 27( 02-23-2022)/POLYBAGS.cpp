#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        
        if(x%10==0)
        cout<<(x/10)<<endl;

        else
        cout<<((x/10)+1)<<endl;
    }
}