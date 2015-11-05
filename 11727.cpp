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
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    int ans;
    
    if((a <= b && b <= c) || (c <= b && b <= a))
      ans = b;
    if((b <= a && a <= c) || (c <= a && a <= b))
      ans = a;
    if((a <= c && c <= b) || (b <= c && c <= a))
      ans = c;
    
    printf("Case %d: %d\n", t + 1, ans);
  }
  
  return 0;
}
