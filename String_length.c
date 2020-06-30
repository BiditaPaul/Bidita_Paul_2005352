#include <stdio.h>

int main()
{
    char *arr= "Happy";
    int length=0;
    int i=0;
    while(*(arr+i)!='\0')
    {
        length = length + 1;
        i++;
    }
    printf("length of string '%s' is : %d",arr,length);

    return 0;
}
