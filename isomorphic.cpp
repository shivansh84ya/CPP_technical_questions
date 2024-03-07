#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>

// bool isIsomorphic(string s, string t) {
//         unordered_map<char, char> l1;
//         unordered_map<char, char> l2;
//         for (int i = 0;i<s.size();++i) {
//            if ( !l1.contains(s[i]) && !l2.contains(t[i]) ) {
//                l1[s[i]] = t[i];
//                l2[t[i]] = s[i];
//            } else if (l1[s[i]] != t[i] || l2[t[i]] != s[i]) {
//                return false;
//            }
//         }
//         return true;
//     }

bool iso (string &s1, string &s2){
  int index = 0;
  int n1 = s1.length();
  int n2 = s2.length();

  int a1 [256] = {0};
  int a2 [256] = {0};

  if(n1!=n2){
  return false;
}

for(int i=0;i<n2;i++){
    if(!a1[s1[i]] and !a2[s2[i]]){
        a1[s1[i]] = s2[i];
        a2[s2[i]] = s1[i];
    }else if(a1[s1[i]] !=s2[i]){
        return false;
    }
}
return true;
}

int main(){
    // isIsomorphic("egg", "ckk");
    string s1 = "all";
    string s2 = "cdd";

    bool s = iso(s1,s2);
        if(s){
            cout << "Yes";
        }else{
            cout << "No";
        }
    


    return 0;
}