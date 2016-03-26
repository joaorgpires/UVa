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

string s;
string ans;

int main() {
  int N, P, n, p;
  int cnt = 0;
  
  while(cin >> N >> P >> ws) {
    if(N == 0 && P == 0)
      break;
    
    cnt++;
    if(cnt > 1)
      cout << endl;
    
    for(n = 0; n < N; n++) {
      getline(cin, s);
      //cout << s << endl;
    }
    
    getline(cin, s);
    ans = s;
    double D;
    int R, r;
    cin >> D >> R >> ws;
    
    for(r = 0; r < R; r++)
      getline(cin, s);
    
    double mxd = D;
    int mxr = R;
    
    for(p = 1; p < P; p++) {
      getline(cin, s);
      cin >> D >> R >> ws;
      
      if(R > mxr) {
	mxr = R;
	mxd = D;
	ans = s;
      }
      
      else if(R == mxr) {
	if(mxd > D) {
	  mxd = D;
	  ans = s;
	}
      }
      
      for(r = 0; r < R; r++)
	getline(cin, s);
    }
    
    cout << "RFP #" << cnt << endl << ans << endl;
    //cout << mxd << " " << mxr;
  }
  
  return 0;
}
