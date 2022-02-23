#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        
        int c=1;
        for(int i=1; i<n; i++)
        {
            if(s[i-1]!=s[i])
            {
                c++;
            }
        }  // checking if adjacent elements are equal or not 
        
        cout<< c <<endl;
    
    }
}