#include "q.h"

using namespace std;

int main(){
    PointerBasedQueue<int> newQueue;
    srand(time(NULL));
    for (int i = 0; i < 20; i++){
        int x = rand() % 50;
        newQueue.enqueue(x);
    }
    cout << "Stan początkowy kolejki: "; newQueue.print();
    cout << "Rozmiar kolejki: " << newQueue.getSize() << endl;
    cout << "Wartość front: " << newQueue.getFront() << endl;
    cout << "Wartość rear: " << newQueue.getRear() << endl;

    cout << "Usuwamy 5 elementów z kolejki" << endl;
    for (int i = 0; i < 5; i++){
        newQueue.dequeue();
    }
    cout << "Stan po usunięciu elementów: "; newQueue.print();
    cout << "Rozmiar kolejki: " << newQueue.getSize() << endl;
    cout << "Wartość front: " << newQueue.getFront() << endl;
    cout << "Wartość rear: " << newQueue.getRear() << endl;
    return 0;
}