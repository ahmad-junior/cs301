// Include Header Files
#include <iostream>
#include "List.cpp"

// Driver Program
int main(){
    List list = addNodes();
    traverse(&list);
    list.length();
    return 0;
}