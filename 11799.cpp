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
    int k; scanf("%d", &k);
    
    int mn = -1;
    
    for(int i = 0; i < k; i++) {
      int c; scanf("%d", &c);
      mn = max(mn, c);
    }
    
    printf("Case %d: %d\n", t + 1, mn);
  }
  
  return 0;
}
