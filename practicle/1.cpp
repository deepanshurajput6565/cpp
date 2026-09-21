#include <bits/stdc++.h>
using namespace std;
int pow(int n,int p){
    if(p==0){
        return 1;
    }
    return n*pow(n,p-1);
}
int gcd(int n1,int n2,int i=1){
    int gc=1;
    if(i==min(n1,n2)){
        return 1;
    }
    if(n1%i==0 && n2%i==0){
        return gc*gcd(n1,n2,i+1);
    }


}