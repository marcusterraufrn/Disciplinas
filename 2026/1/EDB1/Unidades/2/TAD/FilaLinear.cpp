#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T, int MAX>
class FilaLinear {
private:
    T data[MAX];
    int inicio;
    int fim;

public:
    FilaLinear() : inicio(0), fim(0) {}

    bool isEmpty() {
        return inicio == fim;
    }

    bool isFull() {
        return fim == MAX;
    }

    int size() {
        return fim - inicio;
    }

    void enqueue(T x) {
        if (isFull())
            throw overflow_error("Fila cheia");
        data[fim++] = x;
    }

    T dequeue() {
        if (isEmpty())
            throw underflow_error("Fila vazia");
        return data[inicio++];
    }

    T front() {
        if (isEmpty())
            throw underflow_error("Fila vazia");
        return data[inicio];
    }
};
