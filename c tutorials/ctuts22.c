#include<stdio.h>



//this is exercise part
/*the exe. is user first choose that which conversion he wants that is given below and 
then he convert by putting value.
these are :
1.kms to miles ;
2.inches to foot;
3.cms to inch;
4.pound to kgs;
5.inches to meter;
*/


int main()
{
    char input;
    float kmstomile=0.621371;
    float inchestofoot= 0.08333;
    float cmstoinches =0.394;
    float poundtokgs =0.4536;
    float inchestometers=0.0254;
    float first,second;

    while (1)
    {   
        printf("enter the input character. q to quit.\n     1.kms to miles\n     2.inches to foot\n     3.cms to inch\n     4.pound to kgs\n     5.inches to meter\n");

        scanf("%c",&input);
        switch (input)
        {
            case 'q':
            printf("quitting the programme.......");
            goto end;
            break;

            case '1':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second= first * kmstomile;
            printf("%f kms is equal to %f miles\n",first,second);
            break;

            case '2':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*inchestofoot;
            printf("%f inches is equal to %f foot\n",first,second);
            break;

            case '3':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*cmstoinches;
            printf("%f cms is equal to %f inches\n",first,second);
            break;

            case '4':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*poundtokgs;
            printf("%f pound is equal to %f kgs\n",first,second);
            break;

            case '5':
            printf("enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*inchestometers;
            printf("%f inches is equal to %f meters\n",first,second);
            break;

        
            default:
               break;
        }
    }
    end:

    return 0;
}
