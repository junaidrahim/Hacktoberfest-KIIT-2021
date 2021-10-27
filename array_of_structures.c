//4. Store names, IDs, and phone numbers of 10 students in an array of structures. Display the information upon request

#include <stdio.h>
struct student
{
    int id;
    long phnum;
    char name[100];
};

struct student input(int i)
{
    struct student object;
    printf("Enter name of the student %d :- ", i+1);
    scanf(" %[^\n]s", object.name);
    printf("Enter ID of the student %d :- ", i+1);
    scanf("%d", &object.id);
    printf("Enter phone number of the student %d :- ", i+1);
    scanf("%ld", &object.phnum);
    return object;
}

void display(struct student s)
{
    printf("Name :- %s\n", s.name);
    printf("ID :- %d\n", s.id);
    printf("Phone number :- %ld\n", s.phnum);
}

int main()
{
    struct student studdetails[10];
    printf("Enter the details of 10 Students :-\n");
    for (int i = 0; i < 10; i++)
    studdetails[i] = input(i);
    printf("Enter the Student number whose details are to be shown :- ");
    int num;
    scanf("%d", &num);
    if( num < 1 && num > 10)
    {
        printf("Invalid Student number\n");
        return 0;
    }
    printf("The details of the student %d are :-\n", num);
    display(studdetails[num-1]);
    return 1;
}
