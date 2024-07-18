#include<stdio.h>
#define max_len 100
int main(){
    char ch;
    char s[max_len];
    char sentense[max_len];
    scanf("%c",&ch);
    printf("%c\n",ch);
    getchar();
    scanf("%s",s);
    printf("%s\n",s);
    getchar();
    scanf("%[^\n]%*c",sentense);   
    printf("%s",sentense);
    return 0;
}
