#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,n;
        cin>>n>>w;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];  //money earned on each day
        }

        int max_index=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max_index)
            max_index=i;
        }

        
    }
    return 0;
}
