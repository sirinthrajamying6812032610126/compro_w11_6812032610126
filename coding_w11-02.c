#include <stdio.h>

float average(int a, int b, int c) {
    int sum = a + b + c;
    float avg = (float)sum / 3.0; 
    return avg;
}

int main() {
    int math_score;
    int physics_score;
    int chemistry_score;
    float avg_score;

    printf("Enter Math score: ");
    scanf("%d", &math_score);

    printf("Enter Physics score: ");
    scanf("%d", &physics_score);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry_score);

    avg_score = average(math_score, physics_score, chemistry_score);

    printf("\nMath = %d\n", math_score);
    printf("Physics = %d\n", physics_score);
    printf("Chemistry = %d\n", chemistry_score);
    printf("Average = %.2f\n", avg_score);

    return 0;
}