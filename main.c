#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand(time(NULL));

    int random_number = (rand() % 100) + 1;
    int number;
    int tries = 1;

    printf("Men 1dan 100gacha bo'lgan son o'yladim.\n");
    printf("uni topishga harakat qiling >>> ");

    bool found = true;
    while (found) {
        scanf("%d", &number);
        
        if (number == random_number)
        {
            printf("Topdingiz. Men o'ylagan son %d edi\n", number);
            printf("Urinishlar soni: %d\n", tries);
            found = false;
        } else if (number > random_number)
        {
            printf("Yo'q, men o'ylagan son %ddan kichikroq\n", number);
            printf("Yana harakat qiling >>> ");

        } else if (number < random_number)
        {
            printf("Yo'q, men o'ylagan son %ddan kattaroq\n", number);
            printf("Yana harakat qiling >>> ");
        }

        tries++;
    }

    return 0;
}
