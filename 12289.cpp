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

string numbers[3] = {"one", "two", "three"};

bool test(string s) {
  if(s[0] == 'o' && s[1] == 'n')
    return true;
  if(s[0] == 'o' && s[2] == 'e')
    return true;
  if(s[1] == 'n' && s[2] == 'e')
    return true;
  return false;
}

int main() {
  int t, T; cin >> T;
  
  for(t = 0; t < T; t++) {
    string s;
    cin >> s;
    
    if(s.length() == 5)
      cout << 3 << endl;
    else if(test(s))
      cout << 1 << endl;
    else
      cout << 2 << endl;
  }
  
  return 0;
}
