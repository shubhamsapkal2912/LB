#include <stdio.h>
//Time Complexity :O(N)
int sumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
           
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number \n");
    scanf("%d", &iValue);
    iRet = sumFactors(iValue);
    printf("Summation of factors %d \n", iRet);

    return 0;
}
