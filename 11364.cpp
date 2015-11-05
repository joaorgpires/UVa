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
#define MAX 30

typedef long long int lld;

using namespace std;

int store[30];

int main() {
  int t, T; scanf("%d", &T);
  
  for(t = 0; t < T; t++) {
    int N; scanf("%d", &N);
    for(int i = 0; i < N; i++)
      scanf("%d", &store[i]);
    sort(store, store + N);
    int sum = 0;
    for(int i = 1; i < N; i++)
      sum += store[i] - store[i - 1];
    printf("%d\n", 2 * sum);
  }
    
  return 0;
}
