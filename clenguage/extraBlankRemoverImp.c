#include <stdio.h>
/* Apparently there is a 
 * improved version of my extra blanks remover
 * that uses states instead of checking the next character
 * in roder to avoid the risk of losing characters */
int main(){
  int c, prevWasBlank;
  prevWasBlank = 0; //starts false

  while ((c = getchar()) != EOF) {
    if(c == ' '){ //if received an space
      if(!prevWasBlank){ //if previous was NOT an space
        putchar(c);
        prevWasBlank = 1; //coz now we now prev was indeed a blank
      }
    }else{
      putchar(c);
      prevWasBlank = 0;
    }
  }

  return 0;
}
