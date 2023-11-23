#include <stdio.h>
#include <string.h>

char* maskify(char* masked , const char* string);

int main(){

char* masked;

const char* string;

printf("Enter a password: ");

scanf("%s" , &string);

char* password = maskify(&masked , &string);

printf("Your password is %s" , *password);

return 0;
}


char* maskify(char* masked , const char* string){

int len = strlen(string);

char* modified = string;

for(int i = 0; i < len ; ++i){

    modified[i] = '#';
    
}
    modified[len - 4] = string[len - 4];
    modified[len - 3] = string[len - 3];
    modified[len - 2] = string[len - 2];
    modified[len - 1] = string[len - 1];

    for(int i = 0; i < len ; ++i){

    masked[i] = modified[i];

    }



    return masked;
}