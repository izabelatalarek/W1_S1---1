#include <stdio.h>
#include <limits.h>
#include <stdbool.h>



int main()
{
    char name[] = "Romek";
    unsigned short batteryStatus = 70;
    double temperature = -13.5;
    unsigned int velocity = 25;
    unsigned int deciVelocity = 0;
    char status[] = "Exploring";

    double absoluteValue = temperature * (-1);
    double toKelvins = temperature + 273.15;

    int number2 = 0;
    int number = 0;

    bool valid = true;
    char check = 'c';


    printf(" 1.NAME\n 2.STATUS OF BATTERY\n 3.TEMPERATURE\n 4.VELOCITY\n 5.STATUS\n 6. NEXT OPTIONS\n ");



    while (true)
    {

        printf("Which variable to check? Choose number: ");
        scanf_s("%d", &number);


        switch (number)

        {
        case 1: printf("%s\n", name); break;

        case 2:  printf("%hu\n", batteryStatus); break;

        case 3:  printf("%lf\n", temperature); break;

        case 4:  printf("%d\n", velocity);  break;

        case 5:  printf("%s\n", status);   break;

        case 6: goto next;

        default: printf("Choose a disponible number\n");
        }

    }

    while (true)

    {

    next: printf("\n1.Number of bytes\n");
        printf("2.Maximum/Minimum values in battery status, temperature and velocity\n");
        printf("3.Absolute value of temperature\n");
        printf("4.Velocity in decimal and scientific notation\n");
        printf("5.Converting temperature to Kelvins\n");
        printf("6.Exit\n");


        scanf_s("%d", &number2);



        switch (number2)
        {

        case 1: printf("sizeof(char) is %d bytes.\n", sizeof(char));
            printf("sizeof(short) is %d bytes.\n", sizeof(short));
            printf("sizeof(int) is %d bytes.\n", sizeof(int));
            printf("sizeof(long) is %d bytes.\n", sizeof(long));
            printf("sizeof(long long) is %d bytes.\n", sizeof(long long));
            printf("sizeof(float) is %d bytes.\n", sizeof(float));
            printf("sizeof(double) is %d bytes.\n", sizeof(double));
            printf("sizeof(long double) is %d bytes.\n", sizeof(long double));

            break;

        case 2: printf("Max battery status: 100%\n Minimum battery status: 0%\n");
            printf("Minimum temperature: -20\n Max temperature: 40\n");
            printf(" Minimum velocity: 10\n Max velocity: 25\n");

            break;

        case 3: if (temperature >= 0)
            printf("Abosulte value is: %lf\n", temperature);
              else
            printf("Abosulte value is: %lf\n", absoluteValue);

            break;

        case 4: 
            deciVelocity = velocity;
            printf("Velocity in  decimal notation: %f\n", deciVelocity);
            printf("Velocity in  scientific notation: %E\n", deciVelocity);


            break;

        case 5: printf("Tempreture in Kelvins: %lf\n", toKelvins);

            break;

        case 6: printf("It looks like you already have all the information you need. See you later!");

            exit(0);

        default: printf("Choose a disponible number\n");  

        }

    }


    return 0;

}