#include <iostream>
#include <clocale>


using namespace std;

// "\0" - это дополнительный символ

int main(int argc, const char * argv[]){
    system("chcp 65001");
    
    char string[500];
    cout << "Введите строку: ";
    gets(string);
    cout << string << endl;

return 0;

}