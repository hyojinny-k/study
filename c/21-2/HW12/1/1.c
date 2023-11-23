#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int solution(char s[]) {
    int i, j;

    j = strlen(s) - 1;
    for (i = 0; i < strlen(s) / 2; i++) {
        if (s[i] == ' ')
            i++;
        if (s[j] == ' ')
            j--;
        if (s[i] != s[j]) {
            if (isupper(s[i]) && tolower(s[i]) != s[j])
                return 0;
            else if (islower(s[i]) && toupper(s[i]) != s[j])
                return 0;
        }
        j--;
    }
    return 1;
}

int main(void)
{
    char s[50];
    gets(s);

    printf("%d\n", solution(s));
}