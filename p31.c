#include <stdio.h>
#include <stdbool.h>

int checkFactor(int iNo){
    if (iNo%4==0)
    {
       return true;
    }
    else{
        return false;
    }
}

int main(){
int iValue=0;
bool bRet=false;

 printf("Enter Number \n");
    scanf("%d", &iValue);
    bRet = checkFactor(iValue);
    if (bRet == true)
    {
        printf("%d is divisible by 4 \n",iValue);
    }

    else
    {
        printf("%d is not divisible by 4 \n",iValue);
    }

    return 0;
}