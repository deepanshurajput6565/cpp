// wrp to find out the smallest no. of an array and also find out the location



#include <iostream>
using namespace std;
int main(){
    int i,j,k,l ,a[3][3],small=a[0][0],loc_1=0,loc_2=0;
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            cin>>a[i][j];


        }
    }
    for(int k=0;k<3;k++){
        for(l=0;l<3;l++){
            if(a[k][l]<small){
                small=a[k][l];
                loc_1=k;
                loc_2=l;

            }

        }
    }

    cout<<"smallest no in 2d array "<<small<<" location this element "<<loc_1+1<<loc_2+1;
    cout<<"\n";
// wrp to find out the transpose of a matrix 

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[j][i]<<" ";


        }
        cout<<"\n";

    }
    // wrp to find out wheather a given element is available in matrix or not
    cout<<"\n";
    int item,c=0,loc1=0,loc2=0;
    cin>>item;

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (item==a[i][j]){
                c++;
                loc1=i;
                loc2=j;
                cout<<"item found at "<<loc1+1<<loc2+1;



            }


        }
    }
    if(c==0){
        cout<<"item not found";
    }

    cout<<"\n";    

// wrp to find out the multiplication of two matrix
    


}