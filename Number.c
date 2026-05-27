#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
     srand(time(0));
    int num,choice,chances,min=1,max,attempts,guess; 
    do
    {
        printf("---WELCOME TO NUMBER GUESSING GAME--\n");
    printf("Enter Level of difficulty\n");
    printf("1. Easy(1-100), 3 chances\n");
    printf("2. Medium(1-500), 5 chances\n");
    printf("3. Hard(1-800), 8 chances\n");
    printf("4.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1 : max = 100, chances = 3;
        break;
        case 2: max = 500, chances = 5;
        break;
         case 3 : max = 800, chances = 8;
        break;
         case 4:
        printf("Exiting game...\n");
        return 0;
        default:
        printf("Invalid condition!!\n");
        continue; ;
    }
     num =(rand()%max)+1;
     attempts=0;
     printf("I have choosen up to %d\n", max);
     printf("You have %d chances\n",chances);

     while(attempts < chances){
        printf("Enter you guessing number(or 0 to exit)\n");
        scanf("%d", &guess);
        if(guess== 0){
            printf("Game Over, I choosed %d", num);
            exit(1);
        }
        attempts++;
        if(guess==num){
            printf("Congrats!!, Your guess is correct\n");
            break;
        }
        else if(guess < num){
            printf("Too low!!Try again\n");
        }
            else if(guess > num){
            printf("Too high!!Try again\n");
        }
        if(attempts == chances){
            printf("Game Over!!Better Luck Next Time\n");
             printf("Correct Answer was %d\n", num);
             break;
        }
     }
    
    } while (choice!=4);
    
   


    return 0;
}