#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int count=0;

        cin>>n;
        int array[n];

        int ahead=0;      // to check while entering the number if it's equal to the pos or not (not including 0th pos) 
          
        for(int i=0; i<n; i++)
        {
            cin>>array[i];
      
            ahead=i+1+count; // look at example 3 from codechef ...... 

            if(array[i]== ahead)
            {
                count++;
            }
        }

        cout<<count<<endl;

    } // test cases loop ends here
}