 //-------------------------------------
 //-------------------------------------
 //||                                 ||
 //||        Joao Rebelo Pires        ||
 //||           jrbartowski           ||
 //||              2015               ||
 //||                                 ||
 //-------------------------------------
 //-------------------------------------

 //You guys have no idea what clockwise
 //and counterclockwise is

 #include <bits/stdc++.h>

 using namespace std;

int main() {
  int beg, a, b, c;
  
  while(scanf("%d %d %d %d", &beg, &a, &b, &c), beg || a || b || c) {
    int ans = 360 * 3;
    ans += beg - a > 0 ? (beg - a) * 9 : (beg - a + 40) * 9;
    ans += b - a > 0 ? (b - a) * 9 : (b - a + 40) * 9;
    ans += b - c > 0 ? (b - c) * 9 : (b - c + 40) * 9;
    
    printf("%d\n", ans);
  }
  
  return 0;
}
