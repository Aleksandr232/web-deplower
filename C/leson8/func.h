#include <stdio.h>


struct Abstract{
    int width, height;
    
};

void calc(struct Abstract *obj);

int func(){
     system("chcp 65001");
    struct  Abstract square = {5, 7};
    calc(&square);

}


void calc(struct Abstract *obj){
    int res = obj->width * obj->height;
    printf("Результат: %d", res);
}

