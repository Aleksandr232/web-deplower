#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]){

    char text[50];
   

    //записывать

    /* ofstream file("text.txt"); 
    file << "wfwef";
    file.close(); */

    // считывает данные с файла 


  /*   ifstream file("text.txt");
    if (!file.is_open())
        cout << "Ошибка файл не найден" << endl;
    else{
        file >> text;
        cout << text << endl;

        file.getline(text, 50);
        cout << text << endl;
        file.close();
    }    */ 

   /*  ofstream textFile("text2.txt"); 
    textFile << "rowing";
    textFile.close(); */

   /*  ifstream file("text2.txt");
    if (!file.is_open())
        cout << "Ошибка файл не найден" << endl;
    else{
        file >> text;
        cout << text << endl;

        file.getline(text, 50);
        cout << text << endl;
        file.close();
    }  */

    ofstream textFile("text3.txt", ios_base::app); 
    if(textFile.is_open()){
        textFile << "rowing";
        textFile.close();
    }else{
        cout << "Ошибка" << endl;
    }

    return 0;
}