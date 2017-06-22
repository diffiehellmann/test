#include <stdio.h>

int main(int argc, char **argv) {
    
    int i = 2;
    int k;
    int j[10] = {3, 4, 5, 6, 7};
//    char s[100] = "abcd";
    printf("%d\n", i);
    printf("adress of %d is %p\n", i, &i);
        for( k = 0; k < sizeof(j); k++) {
            printf("j[%d] = %p\n", k, j[k]);
        }
        printf("\n");
    printf("r[%d] = %d\n", 2, j[2]);
    int size = sizeof(j);
    printf("%d\n", size);
return 0;
}
