#include <stdio.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word */

/* Prints a histogram of lenght of words in input*/
int main(){
  int c, nc, nw, state, wl;
  state = OUT;
  wl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    ++wl;
    if(c == ' '||c == '\n'|| c == '\t'){
      --nc;
      --wl;
      state = OUT;
      //here, add a new item in lenArray and store wl
      //no need, I can just do it here
      //printf("len:%d ", wl);
      for(int j = 0; j < wl; ++j)
        putchar('#');
      wl = 0;
      putchar('\n');
    }
    else if(state == OUT){
      state = IN;
      ++nw; 
    }
  }
  printf("characters: %d\nwords: %d\n", nc, nw);
  return 0;
}
