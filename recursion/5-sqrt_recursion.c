#include "main.h"

/**
 * find_sqrt - Köməkçi rekursiv funksiya kvadrat kökü tapmaq üçün
 * @n: Kökü tapılacaq ədəd
 * @guess: Cari təxmini kök dəyəri
 *
 * Return: Natural kvadrat kök və ya -1
 */
int find_sqrt(int n, int guess)
{
    /* Əgər təxminin kvadratı n-dən böyükdürsə, kök tapılmadı */
    if (guess * guess > n)
        return (-1);
    
    /* Əgər təxminin kvadratı n-ə bərabərdirsə, kök tapıldı */
    if (guess * guess == n)
        return (guess);
    
    /* Növbəti təxmini yoxla */
    return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Ədədin natural kvadrat kökünü tapır
 * @n: Kökü tapılacaq ədəd
 *
 * Return: Natural kvadrat kök və ya -1
 */
int _sqrt_recursion(int n)
{
    /* Mənfi ədədlərin natural kökü olmur */
    if (n < 0)
        return (-1);
    
    /* Kök axtarışını 0-dan başlat */
    return (find_sqrt(n, 0));
}
