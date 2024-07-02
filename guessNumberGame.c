#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nGuess=1;
    srand(time(0));
    number=rand()%1000 + 1;

    do
    {
        printf("guess the number between 1000\n");
        scanf("%d",&guess);
        if (guess<number)
        {
            printf("enter higher number\n");
        }
        else if(guess>number)
        {
            printf("enter lower number\n");
        }else{
            printf("you guessed it right %d attempt\n",nGuess);
        }
        nGuess++;
    } while (guess!=number);
    
    return 0;
}