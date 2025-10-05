#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

main() {

	setlocale(LC_ALL, "RU");

	int A, B, condition;
	printf("Данные полученные от датчиков traffic flow: ");
	scanf("%d %d", &A, &B);
	condition = ((A % 2 == 1) && (B % 2 != 1)) || ((A % 2 != 1) && (B % 2 == 1));
	printf("Поворот налево? (1 - да, 0 - нет): %d", condition);

}