#include <stdio.h>
#include <string.h>

int main(void) {
  int lines, size;
	char str[80];
  int i,j;
  printf("Enter a string >> ");
  scanf("%s", str);
  for(i=0; i<strlen(str) ;i++){
      lines = str[i]-'a'+1;
      for(j=0;j<lines;j++)
        printf("%c",str[i]);
      printf("\n");
  }
  
  return 0;
}
