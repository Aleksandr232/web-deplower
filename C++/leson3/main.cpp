#include <iostream>

using namespace std;

enum mall {parking = -1, hall, many_shops, roof};

int main(int argc, const char * argv[]){
    system("chcp 65001");

    bool exit;
    int floor;

    while(!exit)
    {
        cout << "Введите этаж от -1 до 2:";
        cin >> floor;
        switch (floor)
        {
        case parking:
                cout << " -1 Мы на  парковки" << endl;
                break;
        case hall:
                cout << " 0 Мы в холле" << endl;
                break;
        case many_shops:
                cout << " 1 Мы на этаже с магазинами" << endl;
                break;
        case roof:
                cout << " 2 Мы на крыше" << endl;           
                break;
        default:
                cout << "Ошибка " << endl;
                break;
        }
        cout << "если 0 то продолжим, а если 1 то закроем" << endl;
        cin >> exit;

    }
    

    /* cout << parking << endl; */

    return 0;
}