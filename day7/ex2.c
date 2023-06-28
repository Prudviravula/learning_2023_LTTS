#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(const char* sourcePath, const char* destinationPath, int option) {
    FILE *sourceFile, *destinationFile;
    char character;

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        exit(1);
    }

    destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        exit(1);
    }

    while ((character = fgetc(sourceFile)) != EOF) {
        switch (option) {
            case 1:
                fputc(toupper(character), destinationFile);
                break;
            case 2:
                fputc(tolower(character), destinationFile);
                break;
            case 3:
                if (islower(character)) {
                    fputc(toupper(character), destinationFile);
                } else {
                    fputc(character, destinationFile);
                }
                break;
            default:
                fputc(character, destinationFile);
                break;
        }
    }

    fclose(sourceFile);
    fclose(destinationFile);
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        return 1;
    }

    int option = 0;
    if (argc > 3) {
        if (argv[1][0] == '-' && argv[1][1] != '\0') {
            switch (argv[1][1]) {
                case 'u':
                    option = 1;
                    break;
                case 'l':
                    option = 2;
                    break;
                case 's':
                    option = 3;
                    break;
                default:
                    printf("Invalid option.\n");
                    return 1;
            }
        } else {
            printf("Invalid option.\n");
            return 1;
        }
    }

    copyFile(argv[2], argv[3], option);
    printf("File copied successfully.\n");

    return 0;
}
