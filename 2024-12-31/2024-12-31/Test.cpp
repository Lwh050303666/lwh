int numIdenticalPairs(int* nums, int numsSize)
{
    int count = 0;  int k = 0; int h = 0;
    for (k = 0; k <= numsSize; k++)
    {
        {
            for (h = 1; h <= numsSize; h++)
            {
                if (nums[k] == nums[h] && k < h)
                {
                    count++;
                }
            }
        }
    }
    return count;
}