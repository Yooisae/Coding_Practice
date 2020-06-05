#include <stdio.h>
int charge_sub(int a, int m){
  int total = 0;
  if(m>30)
    total+=2000;
  else if(m==0)
    total += 0;
  else
    total += 1000;
  total += a*2*1000;
  if(a>=2&&a<3)
    total = total-(total*0.05);
  else if(a>=3&&a<5)
    total = total-(total*0.1);
  else if(a>=5)
    total = total-(total*0.2);
    
  return total;
}
int main(void) {
  int hour, minute;
  int charge;
  int total_charge = 0;
  while(1){
    printf("사용할 시간을 시간과 분으로 입력");
    scanf("%d %d", &hour, &minute);
    if(hour==0 && minute==0)
      break;
    charge = charge_sub(hour, minute);
    printf("고객님의 이용료는 %d원 입니다.\n", charge);
    total_charge += charge;
  }
  printf("지금까지의 이용료 총금액은 %d원입니다", total_charge);
  return 0;
}
