//stone,paper,scissor game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    printf("you are playing stone,paper,scissor\n");
    int a;
    printf("choose(stone=1),(paper=2),(scissor=3): ");
    scanf("%d",&a);
    //random number generator
    int lower=1;        //assume 1=stone,2=paper,3=scissor
    int higher=3;
    srand(time(NULL));
    int number=rand()%(higher-lower+1)+lower;
    printf("the computer chooses %d\n",number);
    while(1)
    {
        if((number==1 && a==1)||(number==2 && a==2)||(number==3 && a==3))
        {
            printf("same choice: ");
        break;
        }
        else
        {
            if((number==1 && a==2)||(number==3 && a==1)||(number==2 && a==3))
            {
            printf("you won\n");
            break;
            }else
            {
            printf("computer won\n");
            break;
            }

        }

    }
    return 0;

}
