#include <stdio.h>

void sum_of_two() {
    int x, y;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("enter another number: ");
    scanf("%d", &y);
    int z = x + y;
    printf("%d", z);
}

void simple_interest() {
    int p, t, r;
    printf("enter principal amount: ");
    scanf("%d", &p);
    printf("enter time: ");
    scanf("%d", &t);
    printf("enter rate: ");
    scanf("%d", &r);
    int si = (p * t * r) / 100;
    printf("simple interest is: %d\n", si);
}

void positive_or_negative() {
    printf("enter a number: ");
    int number;
    scanf("%d", &number);
    if (number == 0) {
        printf("0 is neither negative nor positive\n");
    } else if (number < 0) {
        printf("%d is negative\n", number);
    } else {
        printf("%d is positive\n", number);
    }
}

void odd_or_even() {
    printf("enter a number: ");
    int number;
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
}

void largest_among_3() {
    int x, y, z;
start:
    printf("enter a number: ");
    scanf("%d", &x);
    printf("\nenter 2nd number: ");
    scanf("%d", &y);
    printf("\nenter 3rd number: ");
    scanf("%d", &z);
    if (x == y || x == z || y == z) {
        printf("\ninvalid input: all three numbers must be different. try again!\n");
        goto start;
    }
    if (x > y) {
        if (x > z) {
            printf("%d is largest\n", x);
        } else {
            printf("%d is largest\n", z);
        }
    } else {
        if (y > z) {
            printf("%d is largest\n", y);
        } else {
            printf("%d is largest\n", z);
        }
    }
}

void sum_of_n_numbers() {
    printf("how many numbers do you have?");
    int N;
    scanf("%d", &N);

    int ans = 0;
    for (int i = 1; i <= N; i = i + 1) {
        int v;
        printf("enter number: ");
        scanf("%d", &v);
        ans +=  v;
    }
    printf("the sum of the given numbers is: %d\n", ans);
}

void sum_of_1_to_n() {
    printf("enter n: ");
    int n;
    scanf("%d", &n);
    int i = 1;
    int ans = 0;
    while (i <= n) {
        ans = ans + i;
        i = i + 1;
    }
    printf("the sum from 1 to %d is %d\n", n, ans);
}

void factorial() {
    printf("enter n: ");
    int n;
    scanf("%d", &n);
    int ans = 0;
    while (n != 0) {
        ans = ans * n;
        n = n - 1;
    }
    printf("ans = %d", ans); 
}

void display_menu() {
    printf("\n\n0. exit\n");
    printf("1. calculate the sum of two given numbers\n");
    printf("2. calculate the simple interest using SI=(P*T*R)/100\n");
    printf("3. check if a number is +ve or -ve\n");
    printf("4. check if a number is odd or even\n");
    printf("5. find largest among given three different numbers\n");
    printf("6. read n numbers and find their sum\n");
    printf("7. find the sum of series 1+2+3+4+5+...+N\n");
    printf("8. calculate factorial of a given number N\n");
}

void hcf() {
    /*
    while x != y {
        if x > y {
            x = x - y;
        } else {
            y = y - x;
        }
    }
    output x;
    */
}

int main() {
    // calculate sum of two given numbers
    int choice;
    do {
        display_menu();
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0: break;
            case 1: sum_of_two(); break;
            case 2: simple_interest(); break;
            case 3: positive_or_negative(); break;
            case 4: odd_or_even(); break;
            case 5: largest_among_3(); break;
            case 6: sum_of_n_numbers(); break;
            case 7: sum_of_1_to_n(); break;
            case 8: factorial(); break;
            default: printf("invalid choice: try again!");
        }
    } while (choice != 0);
}
