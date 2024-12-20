#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int random, guess;
    int no_of_guesses = 0;

    srand(time(NULL)); 
    random = rand() % 100 + 1; 

    printf("Добро пожаловать! Это игра 'Угадай число от 1 до 100'.\n");

    do {
        printf("Введите число от 1 до 100: ");
        scanf("%d", &guess);
        no_of_guesses++;

        if (guess < random) {
            printf("Ваше число меньше загаданного.\n");
        } else if (guess > random) {
            printf("Ваше число больше загаданного.\n");
        } else {
            printf("Поздравляем! Вы угадали число с %d попытки.\n", no_of_guesses);
        }

    } while (guess != random);

    printf("Победа!\n");
    return 0;
}
