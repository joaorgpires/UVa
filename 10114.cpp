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
#define F first
#define S second

typedef long long int lld;

using namespace std;
typedef pair<int, double> pidl;
list<pidl> mth;

int main() {
  int t, T, M;
  double P, L;
  
  while(scanf("%d %lf %lf %d", &M, &P,&L, &T), M >= 0) {
    int nmonths = 0;
    for(t = 0; t < T; t++) {
      pidl p;
      scanf("%d %lf", &p.F, &p.S);
      mth.push_back(p);
    }
    
    double owe = P + L;
    double paym = L / M;
    L = owe;
        
    double last = mth.front().S;
    
    while(true) {
      if(!mth.empty() && nmonths == mth.front().F) {
	last = mth.front().S; mth.pop_front();
      }
      
      if(nmonths == 0)
	owe -= P;
      else
	owe -= paym;
      
      L -= L * last;
      
      //printf("%d %lf %lf %lf\n", nmonths, owe, L, last);
      
      if(owe < L)
	break;
      
      nmonths++;
    }
    
    nmonths == 1 ? printf("1 month\n") : printf("%d months\n", nmonths);
    while(!mth.empty())
      mth.pop_front();
  }

  return 0;
}
