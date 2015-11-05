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

using namespace std;

int main() {
  char c;
  int fl = 1;
  
  while(scanf("%c", &c) != EOF) {
    if(c == '\"') {
      if(fl) {
	printf("``");
	fl = 0;
      }
      else {
	printf("\'\'");
	fl = 1;
      }
    }
    else {
      printf("%c", c);
    }
  }
  
  return 0;
}
