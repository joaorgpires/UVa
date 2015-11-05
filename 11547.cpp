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
    lld n; scanf("%lld", &n);
    n *= 567;
    n /= 9;
    n += 7492;
    n *= 235;
    n /= 47;
    n -= 498;
    n /= 10;
    n %= 10;
    
    printf("%lld\n", abs(n));
  }
  
  return 0;
}
