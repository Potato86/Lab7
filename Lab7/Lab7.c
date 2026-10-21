#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    zad1();
    zad2();
    zad3();

    return 0;
}

int zad1() {
    setlocale(LC_CTYPE, "ru_RU.UTF-8");
    char c;
    printf("Задание 1\n");

    printf("Введите символ: ");
    scanf("%c", &c);

    if (c >= '0' && c <= '9') {
        printf("Это цифра\n");
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
        (c >= 'а' && c <= 'я') || (c >= 'А' && c <= 'Я')) {
        printf("Это буква\n");
    }
    else {
        printf("Неизвестный символ\n");
    }

    return 0;
}

int zad2() {
    float x, y;
    char c;
    printf("\nЗадание 2\n");
    while (getchar() != '\n');
    printf("Введите выражение (например 2+3): ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c) {
    case '+':
        printf("=%f", x + y);
        break;
    case '-':
        printf("=%f", x - y);
        break;
    case '*':
        printf("=%f", x * y);
        break;
    case '/':
        printf("=%f", x / y);
        break;
    case '^':
        printf("=%f", pow(x, y));
        break;
    default:
        printf("Неизвестная операция");
    }

    return 0;
}

int zad3() {
    int day;

    printf("\nЗадание 3\n");

    printf("Введите номер дня недели (1-7): ");
    scanf("%d", &day);

    switch (day) {
    case 1:
        printf("Понедельник, до воскресенья 6 дней\n");
        break;
    case 2:
        printf("Вторник, до воскресенья 5 дней\n");
        break;
    case 3:
        printf("Среда, до воскресенья 4 дня\n");
        break;
    case 4:
        printf("Четверг, до воскресенья 3 дня\n");
        break;
    case 5:
        printf("Пятница, до воскресенья 2 дня\n");
        break;
    case 6:
        printf("Суббота, до воскресенья 1 день\n");
        break;
    case 7:
        printf("Воскресенье, до воскресенья 0 дней\n");
        break;
    default:
        printf("Неверный номер дня\n");
    }

    return 0;
}