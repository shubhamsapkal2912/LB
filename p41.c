#include <stdio.h>
#include <stdbool.h>

int checkPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

if(iNo<0)
{   //updator
    iNo=-iNo;  //-(-28) suppose input is -28
}
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if ((iNo) == (iSum)){
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter Number \n");
    scanf("%d", &iValue);
    bRet = checkPerfect(iValue);
    if (bRet == true)
    {
        printf("%d is PERFECT number \n",iValue);
    }
    else
    {
        printf("%d is NOT PERFECT number \n",iValue);
    }
    return 0;
}