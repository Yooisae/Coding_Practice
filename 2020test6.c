#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_score{
	char name[10]; // 이름 
	int jumsu[3];  // 점수 (C, Java, Python)
	int sum;  // 총점
	float avg;  //  평균 
};

int main(void) {
	struct st_score * score[20];
	int count = 0;
	int top = 0;
	char* topname;
	FILE* fp;
	fp = fopen("data.txt", "rt");
	while(!feof(fp)){
	  struct st_score *temp = malloc(sizeof(struct st_score));
	  fscanf(fp, "%s %d %d %d", temp->name, &temp->jumsu[0], &temp->jumsu[1], &temp->jumsu[2]);
	  temp->sum = temp->jumsu[0] + temp->jumsu[1] + temp->jumsu[2];
	  temp->avg = (float)temp->sum/3.0;
	  if(temp->avg > top){
	    top = temp->avg;
	    topname = temp->name;
	  }
	  count++;
	}
	
	printf("%d records read\n", --count);
  printf("TOP : %s, %d", topname, top);
  fclose(fp);
  return 0;
}


