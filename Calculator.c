#include <stdio.h>
#include <math.h>

int main()
{
    int op1 = 0, op2 = 0;

    do
    {
        printf("\n\t**** M E N U ****\n\n1. Calculation\n2. Checking Number\n3. Find Number in Range\n4. Matrix Calculation\n5. Exit\n=> Enter option: ");
        scanf("%d", &op1);
    back1:

        switch (op1)
        {
        case 1:
            do
            {
                printf("\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power Value\n6. Exit\n=> Enter option: ");
                scanf("%d", &op2);
            back2:

                switch (op2)
                {
                case 1:
                { // addition block
                    int n = 1, sum = 0, num;
                    printf("\nEnter 0 to see result\nEnter number: ");
                    while (n != 0)
                    {
                        scanf("%d", &num);
                        if (num == 0)
                            n = 0;
                        else
                            sum = sum + num;
                    }
                    printf("\n=> Result = %d", sum);
                    break;
                }
                case 2:
                {
                    int a, b; // subtraction block
                    printf("\nEnter first number: ");
                    scanf("%d", &a);
                    printf("Enter second number: ");
                    scanf("%d", &b);
                    printf("\n=> Result = %d", a - b);
                    break;
                }
                case 3:
                { // multiplication block
                    int mul = 1, n = 1, num;
                    printf("\nEnter 0 to see result\nEnter number: ");
                    while (n != 0)
                    {
                        scanf("%d", &num);
                        if (num == 0)
                            n = 0;
                        else
                            mul = mul * num;
                    }
                    printf("\n=> Result = %d", mul);
                    break;
                }
                case 4:
                { // division block
                    float c, d;
                    printf("\nEnter first number: ");
                    scanf("%f", &c);
                    printf("Enter second number: ");
                    scanf("%f", &d);
                    printf("\n=> Result = %f", c / d);
                    break;
                }
                case 5:
                { // calculate power value
                    int base, power;
                    printf("\nEnter base: ");
                    scanf("%d", &base);
                    printf("Enter power: ");
                    scanf("%d", &power);
                    int result = pow(base, power);
                    printf("\n=> Result = %d", result);
                    break;
                }
                case 6: // exit
                    printf("\n** Thank you **\n\n");
                    break;
                default:
                    printf("\nInvalid option. \nPlease enter a correct option: ");
                    scanf("%d", &op2);
                    goto back2; // to get another option without showing option again
                    break;
                }
            } while (op2 != 6);
            break;

        case 2:
        {
            int op3;
            do
            {
                printf("\n\n1. Prime Number\n2. Armstrong Number\n3. Palindrome Number\n4. Buzz Number\n5. Exit\n=> Enter option: ");
                scanf("%d", &op3);
            back3:

                switch (op3)
                {
                case 1:
                { // finding prime number
                    int num1, i, a = 0;
                    printf("\nEnter the number: ");
                    scanf("%d", &num1);
                    for (i = 1; i <= num1; i++)
                    {
                        if (num1 % i == 0)
                            a++;
                    }
                    if (a == 2)
                        printf("\n=> %d is a prime number", num1);
                    else
                        printf("\n=> %d is not a prime number", num1);
                    break;
                }
                case 2:
                { // finding armstrong number
                    int number, originalNumber, remainder, result = 0, n = 0;
                    printf("Enter an integer: ");
                    scanf("%d", &number);
                    originalNumber = number;
                    while (originalNumber != 0)
                    {
                        originalNumber /= 10;
                        ++n;
                    }
                    originalNumber = number;
                    while (originalNumber != 0)
                    {
                        remainder = originalNumber % 10;
                        result += pow(remainder, n);
                        originalNumber /= 10;
                    }
                    if (result == number)
                        printf("\n=> %d is an Armstrong number.", number);
                    else
                        printf("\n=> %d is not an Armstrong number.", number);
                    break;
                }
                case 3:
                { // finding palindrome number
                    int num1, rev = 0, remainder, tem;
                    printf("\nEnter the number: ");
                    scanf("%d", &num1);
                    tem = num1;
                    while (num1 != 0)
                    {
                        remainder = num1 % 10;
                        rev = rev * 10 + remainder;
                        num1 /= 10;
                    }
                    if (tem == rev)
                        printf("\n=> %d is a palindrome number", tem);
                    else
                        printf("\n=> %d is not a palindrome number", tem);
                    break;
                }
                case 4:
                { // finding buzz number
                    int num1;
                    printf("\nEnter the number: ");
                    scanf("%d", &num1);
                    if (num1 % 7 == 0 || num1 % 10 == 7)
                        printf("\n=> %d is a BUZZ number", num1);
                    else
                        printf("\n=> %d is not a BUZZ number", num1);
                    break;
                }
                case 5: // exit
                    printf("\n\n** Thank You **");
                    break;
                default:
                    printf("\nInvalid option. \nPlease enter a correct option: ");
                    scanf("%d", &op3);
                    goto back3; // to get another option without showing option again
                    break;
                }
            } while (op3 != 5);
            break;
        }

        case 3:
        {
            int op4;
            do
            {
                printf("\n\n1. Prime Number\n2. Armstrong Number\n3. Palindrome Number\n4. Exit\n=> Enter option: ");
                scanf("%d", &op4);
            back4:

                switch (op4)
                {
                case 1:
                {
                    int i, j, start, end, a;
                    printf("Enter the starting number: ");
                    scanf("%d", &start);
                    printf("Enter the ending number: ");
                    scanf("%d", &end);
                    printf("\nPrime numbers between %d and %d are:\n", start, end);
                    for (i = start; i <= end; i++)
                    {
                        a = 0;
                        for (j = 1; j <= i; j++)
                        {
                            if (i % j == 0)
                                a++;
                        }
                        if (a == 2)
                            printf(" %d", i);
                    }
                    break;
                }
                case 2:
                {
                    int aa, bb, nn, tem1, c, r, e, arm, p;
                    printf("Enter your lower number: ");
                    scanf("%d", &aa);
                    printf("Enter your upper number: ");
                    scanf("%d", &bb);
                    printf("\n\nThe Armstrong numbers between %d to %d:\n", aa, bb);
                    for (nn = aa; nn <= bb; nn++)
                    {
                        tem1 = nn;
                        c = 0;
                        arm = 0;
                        p = nn;
                        while (p != 0)
                        {
                            p /= 10;
                            c++;
                        }
                        p = nn;
                        while (p != 0)
                        {
                            r = p % 10;
                            e = pow(r, c);
                            arm += e;
                            p /= 10;
                        }
                        if (tem1 == arm)
                            printf("%d ", tem1);
                    }
                    break;
                }
                case 3:
                {
                    int k, start, end, tem2, rev2, rem;
                    printf("\nEnter starting number: ");
                    scanf("%d", &start);
                    printf("Enter ending number: ");
                    scanf("%d", &end);
                    printf("Palindrome numbers between %d to %d are: \n", start, end);
                    for (k = start; k <= end; k++)
                    {
                        tem2 = k;
                        rev2 = 0;
                        rem = 0;
                        while (tem2 != 0)
                        {
                            rem = tem2 % 10;
                            rev2 = rev2 * 10 + rem;
                            tem2 /= 10;
                        }
                        if (k == rev2)
                            printf(" %d", k);
                    }
                    break;
                }
                case 4:
                    printf("\n\n** Thank You **");
                    break;
                default:
                    printf("\nInvalid option. \nPlease enter a correct option: ");
                    scanf("%d", &op4);
                    goto back4; // to get another option without showing option again
                    break;
                }
            } while (op4 != 4);
            break;
        }

        case 4:
        {
            int op5 = 0;
            do
            {
                printf("\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Exit\nEnter your option: ");
                scanf("%d", &op5);
            back5:

                switch (op5)
                {
                case 1:
                { // Matrix Addition
                    int rows, cols;
                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);
                    printf("Enter the number of columns: ");
                    scanf("%d", &cols);

                    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

                    // Input elements for the first matrix
                    printf("\nEnter elements for Matrix 1:\n");
                    for (int i = 0; i < rows; i++)
                    {
                        for (int j = 0; j < cols; j++)
                        {
                            printf("Matrix1[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &matrix1[i][j]);
                        }
                    }

                    // Input elements for the second matrix
                    printf("\nEnter elements for Matrix 2:\n");
                    for (int i = 0; i < rows; i++)
                    {
                        for (int j = 0; j < cols; j++)
                        {
                            printf("Matrix2[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &matrix2[i][j]);
                        }
                    }

                    // Perform Matrix Addition
                    for (int i = 0; i < rows; i++)
                    {
                        for (int j = 0; j < cols; j++)
                        {
                            result[i][j] = matrix1[i][j] + matrix2[i][j];
                        }
                    }

                    // Display the result
                    printf("\nResult of Matrix Addition:\n");
                    for (int i = 0; i < rows; i++)
                    {
                        for (int j = 0; j < cols; j++)
                        {
                            printf("%d\t", result[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }
                case 2:
                { // Matrix Subtraction
                    int rows, cols;
                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);
                    printf("Enter the number of columns: ");
                    scanf("%d", &cols);

                    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

                    // Input elements for the first matrix
                    printf("\nEnter elements for Matrix 1:\n");
                    for (int i = 0; i < rows; i++)
                    {
                        for (int j = 0; j < cols; j++)
                        {
                            printf("Matrix1[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &matrix1[i][j]);
                        }
                    }

                    // Input elements for the second matrix
                    printf("\nEnter elements for Matrix 2:\n");
                    for (int i = 0; i < rows; i++)
                    {
                        for (int j = 0; j < cols; j++)
                        {
                            printf("Matrix2[%d][%d]: ", i + 1, j + 1);
                            scanf("%d", &matrix2[i][j]);
                        }
                    }

                    // Perform Matrix Subtraction
                    for (int i = 0; i < rows; i++)
                    {
                        for (int j = 0; j < cols; j++)
                        {
                            result[i][j] = matrix1[i][j] - matrix2[i][j];
                        }
                    }

                    // Display the result
                    printf("\nResult of Matrix Subtraction:\n");
                    for (int i = 0; i < rows; i++)
                    {
                        for (int j = 0; j < cols; j++)
                        {
                            printf("%d\t", result[i][j]);
                        }
                        printf("\n");
                    }
                    break;
                }
                case 4:
                    printf("\n\n** Thank You **\n");
                    break;
                default:
                    printf("\nInvalid option. \nPlease enter a correct option: ");
                    scanf("%d", &op5);
                    goto back5; // to get another option without showing option again
                    break;
                }
            } while (op5 != 4);
            break;
        }

        case 5:
            printf("\n******** Thank You ********\n");
            break;

        default:
            printf("\nInvalid option. \nPlease enter a correct option: ");
            scanf("%d", &op1);
            goto back1;
            break;
        }
    } while (op1 != 5);

    return 0;
}