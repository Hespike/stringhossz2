#include <stdio.h>

unsigned int strlen2(char str[]){
    int i;
    for(i = 0; str[i] != '\0'; i++);

    return i;
}

int main(){
char string[] = "Hello World";

unsigned len = strlen2(string);
printf("hossz = %u\n", len);

    return 0;
}