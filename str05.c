#include <stdio.h>
int main()
{
char str1[] = "bangla", str2[] = "desh", str3[12];
int i, j,k, length1 = 6, length2 = 4;
for(i = 0, j = 0; i < length1; i++, j++) {
str3[j] = str1[i];
}
//k=j;
for(i = 0, j =6; i < length2; i++, j++) {
str3[j] = str2[i];
}
str3[j] = '\0';
printf("%s\n", str3);
return 0;
}
