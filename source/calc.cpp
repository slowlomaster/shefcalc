#include<stdio.h>
#include<iostream>
#include "windows.h"
int main() {
	setlocale(LC_ALL, "RU");
	int rofi, calc, resua;
	printf("Привет 320 кг линукс напиши первое число: ");
	std::cin >> rofi;
	printf("маладец давай еще одно: ");
	std::cin >> calc;
	char fimoz;
	printf("еее маладец давай еще там + - / * пж: ");
	std::cin >> fimoz;
	switch (fimoz) {
	case '+': resua = rofi + calc; break;
	case '-': resua = rofi - calc; break;
	case '/': resua = rofi / calc; break;
	case '*': resua = rofi * calc; break;
	}
	printf("ЕБА МАЛАДЕЦ ОТВЕТ: %d", resua);
	Sleep(2000);
	return 0;
} 