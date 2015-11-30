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
  int N, B, H, W;
  int MAX = 200 * 10000 + 1000;
  
  while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF) {
    int mn = MAX;
    
    while(H--) {
      int p; scanf("%d", &p);
      for(int i = 0; i < W; i++) {
	int a; scanf("%d", &a);
	if(a >= N && p * N <= B)
	  mn = min(mn, p * N);
      }
    }
    
    mn != MAX ? printf("%d\n", mn) : printf("stay home\n");
  }
  
  return 0;
}
