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

int main() {
  int t, T; 
  
  while(scanf("%d", &T), T) {
    //-z -y -x +x +y +z
    //-3 -2 -1 +1 +2 +3
    int last = 1;
    for(t = 1; t < T; t++) {
      char c1, c2; scanf(" %c%c", &c1, &c2);
      
      if(c1 == '+' && c2 == 'x') {
	switch(last) {
	case -3:
	  ;
	case -2:
	  ;
	case -1:
	  ;
	case 1:
	  last = 1;
	case 2:
	  last = 2;
	case 3:
	  last = 3;
	}
      }      
      else if(c1 == '+' && c2 == 'y') {
	switch(last) {
	case -3:
	  ;
	case -2:
	  ;
	case -1:
	  ;
	case 1:
	  last = 2;
	case 2:
	  last = -1;
	case 3:
	  last = 1;
	}
      }
      else if(c1 == '+' && c2 == 'z') {
	switch(last) {
	case -3:
	  ;
	case -2:
	  ;
	case -1:
	  ;
	case 1:
	  last = 3;
	case 2:
	  last = 2;
	case 3:
	  last = 3;
	}
      }
      else if(c1 == '-' && c2 == 'x') {
	switch(last) {
	case -3:
	  ;
	case -2:
	  ;
	case -1:
	  ;
	case 1:
	  last = 1;
	case 2:
	  last = 2;
	case 3:
	  last = 3;
	}
      }
      else if(c1 == '-' && c2 == 'y') {
	switch(last) {
	case -3:
	  ;
	case -2:
	  ;
	case -1:
	  ;
	case 1:
	  last = -2;
	case 2:
	  last = 1;
	case 3:
	  last = 3;
	}
      }
      else if(c1 == '-' && c2 == 'z') {
	switch(last) {
	case -3:
	  ;
	case -2:
	  ;
	case -1:
	  ;
	case 1:
	  last = -3;
	case 2:
	  last = 2;
	case 3:
	  last = 1;
	}
      }
    }
    
    switch(last) {
    case -3:
      ;
    case -2:
      ;
    case -1:
      ;
    case 1:
      ;
    case 2:
      ;
    case 3:
      ;
    }
  }
  
  return 0;
}
