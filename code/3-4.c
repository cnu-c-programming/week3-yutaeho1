#include <stdio.h>
#include <stdarg.h>

int max_of(int count, ...) {
    va_list args;
    va_start(args, count);

    int fight = va_arg(args, int);
    for (int i = 1; i < count; i++) {
        int value = va_arg(args, int);
        if(fight < value){
            fight = value;
        }
    }

    va_end(args);

    return fight;
} 

int main() {
    
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));

    return 0;
}
