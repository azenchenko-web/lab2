#include <stdio.h>
#include <math.h>
#include <string.h>

#define NAME_NUMBER 14

int group_number = 80;
int variant_number = 12;

void check_sqrt(int group, const char *name) {
    double root = sqrt(group);
    double len = (double)strlen(name);

    if (root > len) {
        printf("Результат: %.2fs\n", root + len);
    } else if (root < len) {
        printf("Результат: %.2fn\n", root * len);
    } else {
        printf("Значення рівні: %.2f і %.2f\n", root, len);
    }
}

int main(void) {
    if (variant_number % 2 == 0) {
        printf("Мій номер за журналом %d. Його Sin = %f\n",
               variant_number, sin(variant_number));
    } else {
        printf("Мій номер за журналом %d. Його Cos = %f\n",
               variant_number, cos(variant_number));
    }

    char name[] = "Andrii";
    printf("Група: %d, Варіант: %d, Ім'я: %s\n",
           group_number, variant_number, name);

    double product = variant_number * 3.14;
    int converted = (int)product;
    printf("Добуток = %.2f, Конвертований = %d\n", product, converted);

    int sum = 0;
    for (int i = variant_number + NAME_NUMBER; i >= 1; i--) {
        sum += i;
    }
    printf("Кількість літер у повному імені (name_number): %d\n", NAME_NUMBER);
    printf("Номер за журналом: %d\n", variant_number);
    printf("Сума усіх чисел від 1 до суми %d: %d\n",
           variant_number + NAME_NUMBER, sum);

    check_sqrt(group_number, name);

    int group;
    printf("Введіть номер групи: ");
    scanf("%d", &group);

    switch (group) {
        case 92: case 93: case 94: case 95:
        case 96: case 97: case 98: case 99:
            printf("Група %d навчається на I курсі\n", group);
            break;
        case 87: case 88: case 89: case 90: case 91:
            printf("Група %d навчається на II курсі\n", group);
            break;
        case 81: case 82: case 83: case 84: case 85: case 86:
            printf("Група %d навчається на III курсі\n", group);
            break;
        case 75: case 76: case 77: case 78: case 79: case 80:
            printf("Група %d навчається на IV курсі\n", group);
            break;
        default:
            printf("Такої групи немає\n");
            break;
    }

    return 0;
}