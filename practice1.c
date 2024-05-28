#include<stdio.h>

int main(){
    char str[200];
    char str2[200];
    char str3[300];

    printf("Enter your name: \n");
    fgets(str, sizeof(str), stdin);

    printf("Enter your Date of Birth: \n");
    fgets(str2, sizeof(str2), stdin);

    printf("Enter your phone number: \n");
    fgets(str3, sizeof(str3), stdin);

    printf("Hello %s", str);
    printf("Your date of birth is: %s", str2);
    printf("Mobile: %s", str3);

    return 0;
}