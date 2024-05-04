#include <stdio.h>

int factorial(int iNo)
{
    int iCnt = 0,iFact=1;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet;
    printf("Enter number \n");
    scanf("%d", &iValue);
    iRet = factorial(iValue);
    printf("Factorial of %d is %d \n", iValue, iRet);

    return 0;
}