#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target);
int main()
{
    int nums[3]={3,2,4};
    int *ptr=twoSum(nums,3,6);
}

int* twoSum(int* nums, int numsSize, int target) {
    int index_1;
    for(index_1=0;index_1<numsSize;index_1++)
    {
        int index_2;
        for(index_2=index_1+1;index_2<numsSize;index_2++)
        {
            if(nums[index_1]+nums[index_2]==target)
            {
                int *sum=malloc(2*sizeof(int));
                sum[0]=index_1;
                sum[1]=index_2;
                return sum;
            }
        }
    }
    return NULL;
}
