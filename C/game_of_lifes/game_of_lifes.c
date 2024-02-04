#include <stdio.h>
#include <conio.h>

int game_menu();

int main(){
    game_menu();
    return 0;
}

int game_menu(){
    int menu_choice;

    do{
        printf("Меню:\n");
        printf(" 1. Цветы\n");
        printf(" 2. Глейдеры\n");
        printf(" 3. Ружьё\n");
        printf(" 4. Абстракт\n");
        printf(" 5. Много организмов\n");
        printf(" 6. Рандомное расположение организмов\n");

        scanf("%d", &menu_choice); 

        switch(menu_choice){
            case 1:
                printf("Цветы\n");
                break;
            case 2:
                printf("Глейдеры\n");
                break;
            case 3:
                printf("Ружье\n");
                break;
            case 4:
                printf("Абстракт\n");
                break;
            case 5:
                printf("Много организмов\n");
                break;    
            case 6:
                printf("Рандомное расположение организмов\n");
                break;
            default:
                printf("Неправильный выбор. Попробуйте снова.\n");
        }

        if (menu_choice != 6){
            printf("Для выхода нажмите 'Esc'\n");
            while (getch() != 27) { 
            }
            break; 
        }

    } while (1);

    return 0;
}

