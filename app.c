#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int price;
} Order;

Order orders[100];
int order_count = 0;

void add_order(char *name, int price) {
    strcpy(orders[order_count].name, name);
    orders[order_count].price = price;
    order_count++;
}

int breakfast() {
    int total = 0;
    while (1) {
        int break_choices;
        printf("====================================================================================\n");
        printf("                                          BREAKFAST                                 \n");
        printf("====================================================================================\n");
        printf("Types                                          |              Size    |  Price (CNY)\n");
        printf("------------------------------------------------------------------------------------\n");
        printf("1. Fatoure(egg & chess) Moroccan Tea           |              Small   |    20 CNY\n");
        printf("2. Fatoure(eggs & cheese) Moroccan Tea & Msamne|              Midelle |    40 CNY\n");
        printf("3. Fatoure(eggs & cheese) Moroccan Tea & Briwa |              Big     |    50 CNY\n");
        printf("4. Finish The Order\n");
        printf("\n\n");
        printf("Choose what the breakfast order you want: ");
        scanf("%d", &break_choices);
        
        if (break_choices == 1) {
            printf("You chose Fatoure Number 1\n");
            add_order("Fatoure(egg & chess) Moroccan Tea - Small", 20);
            total += 20;
        } else if (break_choices == 2) {
            printf("You chose Fatoure Number 2\n");
            add_order("Fatoure(eggs & cheese) Moroccan Tea & Msamne - Midelle", 40);
            total += 40;
        } else if (break_choices == 3) {
            printf("You chose Fatoure Number 3\n");
            add_order("Fatoure(eggs & cheese) Moroccan Tea & Briwa - Big", 50);
            total += 50;
        } else if (break_choices == 4) {
            break;
        } else {
            printf("Invalid choice, please try again.\n");
        }
    }
    return total;
}

int lunch_dinner() {
    int total = 0;
    while (1) {
        int lunch_choices;
        printf("===========================================================================================\n");
        printf("                                          LUNCH OR DINNER FOOD                             \n");
        printf("===========================================================================================\n");
        printf("Types                                          |         Size    |              Price (CNY)\n");
        printf("-------------------------------------------------------------------------------------------\n");
        printf("1. Moroccan Tagine                             |         Small   |                   60 CNY\n");
        printf("2. Moroccan Couscous                           |        Midelle  |                   90 CNY\n");
        printf("3. Moroccan Bastila                            |          Big    |                   150 CNY\n");
        printf("4. Finish The Order\n");
        printf("\n\n");
        printf("Choose what the lunch or dinner order you want: ");
        scanf("%d", &lunch_choices);
        
        if (lunch_choices == 1) {
            printf("You chose Moroccan Tagine\n");
            add_order("Moroccan Tagine - Small", 60);
            total += 60;
        } else if (lunch_choices == 2) {
            printf("You chose Moroccan Couscous\n");
            add_order("Moroccan Couscous - Midelle", 90);
            total += 90;
        } else if (lunch_choices == 3) {
            printf("You chose Moroccan Bastila\n");
            add_order("Moroccan Bastila - Big", 150);
            total += 150;
        } else if (lunch_choices == 4) {
            break;
        } else {
            printf("Invalid choice, please try again.\n");
        }
    }
    return total;
}

int juice() {
    int total = 0;
    while (1) {
        int juice_choices;
        printf("====================================================================================\n");
        printf("                                          JUICE                                     \n");
        printf("====================================================================================\n");
        printf("Types                                          |              Size    |  Price (CNY)\n");
        printf("------------------------------------------------------------------------------------\n");
        printf("1. Avocado Juice                               |              Small   |       20 CNY\n");
        printf("2. Orange Juice                                |              Midelle |       20 CNY\n");
        printf("3. Panachi Juice                               |              Big     |       35 CNY\n");
        printf("4. Finish The Order\n");
        printf("\n\n");
        printf("Choose what the juice order you want: ");
        scanf("%d", &juice_choices);

        if (juice_choices == 1) {
            printf("You chose Avocado Juice\n");
            add_order("Avocado Juice - Small", 20);
            total += 20;
        } else if (juice_choices == 2) {
            printf("You chose Orange Juice\n");
            add_order("Orange Juice - Midelle", 20);
            total += 20;
        } else if (juice_choices == 3) {
            printf("You chose Panachi Juice\n");
            add_order("Panachi Juice - Big", 35);
            total += 35;
        } else if (juice_choices == 4) {
            break;
        } else {
            printf("Invalid choice, please try again.\n");
        }
    }
    return total;
}

void print_account(int total) {
    printf("\n====================================================================================\n");
    printf("                                      ACCOUNT DETAILS                               \n");
    printf("====================================================================================\n");
    for (int i = 0; i < order_count; i++) {
        printf("%d. %s - %d CNY\n", i + 1, orders[i].name, orders[i].price);
    }
    printf("------------------------------------------------------------------------------------\n");
    printf("Total price: %d CNY\n", total);
    printf("====================================================================================\n\n");
}



int main() {
    int x;
    int total = 0;
    
    while (1) {
        printf("|==============================================================================|\n");
        printf("|----------------------- MOROCCAN RESTAURANT ----------------------------------|\n");
        printf("|==============================================================================|\n");
        printf("\n1. Breakfast Foods");
        printf("\n2. Lunch Foods or Dinner Foods");
        printf("\n3. Juice");
        printf("\n4. Give Me The Account and Exit");
    
        printf("\n\n");
        printf("Choose what the order you want: ");
        scanf("%d", &x);

        switch (x) {
            case 1:
                total += breakfast();
                break;
            case 2:
                total += lunch_dinner();
                break;
            case 3:
                total += juice();
                break;
            case 4:
                print_account(total);
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    }
}
