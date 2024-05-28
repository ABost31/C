#include<stdio.h>
#include<string.h>

int main(){
    char str[200] = "XML";
    char res[200];
    int len = strlen(str);

    for(int i = 0; i < len; i++){
        res[i] = str[len-1 -i];
    }
    printf("The reverse of XML is %s",res);

    return 0;
}