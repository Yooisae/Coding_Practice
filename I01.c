#include <stdio.h>
void ShowMenu(){
  printf("1.피자(15000원) 2.스파게티(10000원) 3.샐러드(7000원) 4.음료수(2000원)\n");
}
int main(void) {
  int a;
  int sum = 0;
  while(1){
  ShowMenu();
    printf("메뉴를 선택해주세요.(종료 : 5)");
    scanf("%d", &a);
    if(a == 1)
      a = 15000;
    else if(a == 2)
      a = 10000;
    else if(a==3)
      a = 7000;
    else if(a==4)
      a = 2000;
    else if(a==5)
      break;
    else
      continue;
    sum += a;
    printf("현재까지의 주문 금액: %d", sum);
  }
  printf("총 주문 금액: %d", sum);
  return 0;
}
