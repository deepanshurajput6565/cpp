#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s1;
	    string s2;
	    cin>>s1;
	    cin>>s2;
	    int c1_a=0,c1_b=0,c2_a=0,c2_b=0;
	    for(auto ch : s1){
	        if(ch=='a'){
	            c1_a+=1;
	        }
	        else if(ch=='b'){
	            c1_b+=1;
	        }
	    }
	    
	    for(auto cha : s2){
	        if(cha=='a'||cha=='A'){
	            c2_a+=1;
	        }
	        else if(cha=='b'||cha=='B'){
	            c2_b+=1;
	        }
	    }
	    if(c1_a==c2_b && c1_b==c2_a){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}

}