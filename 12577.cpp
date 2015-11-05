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

char word[100];

int main() {
  int t = 1;
  
  while(scanf("%s", word)) {
    string s = string(word);
    
    if(s == "*")
      break;

    printf("Case %d: ", t);
    
    (s == "Hajj") ? printf("Hajj-e-Akbar\n") : printf("Hajj-e-Asghar\n");
    t++;
  }
  
  return 0;
}
