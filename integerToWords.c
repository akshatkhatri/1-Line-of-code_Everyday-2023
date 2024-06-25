#include <stdio.h>
#include<ctype.h>
int main() {
    int num, dig;

    printf("Enter how many digits in the number: ");
    scanf("%d", &dig);

    printf("Enter the number: ");
    scanf("%d", &num);

    int arr[dig]; // Changed to dig instead of dig-1 to correctly store all digits
    int i = 0;
    int j = 0;

    // Extract digits and store them in arr in reverse order
    while (num != 0) {
        int digit = num % 10;
        num = num / 10;

        arr[i] = digit;
        i++;
    }
    i--; // Decrement i to point to the last valid index in arr

    // Reverse the arr array
    while (j < i) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;

        j++;
        i--;
    }

    // Print the digits as words
    i = 0;
    while (i < dig) { // Changed <= to < to iterate up to dig-1
        switch (arr[i]) {
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            case 0:
                printf("Zero ");
                break;
            default:
                printf("Error\n");
                return 0;
        }
        i++;
    }

    return 0;
}
