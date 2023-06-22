#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll_number;
    char student_name[20];
    float marks;
};

typedef struct Student Student;

void parseInputString(const char* input, Student students[], int* num_students) {
    char* token;
    char copy_input[100];

    strcpy(copy_input, input);

    token = strtok(copy_input, " ");

    students[*num_students].roll_number = atoi(token);

    token = strtok(NULL, " ");
    strncpy(students[*num_students].student_name, token, sizeof(students[*num_students].student_name) - 1);
    students[*num_students].student_name[sizeof(students[*num_students].student_name) - 1] = '\0';

    token = strtok(NULL, " ");
    students[*num_students].marks = atof(token);

    (*num_students)++;
}

void initializeStudents(Student students[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        students[i].roll_number = 0;
        strcpy(students[i].student_name, "");
        students[i].marks = 0.0;
    }
}

void displayStudents(const Student students[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].student_name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}


int main() {
    Student* students;
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    while (getchar() != '\n');

    students = (Student*)malloc(num_students * sizeof(Student));

    initializeStudents(students, num_students);

    for (int i = 0; i < num_students; i++) {
        char input[100];

        printf("Enter student information (Format: roll_number student_name marks): ");
        fgets(input, sizeof(input), stdin);

        if (input[strlen(input) - 1] == '\n')
            input[strlen(input) - 1] = '\0';

        parseInputString(input, students, &i);
    }

    displayStudents(students, num_students);

    free(students);

    return 0;
}
