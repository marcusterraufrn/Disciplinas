#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Fila {
public:
    virtual void enqueue(T x) = 0;
    virtual T dequeue() = 0;
    virtual T front() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual int size() = 0;

    virtual ~Fila() {}
};
