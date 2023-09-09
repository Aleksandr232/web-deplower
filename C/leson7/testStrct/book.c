#include <stdio.h>
#include <string.h>
#include "books.h"

int main(){
    struct Books longd;
    strcpy(longd.name, "London");
    longd.page = 100;
    strcpy(longd.genre, "city");
    
    struct Books zara;
    strcpy(zara.name, "Zara");
    zara.page = 320;
    strcpy(zara.genre, "fantasy");
    
    printf("%s - страниц: %d, жанр: %s\n", longd.name, longd.page, longd.genre);
    printf("%s - страниц: %d, жанр: %s\n", zara.name, zara.page, zara.genre);
    
    return 0;    
}

