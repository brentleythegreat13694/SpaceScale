#include <stdio.h>
#include <stdbool.h>

void clearInputBuffer(){
              int c;
              while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    //Contains variables to store weight and planet section
    double earthWeight;
    int choice;
    double total;
    //Prompts User for their weight on earth and their choice and confirms validation
    printf("What is your weight on earth: ");
    if (scanf("%lf", &earthWeight) != 1){
        printf("Error: Invalid input. Please enter a number.\n");
        clearInputBuffer();
        return 1;
    }
    clearInputBuffer();

    if (earthWeight <= 0){
        printf("Error: Weight must be greater than 0");
        return 1;
    }
    printf("1. Mercury, 2. Venus, 3. Mars: ");
    if (scanf("%d", &choice) != 1){
        printf("Error: Invaild input. Please enter a number (1-3).\n");
        clearInputBuffer();
        return 1;
    }
    clearInputBuffer();

    // Calculate weight depending on what planet you chosen
    switch (choice) {
        case 1:
               total = earthWeight * 0.38;
               break;
        case 2:
               total = earthWeight * 0.91;
               break;
        case 3:
               total = earthWeight * 0.38;
               break;
        default:
              printf("Invalid choice!\n");
              return 1;
    }
    //Tells user their new weight
    printf("Your new weight would be %.2lf\n", total);

    return 0;
}
