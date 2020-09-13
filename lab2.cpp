// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdio.h"
#include "conio.h"
#define N 100

struct store {
    char name[N];
    char adress[N];
    int numberOfItems;
    struct item {
        char code[N];
        char name[N];
        double price;
        int amount;
    }item;
};


void read(struct store* store1) {
    char f;
    printf("Введите название магазина\n");
    scanf("%s", store1->name);
    printf("Введите адрес магазина\n");
    scanf("%s", store1->adress);
    store1->numberOfItems = 0;
    printf("Добавить товар?(1-да,0-нет)\n");
    f = getche();
    while (f == '1') {
        printf("Введите название товара\n");
        scanf("%s", store1->item.name);
        printf("Введите код товара\n");
        scanf("%s", store1->item.code);
        printf("Введите цену\n");
        scanf("%lf", &store1->item.price);
        printf("Введите колличество товара\n");
        scanf("%d", &store1->item.amount);
        printf("Добавить еще один товар?(1-да,0-нет)\n");
        f = getche();
    }
}

int main()
{
    
}

