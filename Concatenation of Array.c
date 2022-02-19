/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
        int i;
        int *returnArray;
        returnArray= (int*)malloc((numsSize*2)* sizeof(int));
        
        for(i=0;i<numsSize;i++){
            returnArray[i]=nums[i];
            returnArray[i+numsSize]=nums[i];

            
        }
    *returnSize=2*numsSize;
    return returnArray;
        



}