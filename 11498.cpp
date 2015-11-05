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
  int t, T;
  while(scanf("%d", &T), T) {
    int x, y; scanf("%d %d", &x,&y);
    
    for(t = 0; t < T; t++) {
      int a, b; scanf("%d %d", &a, &b);
      
      if(a == x || b == y) {
	printf("divisa\n");
      }
      else if(a > x && b > y) {
	printf("NE\n");
      }
      else if(a > x && b < y) {
	printf("SE\n");
      }
      else if(a < x && b > y) {
	printf("NO\n");
      }
      else {
	printf("SO\n");
      }
    }
  }
  
  return 0;
}
