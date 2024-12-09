#ifndef LINEAR_SEARCH_ARRAY_H
#define LINEAR_SEARCH_ARRAY_H


int linearSearch(int* arr, int size, int target)
{
    int firstMatch = -1;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            if(firstMatch == -1)
                firstMatch = i;
            cout<<"arr ["<<i<<"] = "<<arr[i]<<endl;
        }
    }
    return firstMatch;
}

void displayArray(int* arr, int size)
{
    cout<<"\n[";
    for(int i=0; i<size-1; i++)
        cout<<arr[i]<<", ";
    cout<<arr[size-1]<<"]\n";
}


#endif // LINEAR_SEARCH_ARRAY_H
