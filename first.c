#include<stdio.h>
#include<ctype.h>
int main()
{
 int i,n,j,k;
 char str[10][10],f;
 printf("enter the number of productions\n");
 scanf("%d",&n);
 printf("enter grammar\n");
 for(i=0;i<n;i++)
 scanf("%s",&str[i]);
 for(i=0;i<n;i++)
 {
 f=str[i][0];
 int temp=i;
 if(isupper(str[i][3]))
 {
repeat:
 for(k=0;k<n;k++)
 {
 if(str[k][0]==str[i][3])
 {
 if(isupper(str[k][3]))
 {
 i=k;
 goto repeat;
 }
 else
 {
 printf("First(%c)=%c\n",f,str[k][3]);
 }
 }
 }
 }
 else
 {
 printf("First(%c)=%c\n",f,str[i][3]);
 }
 i=temp;
 }
}



//second question code
1. Divide the following C++ program:
floatlimitedSquare(x){float x;
  /* returns x-squared, nut never more than 100 */
return (x <= -10.0 || x >= 10.0) ? 100 : x*x;
}
into appropriate lexemes, using the discussion of Section 3.1.2 as a guide. Which lexemes should get associated lexical values? What should those values be?Answer
<float><id, limitedSquaare><(><id, x><)><{>
<float><id, x>
<return><(><id, x><op,"<="><num, -10.0><op, "||"><id, x><op, ">="><num, 10.0><)><op, "?"><num, 100><op, ":"><id, x><op, "*"><id, x>
<}>
