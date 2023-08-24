
#include <stdio.h>
#include <string.h>

int main()
{
    unsigned int a = 1;
    char ha[999]="!";
    char haha[999] = "!";
    unsigned int i1 = 1;
    while (a > 0) {
        while (i1 < (a / 3000)) {
            strcat(haha, ha);
            i1 = i1 + 1;
        }
        printf("%d:CYD%s\n", a, haha);
        printf("%d:SZG%s\n", a, haha);
        printf("%d:ZGNMTL%s\n", a, haha);
        a = a + 1;
    }
    
}

