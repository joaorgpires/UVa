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
    int L, W, H; scanf("%d %d %d", &L, &W, &H);
    
    printf("Case %d: ", t + 1);
    
    (L <= 20 && W <= 20 && H <= 20) ? printf("good\n") : printf("bad\n");
  }
  
  return 0;
}
