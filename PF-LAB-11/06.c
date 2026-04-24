#include <stdio.h>
#include <string.h>

struct Order
{
    int orderID;
    char customer[50];
    char product[50];
    int quantity;
    float unitPrice;
    char status[20];
};

float computeTotal(struct Order o)
{
    return o.quantity * o.unitPrice;
}

void filterByStatus(struct Order o[], int n, char status[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(o[i].status, status) == 0)
        {
            printf("Order %d - %s\n", o[i].orderID, o[i].product);
        }
    }
}

int main()
{
    struct Order o[4];
    char status[20];

    for (int i = 0; i < 4; i++)
    {
        printf("\nOrder %d\n", i + 1);

        printf("Order ID: ");
        scanf("%d", &o[i].orderID);

        printf("Customer Name: ");
        scanf(" %[^\n]", o[i].customer);

        printf("Product Name: ");
        scanf(" %[^\n]", o[i].product);

        printf("Quantity: ");
        scanf("%d", &o[i].quantity);

        printf("Unit Price: ");
        scanf("%f", &o[i].unitPrice);

        printf("Status: ");
        scanf("%s", o[i].status);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("\nOrder %d Total: %.2f\n",
               o[i].orderID, computeTotal(o[i]));
    }

    printf("\nEnter status to filter: ");
    scanf("%s", status);

    filterByStatus(o, 4, status);

    return 0;
}