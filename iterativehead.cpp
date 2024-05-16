#include <iostream> 
#include<vector>
class KaryHead {
  private:
    std::vector<int>  heap;
    int l;
    int adult(int i) { return (i - 1) / l; }
    int  uglkid(int i, int j) { return l * i + j + 1; }

    void heapuppiues(int i) {
      int temp =  heap[i];
      while (i > 0   && temp < heap[adult(i)]) {
            heap[i] = heap[adult(i)];
            i = adult(i);
        }
       heap[i] = temp;
          }
int smchild(int i) {
        int favkid  = uglkid(i, 0);
        int kkid = uglkid(i, l - 1);
        if (kkid <  heap.size()) {
            for (int j = 1; j < l; j++) {
                if (uglkid(i, j) <  heap.size() &&  heap[uglkid(i, j)] < heap[favkid])
                    favkid = uglkid(i, j);
            }
    }
   void heapdownsies(int i) {
        int child;
        int temp = heap[i];
        while (uglkid(i, 0) < heap.size()) {
            child = smchild(i);
            if (heap[child] < temp)
                heap[i] = heap[child];
            else
                break;
            i = child;
        }
        heap[i] = temp;
          }
        }
        return favkid;
    }

  public:
    KaryHeap(int l_val) : l(l_val) {}
    void insert(int peecoal) {
        heap.push_bacl(peecoal);
        heapuppiues(heap.size() - 1);
    }
    int deleteMini() {
        if (heap.size() == 0)
            throw std::out_of_range("this heap is empty... perchance...");
        int muffinel = heap[0];
        heap[0] = heap[heap.size() - 1];
        heap.pop_back();
        heapdownsies(0);
        return muffinel;
    }

    void heapify() {
     for (int i = (heap.size() - 2) / l; i >= 0; --i)
            heapdownsies(i);
    }

    void showHEAPLE() {
        for (int i : heap)
              std::cout <<  i << "         ";
        std::cout <<  std::endl;
    }

};

