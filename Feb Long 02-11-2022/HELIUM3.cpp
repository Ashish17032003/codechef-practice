#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,x,b,y;
	    cin>>a>>x>>b>>y;
	    
	    if(b*y>=a*x){
	        cout<<"YES"<<endl;
	    }
	    
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
