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
  int t, T; scanf("%d", &T);
  
  for(t = 0; t < T; t++) {
    lld a, b; scanf("%lld %lld", &a, &b);
    if(a == b) printf("=\n");
    if(a < b) printf("<\n");
    if(a > b) printf(">\n");
  }
  
  return 0;
}
