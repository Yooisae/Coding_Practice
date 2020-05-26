#include <stdio.h>

int main(void) {
  int dan;
  int i;
  while(1){
    printf("출력하고 싶은 구구단의 단 수?(2~9)");
    scanf("%d", &dan);
    if(dan < 2 || dan > 9){
      printf("잘못 입력하였습니다.");
    }
    else
      break;
  }
  for(i = 1 ; i < 10 ; i++){
    printf("%d X %d = %d", dan, i, (dan*i));
  }
  return 0;
}
