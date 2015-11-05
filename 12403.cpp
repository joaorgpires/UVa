//-------------------------------------
//-------------------------------------
//||                                 ||
//||        Joao Rebelo Pires        ||
//||           jrbartowski           ||
//||              2015               ||
//||                                 ||
//-------------------------------------
//-------------------------------------

#include <bits/stdc++.h>
typedef long long int lld;

using namespace std;

int main() {
  int t, T; cin >> T;
  
  lld m = 0;
  for(t = 0; t < T; t++) {
    string s; cin >> s;
    if(s == "report")
      cout << m << endl;
    else {
      lld k; cin >> k;
      m += k;
    }
  }
  
  return 0;
}
