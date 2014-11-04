#include<stdio.h>
int main(void)
{ 
    char ch; 
    printf("请输入ASCII值：\n"); scanf("%d",&ch);         //注意这里修改了加了一个& 
    printf("%d对应的字符为 %c\n",ch,ch); 
    return 0;
}