#include <stdio.h>

int main(){
    //Contains variables to store weight and planet section
    double EarthWeight;
    int choice;
    double total;
    //Prompts User for their weight on earth and there choice
    printf("What is your weight on earth: ");
    scanf("%lf", &EarthWeight);
    printf("1. Mercury, 2. Venus, 3. Mars: ");
    scanf("%d", &choice);

    // Calculate weight depending on what planet you chosen
    if (EarthWeight == 0){
        printf("Sorry can not give new weight since your EarthWeight is set to 0");
        return 1;
    }
    switch (choice) {
        case 1:
               total = EarthWeight * 0.38;
               break;
        case 2:
               total = EarthWeight * 0.91;
               break;
        case 3:
               total = EarthWeight * 0.38;
               break;
        default:
              printf("Invalid choice!\n");
              return 1;
    }
    //Tells user their new weight
    printf("Your new weight would be %.2lf\n", total);

    return 0;
}
