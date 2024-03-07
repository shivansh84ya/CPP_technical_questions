#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

bool div(vector <int> &p)
{

    int sum = 0;
    for (int i = 0; i < p.size(); ++i){
        sum += p[i];
    }

    int pre = 0;
    for (int i = 0; i < p.size(); ++i)
    {

        pre += p[i];
        int ans = sum - pre;
        if (ans == pre)
        {
            cout<<"the index of divided point :"<<i<<endl;
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> p{1,2,3,6};
     if(div(p)){
        cout<<"True";
     }else{
        cout<<"False";
     }
    return 0;
}


//WAP to find out givin subset is a part of array or not.
// input: arr = {5,9,5,2,3,9}
// Output : {2,3} ==> "YES"


//Remove duplicate value of array (find unique value)
// input: arr = {5,9,5,2,3,9}
// Output : {5,9,2,3}  + length


//Find out second Largest number for array

