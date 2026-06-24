#include <stdio.h>

/* This program is suposed to
 * replace blanks with - 
 * and tabs with > */

int main(){
  int c;
  while((c = getchar()) != EOF){
    if(c == ' '){
      putchar('-');
    }else if(c == '\t'){
      putchar('>');
    }else{
      putchar(c);
    }
  }
  return 0;
}
