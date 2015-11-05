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

char word[100];

int main() {
  int t = 1;
  string s;
  
  while(scanf("%s", word)) {
    s = string(word);
    
    if(s == "#")
      break;
    if(s == "HELLO")
      printf("Case %d: ENGLISH\n", t);
    else if(s == "HOLA")
      printf("Case %d: SPANISH\n", t);
    else if(s == "HALLO")
      printf("Case %d: GERMAN\n", t);
    else if(s == "BONJOUR")
      printf("Case %d: FRENCH\n", t);
    else if(s == "CIAO")
      printf("Case %d: ITALIAN\n", t);
    else if(s == "ZDRAVSTVUJTE")
      printf("Case %d: RUSSIAN\n", t);
    else
      printf("Case %d: UNKNOWN\n", t);
    
    t++;
  }
  
  return 0;
}
