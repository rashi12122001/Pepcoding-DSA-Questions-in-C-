//   *
//  ***
// *****
//  ***
//   * 


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces = n/2;
    int stars = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<spaces;j++){
            cout<<"\t";
        }
        for(int j=0;j<stars;j++){
            cout<<"*\t";
        }
        cout<<endl;
        if(i<n/2){
            spaces--;
            stars += 2;
        }   
        else{
            spaces++;
            stars -= 2;
        }     
    }
    return 0;
}