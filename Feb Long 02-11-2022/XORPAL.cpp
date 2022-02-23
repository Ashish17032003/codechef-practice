#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char s[n];
        cin >> s;

        int zero = 0;
        int one = 0;

        if(n%2==0)
        {
            for(int i = 0; i < n; i++)
            {
                if(s[i]=='0')
                zero++;
                else
                one++;
            }

            if(zero==one)
            cout <<"yes"<<endl;

            else if((zero%2==0)||(one%2==0))
            cout << "yes"<< endl;

            else
            cout << "no"<< endl;
        }

        else
        {
            for(int i = 0; i < n; i++)
            {
                if(i!=(n/2+1))
                {
                    if(s[i]=='0')
                    zero++;
                    else
                    one++;
                }
            }
            
            if((zero%2==0)||(one%2==0))
            cout << "yes"<< endl;
            else
            cout << "no"<< endl;
        }

    }
}