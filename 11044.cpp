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

using namespace std;

int main() {
  int t, T; scanf("%d", &T);
  
  for(t = 0; t < T; t++) {
    int n, m; scanf("%d %d", &n, &m);
    
    printf("%d\n", (m / 3) * (n / 3));
  }
  
  return 0;
}
