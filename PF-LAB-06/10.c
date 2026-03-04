#include <stdio.h>

int main() {
    int rating;
    int excellent = 0, satisfactory = 0, improvement = 0;

    printf("Enter rating (-1 to stop): ");
    scanf("%d", &rating);

    while(rating != -1) {

        if(rating >= 85)
            excellent++;
        else if(rating >= 60)
            satisfactory++;
        else
            improvement++;

        printf("Enter rating (-1 to stop): ");
        scanf("%d", &rating);
    }

    printf("Excellent: %d\n", excellent);
    printf("Satisfactory: %d\n", satisfactory);
    printf("Needs Improvement: %d\n", improvement);

    return 0;
}