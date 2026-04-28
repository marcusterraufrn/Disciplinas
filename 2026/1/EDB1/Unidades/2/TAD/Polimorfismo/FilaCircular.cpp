template <typename T, int MAX>
class FilaCircular : public Fila<T> {
private:
    T data[MAX];
    int inicio, fim, count;

public:
    FilaCircular() : inicio(0), fim(0), count(0) {}

    void enqueue(T x) override {
        if (isFull()) throw overflow_error("Fila cheia");
        data[fim] = x;
        fim = (fim + 1) % MAX;
        count++;
    }

    T dequeue() override {
        if (isEmpty()) throw underflow_error("Fila vazia");
        T val = data[inicio];
        inicio = (inicio + 1) % MAX;
        count--;
        return val;
    }

    T front() override {
        if (isEmpty()) throw underflow_error("Fila vazia");
        return data[inicio];
    }

    bool isEmpty() override {
        return count == 0;
    }

    bool isFull() override {
        return count == MAX;
    }

    int size() override {
        return count;
    }
};
