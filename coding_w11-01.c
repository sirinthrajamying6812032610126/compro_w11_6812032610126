#include <stdio.h>
void inputAndShow(void); 

// ------------------------------------------------------------------

void inputAndShow(void) {
    int math_score, physics_score, chemistry_score;

    printf("Enter Math: ");
    scanf("%d", &math_score);

    printf("Enter Physics: ");
    scanf("%d", &physics_score);

    printf("Enter Chemistry: ");
    scanf("%d", &chemistry_score);

    printf("\nScores: Math = %d, Physics = %d, Chemistry = %d\n", 
           math_score, physics_score, chemistry_score);
}

// ------------------------------------------------------------------

int main() {
    inputAndShow();
    
    return 0;
}