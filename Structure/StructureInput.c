#include <stdio.h>
#include <string.h>
struct person{
    char name[50];
    int age;
    float salary;
};
int main() {
    struct person person1, person2;
    printf("Enter person name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    person1.name[strcspn(person1.name, "\n")] = '\0';
    printf("Enter person age: ");
    scanf("%d", &person1.age);
    printf("Enter person salary: ");
    scanf("%f", &person1.salary);
    printf("\nPerson 1:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);
    return 0;
}