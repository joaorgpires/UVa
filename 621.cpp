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

char c[2000];

int main() {
  int t, T; scanf("%d", &T);
  
  for(t = 0; t < T; t++) {
    scanf("%s", c);
    string s = string(c);
    if(s == "1" || s == "4" || s == "78")
      printf("+\n");
    else if(s[s.length() - 2] == '3' && s[s.length() - 1] == '5')
      printf("-\n");
    else if(s[0] == '9' && s[s.length() - 1] == '4')
      printf("*\n");
    else
      printf("?\n");
  }
  
  return 0;
}
