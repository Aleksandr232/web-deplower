#include <iostream>

using namespace std;

struct Date{
    int year;

};

struct Auto {
    int wheels;
    float speed;
    char color;

    Date sozdanie;
};

int main(int argc, const char * argv[]){
    system("chcp 65001");

    Auto shkoda;
    shkoda.wheels =10;
    shkoda.speed =10.700;
    shkoda.color ='red';
    shkoda.sozdanie.year = 1999;

    Auto audi;
    audi.wheels =4;
    audi.speed = 10.10;
    audi.color = 'black';

    cout << "Audi speed="  << audi.speed << "\n" << "Shkoda sozdanie=" << shkoda.sozdanie.year << endl;

    return 0;

}
