#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int n;

	scanf("%d", &n);
    scanf("%s", str);

    int i;
    for (i = 0; i < strlen(str); i++)
        str[i] = str[i] + n;

    printf("Password is: %s\n\n", str);

    return 0;
}
