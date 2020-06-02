#include <stdio.h>
#include <string.h>

int main(){
    char t[6];

    strcpy(t,"abcde");

    printf("%p %c",t,*t);
    printf("\n%p %c",t+1,*(t+1));
    printf("\n%p %c",t+2,*(t+2));
    printf("\n%p %c",t+3,*(t+3));
    printf("\n%p %c \n",t+4,*(t+4));

}