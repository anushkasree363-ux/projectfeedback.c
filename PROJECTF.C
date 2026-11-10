#include<stdio.h>
int main()
{
char ch;
FILE *fp;
fp=fopen("data.txt","w");
fprintf(fp,"For me,Its first time learning c.\nSo learning c is little bit hard and i will definitely improve.");
fclose(fp);
fp=fopen("data.txt","a");
fprintf(fp,"In my opinion, sir takes the lesson good and teach all the topics with real life examples.");
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}

