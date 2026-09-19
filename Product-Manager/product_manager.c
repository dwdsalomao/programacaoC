#include <stdio.h>
#include <string.h>
    
#define MAX_PRODUCTS 50

typedef struct Product
{
    int code, stock;
    char name[50];
    float price; 

}Product;

void addProduct(Product products[MAX_PRODUCTS], int *productCount){
     
    if (*productCount < MAX_PRODUCTS){
        printf("Enter the product code: ");
        scanf("%d", &products[*productCount].code);
        
        printf("Enter the product name: ");
        while (getchar() != '\n');
        fgets(products[*productCount].name, sizeof(products[*productCount].name), stdin);
        products[*productCount].name[strlen(products[*productCount].name) - 1] = '\0';
        
        do {printf("Enter the product price: ");
        scanf("%f", &products[*productCount].price);
            if (products[*productCount].price <= 0){
            printf("Invalid amount. You must enter a positive value.\n\n");
            }
        } while (products[*productCount].price <= 0);
        
        do {printf("Enter the product stock: ");
        scanf("%d", &products[*productCount].stock);
            if(products[*productCount].stock <= 0){
            printf("Invalid amount. You must enter a positive value.\n\n");
            }
        } while (products[*productCount].stock <= 0);
        (*productCount)++;
    } else {
            printf("Maximum number of products reached.\n");
    }
}

void listProducts(Product products[MAX_PRODUCTS], int productCount){
    if (productCount == 0){
        printf("No products registered.\n");
    } else {
        for(int i = 0; i < productCount; i++){
            printf("\nCode: %d\n", products[i].code);
            printf("Name: %s\n", products[i].name);
            printf("Price: $%.2f\n", products[i].price);
            printf("Stock: %d\n", products[i].stock);
        }
    }
}

void searchProducts(Product products[MAX_PRODUCTS], int productCount){
    int code;
    int found = 0;
    printf("Enter the product code: ");
    scanf("%d", &code);

    for(int i = 0; i < productCount; i++){
        if(products[i].code == code){
            found = 1;
            printf("\nProduct Found\n");
            printf("\nCode: %d\n", products[i].code);
            printf("Name: %s\n", products[i].name);
            printf("Price: $%.2f\n", products[i].price);
            printf("Stock: %d\n", products[i].stock);
        } 
    } if (found == 0){
            printf("Product not found.\n");
        }
}

void updateStock(Product products[MAX_PRODUCTS], int productCount){
    int code;
    int found = 0;
    int stockOption = 0;
    int stockToAdd = 0;
    int stockToRemove = 0;
    printf("Enter the product code: ");
    scanf("%d", &code);

    for(int i = 0; i < productCount; i++){
        if (products[i].code == code){
            found = 1;
            printf("1. Add stock\n");
            printf("2. Remove stock\n");
            printf("Choose an option: ");
            scanf("%d", &stockOption);
                if (stockOption == 1){
                    printf("Enter the amount you would like to add: ");
                    scanf("%d", &stockToAdd);
                    if (stockToAdd <= 0){
                        printf("Invalid amount. You must enter an amount greater than zero.\n");
                    } else {
                    products[i].stock += stockToAdd;
                    printf("You added %d.\nNow the stock is %d.\n", stockToAdd, products[i].stock);
                    }
                } else if (stockOption == 2) {
                    printf("Enter the amount you would like to remove: ");
                    scanf("%d", &stockToRemove);
                    if (stockToRemove <= 0){
                    printf("Invalid amount. You must enter an amount greater than zero.\n");
                } else if(stockToRemove > products[i].stock){
                    printf("You cannot remove more than the available stock.\n");
                    } else { 
                    products[i].stock -= stockToRemove;
                    printf("You removed %d.\nNow the stock is %d.\n", stockToRemove, products[i].stock);
                    }
                } else {
                    printf("Invalid option. You must enter #1 for adding stock or #2 for removing stock.\n");
                }
        } 
        
    } if (found == 0){
            printf("Product not found.\n");
    }
}

void showInventoryValue(Product products[MAX_PRODUCTS], int productCount){
    float totalValue = 0.00f;
    if (productCount == 0){
        printf("No products registered.\n");
    } else {
        for (int i = 0; i < productCount; i++){
            totalValue += products[i].price * products[i].stock;
        }

        printf("Total: $%.2f\n", totalValue);
    }
}


int main(){

    int userChoice = 0;
    Product products[MAX_PRODUCTS];
    int productCount = 0;

    do{ 
        printf("\n================================\n");
        printf("           PRODUCT MANAGER");
        printf("\n================================\n\n");
        printf("1 - Add product\n"
                "2 - List products\n"
                "3 - Search product\n"
                "4 - Update stock\n"
                "5 - Show inventory value\n"
                "6 - Exit\n");
        printf("\nChoose an option: ");
        if(scanf("%d", &userChoice) != 1){
            printf("\nInvalid input. Please enter a number\n");
        
        while (getchar() != '\n'); 
        }
        switch (userChoice){
            case 1:
                addProduct(products, &productCount);
            break;

            case 2:
                listProducts(products, productCount);
            break;

            case 3: 
                searchProducts(products, productCount);
            break;

            case 4:
                updateStock(products, productCount);
            break;

            case 5: 
                showInventoryValue(products, productCount);
            break;

            case 6:
                printf("Leaving Product Manager...\n\n\n"); 
            break;

            default:
            break;
        }


    }while (userChoice != 6);


    return 0;
}
