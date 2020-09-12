// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define N 100

struct item {
    char code[N];
    char name[N];
    double price;
    int amount;
};

void read(struct item* item1) {
    char s[N];
    double d;
    int i;
    printf("Введите код товара\n");
    scanf("%s", &s);
    strcpy(item1->code, s);
    printf("Введите название товара\n");
    scanf("%s", &s);
    strcpy(item1->name, s);
    printf("Введите цену\n");
    scanf("%lf", &d);
    item1->price = d;
    printf("Введите колличество товара\n");
    scanf("%d", &i);
    item1->amount = i;
}

int main()
{
    
}

