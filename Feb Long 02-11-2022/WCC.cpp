#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long x;
	    cin>>x;
	    char result[14];
	    cin>>result;
	    
	    
	    int carlsen_count=0;// to count how many points carlsen won
	    int chef_count=0;
	    
	    for(int i=0 ; i<=14; i++)
	    {
	        if(result[i]=='C')
	        {
	            carlsen_count= carlsen_count+2;
	        }
	        
	        else if(result[i]=='N')
	        {
	            chef_count= chef_count+2;
	        }
	        
	        else if(result[i]=='D')
	        {
	            chef_count= chef_count+1;
	            carlsen_count= carlsen_count+1;
	        }
	    }
	    
	    
	    if(carlsen_count > chef_count)
	    {
	        cout<< 60*x <<endl;
	    }
	    
	    else if( chef_count == carlsen_count)
	    {
	        cout<< 55*x <<endl;
	    }
	   
	   
	   else
	   {
	       cout<< 40*x <<endl;
	   }
	    
	    
	
	    
	}
	return 0;
}
