#include <stdio.h>

int main(void) {
  
  int birth_year, birth_mon, birth_day;
  int spe_num, spe_year = 0;
  int i, j=0;
  
  printf("Enter your birthdate >> \n");
  scanf("%d %d %d",&birth_year, &birth_mon, &birth_day);
  for(i=0 ; i<4 ; i++)
  {
    j = birth_year%10;
    spe_year += j;
    birth_year = birth_year/10;
  }
  spe_num = spe_year+birth_mon+birth_day;
  printf("Your birthdate number is %d.",spe_num);
  return 0;
}
