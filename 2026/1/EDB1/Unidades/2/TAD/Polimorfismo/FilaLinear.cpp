template <typename T, int MAX>
class FilaLinear : public Fila<T> {
private:
    T data[MAX];
    int inicio, fim;

public:
    FilaLinear() : inicio(0), fim(0) {}

    void enqueue(T x) override {
        if (isFull()) throw overflow_error("Fila cheia");
        data[fim++] = x;
    }

    T dequeue() override {
        if (isEmpty()) throw underflow_error("Fila vazia");
        return data[inicio++];
    }

    T front() override {
        if (isEmpty()) throw underflow_error("Fila vazia");
        return data[inicio];
    }

    bool isEmpty() override {
        return inicio == fim;
    }

    bool isFull() override {
        return fim == MAX;
    }

    int size() override {
        return fim - inicio;
    }
};
