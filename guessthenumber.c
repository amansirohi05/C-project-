#include <stdio.h>
#include <stdlib.h>//This Library Used to Generate random Numbers till 0-Infinite
#include <time.h>//This  is Time Library To Deal with time, here we use it in Timelapse of Random Numbers
int main()
{
    int num,guess;
    int attempt=1;
    srand(time(0));//This is to change random No at every Second
    num = rand()%100 +1;//This is to Generate Random Number, %100+1 is used to get numbers between 1-100 only
    //printf("The Number is : %d",num);
    do
    {
        printf("Guess the Number in Between 1 and 100  : ");
        scanf("%d",&guess);
        if(guess>num)
        {
            printf("Number Guessed is Greater\n");
            
        }
        else if (guess==num)
        {
           
            printf("Congratulations you guessed right no : %d , total Attempt was %d\n",num,attempt);
            break;

        }
        else
        {
            printf("Number Guessed is Lower\n");
           
        }
        
        
        attempt++;
    } while (guess!=num);
    
    return 0;
}                                   