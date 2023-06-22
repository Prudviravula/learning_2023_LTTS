#include <stdio.h>

char calculateGrade(int score) {
    char grade;
    
    switch (score) {
        case 90 ... 100:
            grade = 'A';
            break;
        case 75 ... 89:
            grade = 'B';
            break;
        case 60 ... 74:
            grade = 'C';
            break;
        case 50 ... 59:
            grade = 'D';
            break;
        case 36 ... 49:
            grade = 'E';
            break;
        case 0 ... 35:
            grade = 'F';
            break;
        default:
            grade = 'X';
    }
    
    return grade;
}

int main() {
    int score;
    char grade;
    
    printf("Enter the score to get the grade: ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100) {
        grade = calculateGrade(score);
        printf("Grade: %c\n", grade);
    } else {
        printf("Invalid score.\n");
    }
    
    return 0;
}
