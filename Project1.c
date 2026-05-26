//Rock Paper Scissor 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int user ,comp;
    //1== Rock, 2== Paper , 3== scissor 
    srand(time(0));
    while(1){
        printf("Enter your move:\n 1.Rock\n 2.Paper\n 3.Scissor\n 4.exit\n");
        scanf("%d", &user);

       comp= rand()%3 + 1;
       if(user==4){
        exit(1);
       }
        else if(user == 1 && comp == 2) {
            printf("Computer choose Paper\n");
            printf("Computer Won!! , Paper defeats Rock\n");

        }
        else if(user==2 && comp == 1){
            printf("Computer choose Paper\n");
            printf("User Won!!,Paper defeats Rock\n");
            
        }
        else if(user==2 && comp == 3){
            printf("Computer choose Scissor\n");
            printf("Computer Won!!, Scissor defeats Paper\n");
           
        }
        else if(user==3 && comp == 2){
            printf("Computer choose Paper\n");
            printf("User Won!!, Scissor defeats Paper\n");
              

        }
        else if(user==1 && comp == 3){
            printf("Computer choose Scissor\n");
            printf("User Won!!, Rock defeats Scissor\n");
             
        }
        else if(user==2 && comp == 1){
            printf("Computer choose Rock\n");
            printf("Computer Won!!, Rock defeats Scissor \n");
        
        }
         else
            printf("Draw Occurs, Try Again!!\n");
       
    }

    return 0;
}
