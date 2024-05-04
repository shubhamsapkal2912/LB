#include <stdio.h>
//Time Complexity :O(N/2)
int countSumFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iCount++;
        }
        
    }

    return iCount;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number \n");
    scanf("%d", &iValue);
    iRet = countSumFactors(iValue);
    printf("number of factors are %d ", iRet);

    return 0;
}
