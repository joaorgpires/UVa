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
  int H, U, D, F;
  
  while(scanf("%d %d %d %d", &H, &U, &D, &F), H) {
    int fl = 0, d = 1;
    double tmp = U, h = U;
    if(h > H)
      fl = 1;
    
    h -= D;
    //printf("%d %lf %lf\n", d, tmp, h);
    
    while(h >= 0 && !fl) {
      d++;
      
      tmp -= U * F / 100.0;      
      
      if(tmp > 0)
	h += tmp;
      
      //printf("%d %lf %lf\n", d, tmp, h);

      if(h > H)
	fl = 1;
      
      h -= D;
            
      //printf("%d %lf %lf\n", d, tmp, h);
    }
    
    fl ? printf("success on day %d\n", d) : printf("failure on day %d\n", d);
  }
  
  return 0;
}
