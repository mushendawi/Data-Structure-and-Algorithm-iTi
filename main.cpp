#include <iostream>

using namespace std;

#include "LinkedList.h"

int main()
{
    LinkedList mylist;

    mylist.add(3);
    mylist.display(); // 3

    cout<<endl<<"--- insert 7 after 3 ---"<<endl;
    mylist.InsertAfter(3,7);
    mylist.display();

    cout<<endl<<"--- remove 7 ---"<<endl;
    mylist.removeNode(7);
    mylist.display();

    cout<<endl<<"--- insert 7 before 3 ---"<<endl;
    mylist.InsertBefore(3,7);
    mylist.display();

    cout<<endl<<"--- insert 7 before 9 ---"<<endl;
    mylist.InsertBefore(9,7);
    mylist.display();

    cout<<endl<<"--- add 5 10 3 13 ---"<<endl;
    mylist.add(5);
    mylist.add(10);
    mylist.add(3);
    mylist.add(13);
    mylist.display();// 3 5 10 3 13

    cout<<endl<<"--- insert 7 after 13 ---"<<endl;
    mylist.InsertAfter(13,7);
    mylist.display();

    cout<<endl<<"--- insert 7 before 5 ---"<<endl;
    mylist.InsertBefore(5,7);
    mylist.display();


    cout<<endl<<"Number of Elements = "<<mylist.GetCount()<<endl;

    cout<<endl<<"List[6] = "<<mylist.GetDataByIndex(6)<<endl;

    cout<<endl<<"List[50] = "<<mylist.GetDataByIndex(50)<<endl;

    return 0;
}
