#include <stdio.h>

int BinarySearch(int A[],int element,int low, int high)
{

    while(low <= high) {
        int middlePos = (low+high)/2;
        int middleValue = A[middlePos];
        if(element == middleValue) {
            return middlePos;
        }
        if(element < middleValue) {
            high = middlePos - 1;
        } else {
            low =  middlePos + 1;
        }

    }
    return -1;
}

int main()
{
    int A[] = {1,4,7,8,10,50,100};
    int low=0;
    size_t n = sizeof(A)/sizeof(A[0]);
    int high= n-1;
    printf("Binary Search!\n");

    int result = BinarySearch(A,100,low,high);
    printf("%d" , result);
    return 0;
}
