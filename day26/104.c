#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Simple Quiz\n");

    printf("\n1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n3. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n4. 11\n");
    printf("Answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}