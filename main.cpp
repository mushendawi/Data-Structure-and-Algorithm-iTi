#include <iostream>

using namespace std;

#include <Linked_List.h>
#include <Linear_Search_Array.h>
#include <Binary_Search_Array.h>
#include <Bubble_Sort_Linked_List.h>

int main()
{
    cout<<"\n###############################";
    cout<<"\n#### Linear Search Program ####";
    cout<<"\n###############################\n";
    int firstMatch;
    int arr[10] = {1,2,2,8,6,3,2,1,5,2};
    displayArray(arr, 10);

    cout<<"\n--- searching for 2 ---\n";
    firstMatch = linearSearch(arr, 10, 2); // searching for 2 in an arr of 10 elements
    if(firstMatch == -1)
        cout<<"Target not found!\n";
    else
        cout<<"First match at index "<<firstMatch<<endl;


    cout<<"\n###############################";
    cout<<"\n#### Binary Search Program ####";
    cout<<"\n###############################\n";
    int index;
    int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
    displayArray(arr2,10);

    cout<<"\n--- searching for 3 ---\n";
    index = binarySearch(arr2, 10, 3); // searching for 3 in a sorted arr of 10 elements
    if(index == -1)
        cout<<"Target not found!\n";
    else
        cout<<"Target fount at index "<<index<<endl;


    cout<<"\n###############################";
    cout<<"\n#### Bubble Sort Program  #####";
    cout<<"\n###############################\n";

    Linked_List myList;
    myList.add(1);
    myList.add(3);
    myList.add(6);
    myList.add(4);
    myList.add(2);
    myList.add(8);
    myList.add(10);
    myList.add(0);
    myList.add(5);
    myList.add(12);


    int iterations = Bubble_Sort_Linked_List(myList);

    myList.display();

    cout<<"Sorted in "<<iterations<<" iterations.\n";


    return 0;
}
