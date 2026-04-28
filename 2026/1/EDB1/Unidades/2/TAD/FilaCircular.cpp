template <typename T, int MAX>
class FilaCircular {
private:
    T data[MAX];
    int inicio, fim, count;

public:
    FilaCircular() : inicio(0), fim(0), count(0) {}

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX;
    }

    int size() {
        return count;
    }

    void enqueue(T x) {
        if (isFull())
            throw overflow_error("Fila cheia");
        data[fim] = x;
        fim = (fim + 1) % MAX;
        count++;
    }

    T dequeue() {
        if (isEmpty())
            throw underflow_error("Fila vazia");
        T val = data[inicio];
        inicio = (inicio + 1) % MAX;
        count--;
        return val;
    }

    T front() {
        if (isEmpty())
            throw underflow_error("Fila vazia");
        return data[inicio];
    }
};
