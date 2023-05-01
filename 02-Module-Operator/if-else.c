#include <stdio.h>
int main() 
{
    int mark;

    scanf("%d", &mark);

    if(mark>100){
        printf("Please Provide Valid Mark");
    }
    else if(mark >=90 ){
        printf("You Got A+");
    }else if(mark>=80){
        printf("You Got A");
    }else if(mark>=70){
        printf("You Got B+");
    }else if(mark>=60){
        printf("You Just Pass");
    }
    
    else{
        printf("Fail");
    }
    return 0;
}