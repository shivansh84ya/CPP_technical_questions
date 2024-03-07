#include<iostream>
#include<vector>
#include  <algorithm>
using namespace std;


int duplicate (vector <int> &v,int n){
    int count = 0;
    sort(v.begin(),v.end());
    for(int i = 0 ; i<n-1;i++){
        if(v[i] != v[i+1]){
            v[count++] = v[i];
        }
    }

    v[count++] = v[n-1];
    return count;
}

int main (){
    vector <int> v{1,1,2,5,6,6,8,8};
    int k = duplicate(v,8);
    cout<<k<<endl;
    for (int i = 0 ;i< k;i++){
        cout << v[i]<<"\t";
    }
}