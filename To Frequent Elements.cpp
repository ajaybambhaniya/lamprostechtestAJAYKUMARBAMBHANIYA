#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
using namespace std;

void dubllicate(int arr[],int n,int k){
    vector<int>ans;
    set<int>s;
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){ // first we travse arr check comman elemet then elemet put into set
                                // we get comman element but only one time 
            s.insert(arr[i]);
            }
        }
     }

     for(auto it:s){            // we get array so we only push set value to vector arr;
        ans.push_back(it);
     }
     cout<<"most frequntly";
     for(int i=0;i<k;i++){ // we get k frequntly so we get value for at k 
        cout<<ans[i]<<" ";
     }
     // output we get value 5 3
     
    
}
int main(){
    int n=7;
int arr[]={5,2,5,3,5,3,1};
int k=2;
dubllicate(arr,n,k);

}