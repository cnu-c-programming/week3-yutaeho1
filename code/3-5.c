#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...) {
    va_list args;
    va_start(args, count);

    switch(type){
        case 'S':
            for(int i=0; i<count; i++){
                if(i == count-1){
                    printf("%s", va_arg(args, char*));
                }
                else {
                    printf("%s ", va_arg(args, char*));
                }
            }
            printf("\n");
            break;
        case 'C':
            for(int i=0; i<count; i++){
                printf("%c", va_arg(args, char*));
            }
            printf("\n");
            break;
        case 'D':
            int sum = 0;
            for(int i=0; i<count; i++){
                sum += va_arg(args, int);
            }
            printf("%d\n", sum);
            break;
    }
    
    va_end(args);
} 

int main() {
    
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
