//-------------------------------------
//-------------------------------------
//||                                 ||
//||        Joao Rebelo Pires        ||
//||           jrbartowski           ||
//||              2016               ||
//||                                 ||
//-------------------------------------
//-------------------------------------

#include <bits/stdc++.h>
typedef long long int lld;

using namespace std;

int coef[30];

int main() {
  int t, T; cin >> T;
  
  for(t = 0; t < T; t++) {
    int n; cin >> n;
    
    for(int i = 0; i <= n; i++)
      cin >> coef[i];
    
    int d, k; cin >> d >> k;
    int l = 0;
    
    for(int i = 1; k > 0; i++) {
      k -= i * d;
      l++;
    }
    
    lld ans = 0;
    
    for(int i = 0; i <= n; i++)
      ans += coef[i] * pow(l, i);
    
    cout << ans << endl;
  }
  
  return 0;
}
