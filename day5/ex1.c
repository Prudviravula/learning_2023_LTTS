#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box box;
    struct Box* ptr = &box;

    // Input the dimensions of the box
    printf("Enter the length of the box: ");
    scanf("%lf", &(ptr->length));

    printf("Enter the width of the box: ");
    scanf("%lf", &(ptr->width));

    printf("Enter the height of the box: ");
    scanf("%lf", &(ptr->height));

    // Calculate and display the volume and surface area
    printf("\nVolume of the box: %.2lf\n", calculateVolume(ptr));
    printf("Total Surface Area of the box: %.2lf\n", calculateSurfaceArea(ptr));

    return 0;
}
