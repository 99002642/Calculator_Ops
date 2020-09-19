#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ addition=1, subtra, multi, divisiom, primenum, positivenum , negativenum, modulo, evennum,oddnum,percent,EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit");
    printf("\n\tEnter your choice\n");

     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;

    }
    switch(calculator_operation)
    {
        case addition:
            printf("\n\t%d + %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            addition(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case subtra:
            printf("\n\t%d - %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            subtra(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case multi:
            printf("\n\t%d * %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            multi(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case division:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            division(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case primenum:
            printf("\n\t %d\nEnter to continue",
            calculator_operand1,
            primenum(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
         case modulo:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            modulo(calculator_operand1, calculator_operand2));

            __fpurge(stdin);
            getchar();
            break;
        case evennum:
            printf("\n\t%d / %d = %d\nEnter to continue",
            evennum(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
          case oddnum:
            printf("\n\t%d / %d = %d\nEnter to continue",
            oddnum(calculator_operand1));

            __fpurge(stdin);
            getchar();
            break;
          case percent:
            printf("\n\t%d / %d = %d\nEnter to continue",
            calculator_operand1,
            calculator_operand2,
            percent(calculator_operand1, calculator_operand2));
            
        case 12:
            exit(0);
            break;
            default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((addition <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
