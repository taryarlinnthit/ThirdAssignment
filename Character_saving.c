//created by Taryarlinnthit
#include <stdio.h>
int main(){
    int a,b,c,words = 0;
    char Notes[words];
    char Name[10];
    char ans ;

    printf("Please enter your name :");
    scanf(" %s",&Name);

    printf("\n Welcome %s",Name);
    printf("\n This program will store the characters you wrote! \n");

    printf("Please enter the number of words:");
    scanf("%d",&words);

    printf("\n Are you sure you want to write %d words?(Y/N):", words);
    scanf("%s", &ans);

    if(ans == 'Y' || ans == 'y' ){
        printf("The program starts! \n");
        printf("Let's start writing!\n");
        for(a=0;a<words;a++){
            scanf("%s",&Notes[a]);
        }
        printf("The things you wrote are:");
        printf("%s", Notes);
    }else{
        printf("\n Please enter the number of words again ");
        scanf("%d \n", &words);
        printf("The program starts! \n");
        printf("Let's start writing!\n");
        for(a=0;a<words;a++){
            scanf("%s",&Notes[a]);
        }
        printf("The things you wrote are:");
        printf("%s", Notes);

    }




    return 0;
} 
