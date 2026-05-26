/*************************************************************************
 * Prompts for five quiz grades for each of five students, then computes *
 * tge total score and average score for each student, and the average   *
 * score, high scorem and low score for each quiz.                       *
 *************************************************************************/

#include <stdio.h>

#define N 5

int main(void)
{
    float score[N][N], student_average[N], student_total[N] = {0.0f};
    float quiz_average[N] = {0.0f}, quiz_high[N], quiz_low[N];

    printf("Quizz:                  1 2 3 4 5\n\n");
    
    for (short i = 0; i < N; i++) {
        printf("Enter student %hd grades: ", i + 1);
        for (short j = 0; j < N; j++)
            scanf("%f", &score[i][j]);
    }

    for (short j = 0; j < N; j++) {
        quiz_high[j] = score[0][j];
        quiz_low[j] = score[0][j];
    }

    for (short i = 0; i < N; i++) {
        for (short j = 0; j < N; j++)
            student_total[i] += score[i][j];
        student_average[i] = student_total[i] / N;
    }

    for (short j = 0; j < N; j++) {
        for (short i = 0; i < N; i++) {
            quiz_average[j] += score[i][j];
            
            if (score [i][j] > quiz_high[j])
                quiz_high[j] = score[i][j];
            else if (score [i][j] < quiz_low[j])
                quiz_low[j] = score[i][j];
        }
        quiz_average[j] /= N;
    }

    printf("\n");

    printf("Students totals:");
    for (short i = 0; i < N; i++)
        printf(" %.1f\n", student_total[i]);
    printf("\n");

    printf("Students averages:");
    for (short i = 0; i < N; i++)
        printf(" %.1f", student_average[i]);
    printf("\n");

    printf("Quizz average:");
    for (short j = 0; j < N; j++)
        printf(" %.1f", quiz_average[j]);
    printf("\n");

    printf("Quizz heighest score:");
    for (short j = 0; j < N; j++)
        printf(" %.1f", quiz_high[j]);
    printf("\n");

    printf("Quizz lowest score:");
    for (short j = 0; j < N; j++)
        printf(" %.1f", quiz_low[j]);
    printf("\n");

    return 0;
}