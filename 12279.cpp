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
  int N;
  int t = 1;
  while(scanf("%d", &N), N) {
    int sum = 0;
    for(int i = 0; i < N; i++) {
      int k; scanf("%d", &k);
      if(k == 0)
	sum--;
      else
	sum++;
    }
    
    printf("Case %d: %d\n", t, sum);
    t++;
  }
  
  return 0;
}
