#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int ary1[10], ary2[10];
    int count = 0;
    int * point;
    srand(0);
    
    for (count; count < 10; count++) {
        ary1[count] = rand();
        if (count == 9) {
            ary1[count] = 0;
        }
        printf("%d      %d\n", count, ary1[count]);
    }
    
    count = 9;
    for (count; count > -1; count--) {
        point = &ary1[count];
        ary2[9 - count] = *point;
        printf("%d      %d\n", 9 - count, ary2[9 - count]);
    }
    
}



