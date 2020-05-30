#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strlink(char* s1, char* s2);

// s1, s2 : 2개의 단어
// 리턴 : 사전순으로 연결한 문자열 (중간에 빈칸 넣기)

int main(void) {
    char str1[80], str2[80], * str3;
    printf("Enter 1st word >>");
    scanf("%s", str1);
    printf("Enter 2nd word >>");
    scanf("%s", str2);
    str3 = strlink(str1, str2);
    printf("Linked word : %s\n", str3);
    return 0;
}


char* strlink(char* s1, char* s2) {
    char* newword;

    int i, num = 0;
    if (s1[i] == s2[i])
    {
        while (s1[i] == s2[i])
        {
            if (s1[i] == s2[i] )
                i++;
            else
                num = s1[i] - s2[i];
        }
    }
    else
        num = s1[i] - s2[i];
    if (num > 0){

        newword = strcat(s1, " ");
        newword = strcat(newword,s2);
        newword = strcat(newword,NULL);
    }
    else
        newword = strcat(s2, s1);






    return newword;
}
