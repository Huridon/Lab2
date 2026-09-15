#include <stdio.h>
#include <locale.h>

int main()

{

	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки
	numbers();
	time();
	delenie();
	return 0;
}

int numbers()
{
	printf("%1d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4); // подзадание 1
	printf("%1.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 / 5);
	printf("Умножение %d на %d равен %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
	return 0;
}


int time()
{
	int N = 3, k = 33;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, k);
	printf("Идет %d минута суток\n", N * 60 + k);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - k);
	printf("С 8.00 прошло %d секунд\n", ((N - 8) * 60 + k) * 60);
	printf("Текущий час  = %f суток  и текущая минута =  %f часа\n", N / 24., k / 60.);
	return 0;
}

int delenie()
{
	int k = 3, m = 7;
	float L=133, n=2;
	printf("Дано:\n\t%.0f\n\t%.0f\n\t________\nОтвет:\n\t%*.*f\n", n, L, k, m, n/L);
	return 0;
}