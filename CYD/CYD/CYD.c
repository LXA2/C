
#include <stdio.h>
#include <string.h>

int main()
{
    unsigned int a = 1;//number of lines
    char ha[2]="!";
    char haha[10000] = "!";
    char hahaha[99999] = "";
    char khlnb[10] = "KHLNB!!!";
    char blank[2]="";
    unsigned int i1 = 1;//number of exclamation points
    while (a > 0) {
        
        strcpy(hahaha, blank);
        while (i1 < (a / 1000)) {
            strcat(haha, ha);
            i1++;
        }
        int i2 = 1;
        while (i2 < (a % 100000)/5000) {
            strcat(hahaha, khlnb);
            i2++;
        }
        printf("%sKHLNB%s\n",hahaha, haha);
        //printf("%d:SZG%s\n", a, haha);
        //printf("%d:ZGNMTL%s\n", a, haha);
        a++;
    }
    
}

