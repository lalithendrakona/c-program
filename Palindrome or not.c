#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';  // Null terminate

    // Compare original and reversed
    for(i = 0; i < len; i++) {
        if(str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
