// C program to read age of 15 person and count total Baby age, School age and Adult age.

#include <stdio.h>

int main() {
    char choice = 'n';
    do {
        printf("Enter number of people: ");
        int n; scanf("%d", &n);
        int kids = 0, students = 0, adults = 0;
        for (int i = 0; i < n; i++) {
            printf("Enter person %d's age: ", i+1);
            int age; scanf("%d", &age);

            if (age < 0) printf("Enter some valid age\n");
            else if (age >= 0 && age < 8) kids++;
            else if (age >= 8 && age < 21) students++;
            else adults++;
        }
        printf("Number of kids: %d\n", kids);
        printf("Number of students: %d\n", students);
        printf("Number of adults: %d\n", adults);
        printf("Do you want to quit? (y/n): ");
        scanf("%s", &choice);
    } while (choice == '\n');
    return 0;
}