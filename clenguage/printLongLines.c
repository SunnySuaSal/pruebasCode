#include <stdio.h>
#define MAXLINE 1000 /* Maximum input line size */
#define MINIMUM 80 /* Minimum size to be printed */

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);

/* Print longest input line */
int main(){
  int len; //current line length
  char line[MAXLINE]; //current input line

  while ((len = getLine(line, MAXLINE)) > 0) { //while still having a line to receive
    if(len > MINIMUM)
      printf("%s\n", line);
  }
  return 0;
}

/* getline: read a line into s, return length */
int getLine(char s[], int lim){
  int c, i, len;
  i = len = 0;
  //for(i=0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
  while((c = getchar()) != EOF && c != '\n'){
    if(i < lim-1){ //if there is space
      s[i++] = c;
    }
    ++len;
  }
  //store the newline if there is room
  if(c == '\n'){
    if(i < lim-1)
      s[i++] = c;
    ++len;
  }

  //remember always the sring terminator at the end
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
