#include <stdio.h>

int main(void) {
  FILE* fp;
  fp = fopen("score.txt", "rt");
  double top = 0;
  double sum = 0;
  double aver;
  int a,b,c;
  int sumsub;
  double aversub;
  int count = 0;;
  while(!feof(fp)){
    fscanf(fp,"%d %d %d",&a,&b,&c);
    sumsub = a+b+c;
    
    count++;
    aversub = (double)sumsub/3.0;
    sum += aversub;
    if(aversub > top)
      top = aversub;
  }
  aver = sum/(double)count;
  printf("average : %0.1f\n", aver);
  printf("top : %0.1f", top);
  fclose(fp);
  return 0;
}
