#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int table[2][2],i,j,l,status=0;
    char input[100];

    printf("Program for implement RE of language(a+aa*b)*\n\n\nEnter input string: \n");

    table[0][0]=1;
    table[0][1]=-1;
    table[1][0]=1;
    table[1][1]=0;

    scanf("%s",input);
    l=strlen(input);

    for(i=0;i<l;i++)
    {
        if(input[i] != 'a' && input[i] != 'b')
        {
            printf("Value is entared wrong.");
            exit(0);
        }
        if(input[i] == 'a')
            status=table[status][0];
        else
            status=table[status][1];
        if(status==-1)
        {
            printf("Not accepted");
            break;
        }
    }
    if(i==1)
        printf("accepted");

    return 0;
}
