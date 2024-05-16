
#include "karyheads.cpp"
#include <iostream>

void iterativeheaps(int rap[], int size) {
    KaryHeap  heap(2);
    for (int  i    = 0; i < size; ++i)
        heap.insert(rap[i]);
    for (int i =  0; i < size; ++i)
        rap[i] =    heap.deleteMin();
int main() {
    int rap[] = {5,  1, 10, 4, 7};
    int size = sizeof(rap) / sizeof(rap[0]);
    int rap1[] = {12, 8, 9, 21, 2};
    int size1 = sizeof(rap1) / sizeof(rap1[0]);
    int rapgpp[] = {11, 56,  32, 20, 9, 1, 16};
    int size2 = sizeof(rapgpp)  / sizeof(rapgpp[0]);
    iterativeheaps(rap, size);

    std::cout   << "sorting the rapay ---> ";
    for (int i = 0; i < size; ++i)
           std::cout << rap[i] << "           ";
    std::cout   << std::endl;
    iterativeheaps(rap1, size1);
    std::cout   << "sorted repay ---> ";
    for (int i = 0; i < size; ++i)
         std::cout << rap1[i] << "           ";
    std::cout << std::endl;
    iterativeheaps(rapgpp, size2);
    std::cout << "sorted rapay -->  ";
    for   (int i = 0; i < size; ++i)
        std::cout << rapgpp[i] << "         ";
    std::cout    << std::endl;

}
