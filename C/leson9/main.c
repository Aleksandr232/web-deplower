#include <stdio.h>

// read - читать файл
// write - запись файла 
// apend - для добовления без редактирования 
// fgets - функция позволяет в определеный [] вписать определенное символов, которые будут считаны с определенного файла 

int main(){
    char line[255];
    FILE * file = fopen("test.txt", "r");

    
    // для вывода всех символов 

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    } 

    fprintf(file, "\nhi");

    fclose(file);


    return 0;
}