#include <iostream>
#include <cstring>

using namespace std;

struct Date{
    int year;
};

struct Tree{
    int height;
    int width;
    char color;

    Date landing;
};

int main(int argc, const char * argv[]){
    system("chcp 65001");

    Tree osina = {1200, 600, 'g', {1998}};
    Tree dub = {1300, 400, 'd', {2000}};
    Tree klen = {1100, 200, 'k', {4000}};

    char input[500];

    cout << "Введите название дерева: ";
    cin >> input;
    
    if(strcmp(input, "osina") == 0){
        cout << "Высота дерева = " << osina.height << "\n" << "Ширина дерева = " << osina.width << "\n" << "Цвет дерева = " << osina.color << "\n" << "Год посадки = " << osina.landing.year << endl;
    }else if(strcmp(input, "dub") == 0){
        cout << "Высота дерева = " << dub.height << "\n" << "Ширина дерева = " << dub.width << "\n" << "Цвет дерева = " << dub.color << "\n" << "Год посадки = " << dub.landing.year << endl;
    }else if(strcmp(input, "klen") == 0){
         cout << "Высота дерева = " << klen.height << "\n" << "Ширина дерева = " << klen.width << "\n" << "Цвет дерева = " << klen.color << "\n" << "Год посадки = " << klen.landing.year << endl;
    }
    else{
        cout << "Такое дерево не найдено.";
    }
  
    return 0;
}

