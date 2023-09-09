#include <stdio.h>
#include <stdbool.h>



int main(){
    system("chcp 65001");
    
    //while это когда одно условие 
    //for много условий 
    // break это выход из цикла 
    // continue это пропускает итерацию 


    // циклы for 
    /* for(float x = 100; x > 10; x /=2){
        printf("%.2f", x);
    } */

    // цикл while
    
    /*  bool isHasCar = true;
    
    int x = 0;
    while(isHasCar){
        printf("Введите цифру:");
        scanf("%d", &x);
        if(x == 1){
            isHasCar = false;
        }else if(x == 6){
            isHasCar = false;
        }

    } */

    /* float i = 1000;
    while (i>10){
        printf("%.f", i);
        i /= 20;

    } */

    // цикл которые запускает код, и потом проверяет условие 

    /* bool isHasCar = false;

    do{
        printf("tes");
    }while(isHasCar); */


    /* for(int x = 0; x<10; x++){
        if(x == 3)
            break;
        if(x % 2 == 0)
            continue;
        
        printf("%d", x);    
    } */


    int arr[]={6, 9,  1, 5, 8};

    /* int i = 0;
    while (i<6){
        printf("%d\n", arr[i]);
        i++;
    } */
    for(int i=0; i<5; i++)
        printf("%d\n", arr[i]);
    printf("\n");    
    int min = arr[0];    
    int max = arr[0];
    int eql = arr[0];
    for(int i = 0; i<5; i++){
        if(arr[i] < min)
            min = arr[i];
        else if(arr[i] > max)
            max = arr[i];         
    }   

    printf("минимум: %d\n", min);
    printf("max: %d\n", max);
    

    return 0;

}



