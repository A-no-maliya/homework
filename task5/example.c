#include <stdio.h>  // Библиотека для работы с функциями ввода-вывода
#include <locale.h> // Библиотека для указания локации (региональной кодировки)
#include <math.h >  // Библиотека математических функций
#include <time.h>   // Библиотека для работы с временем

int main()
{
    setlocale(LC_ALL, "Rus");

    time_t start, end;                          // type of time
    int num1, num2, num3, siz = sizeof(int), timelim = 30;      // sizeof return размер типа

    start = time(NULL);

    printf("Размер чисел типа int: %d байт или %d бит\n", siz, 8*siz);
    printf("Они могут представлять (хранить) значения от %d до %d\n", (int)(pow(-2, 8.*siz - 1)), (int)(pow(2,8.*siz-1)-1));

    printf("\nПривет, я Весёлый калькулятор! Давай играть?\n");
    end = time(NULL);
    printf("Введи два числа, которые нужно сложить:");
    scanf_s("%d%d", &num1, &num2);
    num3 = num1 + num2;
    printf("сумма равна: %d + %d = %d\n", num1, num2, num3);
    num1 = num3;
    for ( ; difftime(end, start) < timelim; end = time(NULL)) {
        printf("Есть что добавить?\n");
        scanf_s("%d", &num2);
        num3 = num1 + num2;
        printf("сумма равна: %d + %d = %d\n", num1, num2, num3);
        num1 = num3;
    }
    printf("Ваше время истекло...\n");
    printf("Пока!\n");
    return 0;
}

/*
Упражнение 1.
1.1. Разберите программу.
1.2. Запустите её и попробуёте выйти за пределы допустимых значений.
1.3. Попробуйте ввести вместо числа символ.
1.4. Замените строчку
     scanf_s("%d", &num2);
     на
     if (scanf_s("%d", &num2) < 1) {
        printf("Учитель Йода говорит: 'Только целый числа нужны нам. Ошибку допустил ты...'\n");
        return 0;
     }
     Попробуйте ввести вместо числа символ.
Упражнение 2.
Напишите программу которая совершает с двумя введёнными числами все алгебраические операции: +, -, *, /. 
И выводит резёльтат.
Упражнение 3.
Адаптируйте программу из упражнения 2 для работы с числами с плавоющей точкой. 
Результат выводите в форматном виде %поле.{число знаков после запятой}f. 
Упражнение 4.
Напишите программу выводящую столбец из таблицы умножения для заданного числа (введённого пользователем).
Домашнее задание (базовое):
Задание 1. Среднее значение введённых чисел
Написать программу, запрашивующую у пользователя в бесконечном цикле число и выводящую среднее значение всех введённых ранее чисел.
Вывод в формате: "Среднее значение этих ... чисел равно ...". Среднее значение выводить с точностью до 5 десятичных знаков (т.е. до 1/100000).
Программа перестаёт работать или при вводе символа вместо числа, или при истечении 1 минуты с момента ввода первого числа.
Задание 2. "Число и цифра"
Запросите у пользователя целое число и сложите цифры этого числа. 
Повторяйте последнее действие столоко раз сколько сможете и выводите каждый раз полученную сумму.
Задание 3. "Максимум и минимум"
Запрашивайте у пользователя числа, определяйте максимальное и минимальной из всех полученных чисел и сообщайте их ему.
*/