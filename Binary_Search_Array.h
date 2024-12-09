#ifndef BINARY_SEARCH_ARRAY_H
#define BINARY_SEARCH_ARRAY_H

int binarySearch(int* arr, int size, int target)
{
    int start = 0; int end = size-1; int mid;

    while(start <= end)
    {
        mid = (start+end)/2;
        if (arr[mid] == target)
        {
            return mid;

        }
        else if (arr[mid] > target)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }

    return -1;
}

#endif // BINARY_SEARCH_ARRAY_H
