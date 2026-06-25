#include <stdio.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word */

/* Prints a histogram of lenght of words in input*/
int main(){
  int c, nc, nw, state;
  state = OUT;
  nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if(c == ' '||c == '\n'|| c == '\t'){
      --nc;
      state = OUT;
    }
    else if(state == OUT){
      state = IN;
      ++nw;
      //here add an item in the lenghts array
    }
  }
  printf("characters: %d\nwords: %d\n", nc, nw);
  return 0;
}
