#include <stdbool.h>

int main(){
    /* int x = 10, y = 10;

    if(x == 2 && y == 50 || (y == 10) ){
        printf("true");
    } else if(x >= 100){
        printf("OK");
    }else{
        printf("false");
    } */

    /* bool isHasCar = true;
    if (!isHasCar){
        printf("YES");
    }else{
        printf("NO");
    } */
    

    // switch нужен для точного ответа 

    // break окончания функции 

    int x = 16;

    switch (x){
        case 10:
            printf("10");
            break;
        case 12:
            printf("12");
            break;
        case 14:
            printf("14");
            break;      
        case 15:
            printf("15");
            break;  
        default:
            printf("no");
            break;      
    }

    return 0;

    
}