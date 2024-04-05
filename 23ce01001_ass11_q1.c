#include<stdio.h>
#include<string.h>

#define Max_size 100

char stack[Max_size];
int top=-1;

void push(char data){
    if (top==Max_size -1)
    {
        printf("Overflow stack\n");
        return;
    }
    top++;
    stack[top]=data;
}

char pop(){
    if (top==-1)
    {
        printf("Stack Empty\n");
    }
    char data=stack[top];
    top--;
    return data;
}

void reverse(char* str){
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        push(str[i]);
    }
    for (int i = 0; i < len; i++)
    {
        str[i]=pop();
    }
    
}

int main(){
    char txt[Max_size];
    printf("Enter a string: ");
    gets(txt);
    txt[strcspn(txt,"\n")]='\0';
    reverse(txt);

    printf("Reversed string: %s",txt);

    return 0;
}