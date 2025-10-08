#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <math.h> 
#define NUM_STUDENTS 3
#define NUM_SUBJECTS 3

const char *subjectNames[NUM_SUBJECTS] = {"Math", "Physics", "Chemistry"};

void inputScores(float arr[NUM_STUDENTS][NUM_SUBJECTS]);

void printTable(float arr[NUM_STUDENTS][NUM_SUBJECTS]);

void printAverage(float arr[NUM_STUDENTS][NUM_SUBJECTS]);

int main() {
    float studentScores[NUM_STUDENTS][NUM_SUBJECTS];

    inputScores(studentScores);

    printTable(studentScores);

    printAverage(studentScores);

    return 0;
}
void inputScores(float arr[NUM_STUDENTS][NUM_SUBJECTS]) {
    printf("--- Enter scores ---\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%s: ", subjectNames[j]);
            if (scanf("%f", &arr[i][j]) != 1) {
                printf("Invalid input. Please enter a number.\n");
                while(getchar() != '\n');
                j--; 
            }
        }
        printf("\n");
    }
}
void printTable(float arr[NUM_STUDENTS][NUM_SUBJECTS]) {
    printf("Score Table:\n");
    printf("Student | %-8s | %-8s | %-8s\n", subjectNames[0], subjectNames[1], subjectNames[2]);
    printf("--------|----------|----------|----------\n");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-7d | ", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%-8.2f | ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printAverage(float arr[NUM_STUDENTS][NUM_SUBJECTS]) {
    printf("Average per subject:\n");

    for (int j = 0; j < NUM_SUBJECTS; j++) {
        float sum = 0.0f;
        for (int i = 0; i < NUM_STUDENTS; i++) {
            sum += arr[i][j];
        }
        float average = sum / NUM_STUDENTS;
        printf("%s: %.2f\n", subjectNames[j], average);
    }
}
