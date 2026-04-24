#include <stdio.h>
#include <string.h>

struct Patient
{
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

void displayAll(struct Patient p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nID: %d\nName: %s\nAge: %d\nBlood: %s\nDiagnosis: %s\n",
               p[i].patientID, p[i].name, p[i].age,
               p[i].bloodType, p[i].diagnosis);
    }
}

void searchByID(struct Patient p[], int n, int id)
{
    for (int i = 0; i < n; i++)
    {
        if (p[i].patientID == id)
        {
            printf("\nFound:\nName: %s\nAge: %d\n", p[i].name, p[i].age);
            return;
        }
    }
    printf("Patient not found\n");
}

int main()
{
    struct Patient p[5];
    int id;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Patient %d details\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Age: ");
        scanf("%d", &p[i].age);

        printf("Blood Type: ");
        scanf("%s", p[i].bloodType);

        printf("ID: ");
        scanf("%d", &p[i].patientID);

        printf("Diagnosis: ");
        scanf(" %[^\n]", p[i].diagnosis);
    }

    displayAll(p, 5);

    printf("\nEnter ID to search: ");
    scanf("%d", &id);

    searchByID(p, 5, id);

    return 0;
}