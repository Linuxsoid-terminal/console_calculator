// Системные библеотеки
#include <stdio.h>
// Самодельные_функции
#include "slogenie.h"
#include "vychitanie.h"
#include "umnogenye.h"
#include "delen.h"

int main () {
    printf("Здравствуй, дорогой пользователь.:)\nЭто простейший консольный калькулятор.\nОн способен выполнять такие математические операции как: сложение, вычитание, умножение и деление.\nВ будущем эта программа будет обновляться и развиваться.\nЧто ж, приступим :)\n");

    double ch_1, ch_2;
    char deistvie;

    printf("Пожалуйста, введите первое число:\n");
    scanf("%lf", &ch_1);
    printf("Отлично, теперь первое число равно:%lf \n", ch_1);

    printf("Пожалуйста, введите второе число:");
    scanf("%lf", &ch_2);
    printf("Отлично, теперь второе число равно:%lf \n", ch_2);

    printf("Какое математическое действие вы хотите совершить?\n");
    scanf(" %c", &deistvie);

    switch (deistvie) {
        case '+': {
            slozgenie(ch_1, ch_2);
            break; }

        case '-':{
            vychitanie(ch_1,ch_2);
            break;}

        case '*':{
            umnogenye(ch_1,ch_2);
            break;}
        case ':':{
            delen(ch_1,ch_2 );
            break;}
        case '/':{
            delen(ch_1,ch_2);
            break;}
        case '\\' : {
            delen(ch_1,ch_2);
            break;}
        default:{
            printf("Извините, но программа не поддерживает такое математическое действие, как:\n %c \n", deistvie);
            printf("Пожалуйста, перезапустите программу");
            break;
        }
    }
    return 0;
}
