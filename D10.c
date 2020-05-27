#include <stdio.h>

int main(void) {
  int num1, num2;
  int i;
  printf("2개의 숫자를 입력");
  scanf("%d %d", &num1, &num2);
  for(i=1; i<=100; i++){
    if(i%num1 == 0 && i%num2 !=0)
      printf("%d\n", i);
    else if(i%num2 == 0 && i%num1 !=0)
      printf("%d\n", i);
    else 
      continue;
  }
  return 0;
}
