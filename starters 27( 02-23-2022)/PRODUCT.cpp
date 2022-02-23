#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t--)
    {
       int b,c;
       cin>>b>>c;
       cout<<c/__gcd(b,c)<<endl;

    }
    return 0;
}



/*

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,c;
        cin>>b>>c;

        for(long long i=2; i<b; i++)
        {
            int product=i*b;
            if(product%c==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}

*/