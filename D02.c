include <stdio.h>

int main(void) {
  
  int max_num = 0, min_num = 100;
  while(1){
    int number;
    printf("0부터 100 사이의 숫자를 입력\n");
    getchar();
    scanf("%d",&number);
    if(number<0||number>100){
      break;
    }
    if(max_num<number){
      max_num=number;
    }
    if(min_num > number){
      min_num=number;
    }
  }
  printf("입력된 숫자들 중 가장 큰수는 %d이고\n,", max_num);
  printf("가장 작은 수는 %d입니다", min_num);
  return 0;
}
