// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdio.h"
#include "conio.h"
#define N 100

struct item {
    char code[N];
    char name[N];
    double price;
    int amount;
};

struct store {
    char name[N];
    char adress[N];
    int numberOfItems;
    struct item item[N];
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
        scanf("%s", store1->item[store1->numberOfItems].name);
        printf("Введите код товара\n");
        scanf("%s", store1->item[store1->numberOfItems].code);
        printf("Введите цену\n");
        scanf("%lf", &store1->item[store1->numberOfItems].price);
        printf("Введите колличество товара\n");
        scanf("%d", &store1->item[store1->numberOfItems].amount);
        store1->numberOfItems++;
        printf("Добавить еще один товар?(1-да,0-нет)\n");
        f = getche();
    }
}

void init(struct store* store1, char name[], char adress[], int numberOfItems, char itemName[][N], char itemCode[][N], double itemPrice[], int itemAmount[]) {
    int i;
    strcpy(store1->name, name);
    strcpy(store1->adress, adress);
    store1->numberOfItems = numberOfItems;
    for (i = 0; i < numberOfItems; i++) {
        strcpy(store1->item[i].name, itemName[i]);
        strcpy(store1->item[i].code, itemCode[i]);
        store1->item[i].price = itemPrice[i];
        store1->item[i].amount = itemAmount[i];
    }
}

void display(struct store* store1) {
    int i;
    printf("Название магазина: %s\n", store1->name);
    printf("Адрес: %s\n", store1->adress);
    printf("Колличество уникальных товаров: %d\n", store1->numberOfItems);
    for (i = 1; i <= store1->numberOfItems; i++) {
        printf("\nТовар %d\n", i);
        printf("Код товара: %s\n", store1->item[i].code);
        printf("Название товара: %s\n", store1->item[i].name);
        printf("Цена: %lf\n", store1->item[i].price);
        printf("Колличество: %d\n", store1->item[i].amount);
    }
}

void add(struct store* store1) {
    printf("Введите название нового товара\n");
    scanf("%s", store1->item[store1->numberOfItems + 1].name);
    printf("Введите код нового товара\n");
    scanf("%s", store1->item[store1->numberOfItems + 1].code);
    printf("Введите цену нового товара\n");
    scanf("%lf", &store1->item[store1->numberOfItems + 1].price);
    printf("Введите колличество нового товара\n");
    scanf("%d", &store1->item[store1->numberOfItems + 1].amount);
    store1->numberOfItems++;
}

int main()
{
    
}

