#include<stdio.h>
#include<stdlib.h>

static char stack[10000];
static int stackSize;

char* removeDuplicates(char* s){
    stackSize=0;
    stack[stackSize++] = s[0];
    while (*(++s)!='\0')
    {
        if (stackSize==0 || stack[stackSize-1]!=*s)
        {
            stack[stackSize++]=*s;
        }
        else{
            stackSize--;
        }
    }
    char* resStr = malloc(sizeof(char)*(stackSize+1));
    for (int i = 0; i < stackSize; i++)
    {
        resStr[i]=stack[i];
    }
    resStr[stackSize]='\0';

    return resStr;

}

int main(){
    char str[10000];
    printf("Enter string: ");
    gets(str);

    char* result = removeDuplicates(str);
    printf("String after removing consecutive duplicates: %s\n", result);
    return 0;
}
