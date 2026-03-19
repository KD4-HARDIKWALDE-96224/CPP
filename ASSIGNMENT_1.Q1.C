#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

void initdate(struct date *ptrdate)
{
    ptrdate->day = 1;
    ptrdate->month = 1;
    ptrdate->year = 2000;
}

void acceptdate(struct date *ptrdate)
{
    printf("Enter the day: ");
    scanf("%d", &ptrdate->day);

    printf("Enter month: ");
    scanf("%d", &ptrdate->month);

    printf("Enter year: ");
    scanf("%d", &ptrdate->year);
}

void printdate(struct date *ptrdate)
{
    printf("The date is %d/%d/%d\n", ptrdate->day, ptrdate->month, ptrdate->year);
}

int main()
{
    struct date d1;
    int choice;

    do
    {
        printf("\n----- Date Menu -----\n");
        printf("1. Initialize Date\n");
        printf("2. Accept Date\n");
        printf("3. Print Date\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                initdate(&d1);
                printf("Date Initialized\n");
                break;

            case 2:
                acceptdate(&d1);
                break;

            case 3:
                printdate(&d1);
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
