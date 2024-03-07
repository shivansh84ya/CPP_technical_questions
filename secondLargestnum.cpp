#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main (){

vector <int> v{55,65,44,46,8,12,45,65,78};

sort(v.begin(),v.end());
auto it = v.end();

cout << "second num  = "<<*(it-2);
return 0; 

}