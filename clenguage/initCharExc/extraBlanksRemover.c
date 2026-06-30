#include <stdio.h>
/* This is suposed to remove
 * strings of more than one blanks in input
 * and replace them with a single blanks in output*/

int main(){
  int c, sig;
  while((c = getchar()) != EOF){
    putchar(c); //prints the first character
    if(c == ' '){ //if it has received a blank
      sig = getchar();
      if(sig == ' '){
        while (sig == ' ')
          sig = getchar();
      }
      if(sig != EOF)
        putchar(sig);
    }
  }
  return 0;
}
