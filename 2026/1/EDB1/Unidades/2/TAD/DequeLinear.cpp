template <typename T, int MAX>
class DequeLinear {
private:
    T data[MAX];
    int inicio, fim;

public:
    DequeLinear() : inicio(0), fim(0) {}

    bool isEmpty() {
        return inicio == fim;
    }

    bool isFull() {
        return fim == MAX;
    }

    int size() {
        return fim - inicio;
    }

    void push_back(T x) {
        if (isFull())
            throw overflow_error("Deque cheio");
        data[fim++] = x;
    }

    void push_front(T x) {
        if (isFull())
            throw overflow_error("Deque cheio");
        if (inicio > 0) {
            data[--inicio] = x;
        } else {
            // desloca tudo
            for (int i = fim; i > inicio; i--)
                data[i] = data[i - 1];
            data[inicio] = x;
            fim++;
        }
    }

    T pop_back() {
        if (isEmpty())
            throw underflow_error("Deque vazio");
        return data[--fim];
    }

    T pop_front() {
        if (isEmpty())
            throw underflow_error("Deque vazio");
        return data[inicio++];
    }

    T front() {
        if (isEmpty())
            throw underflow_error("Deque vazio");
        return data[inicio];
    }

    T back() {
        if (isEmpty())
            throw underflow_error("Deque vazio");
        return data[fim - 1];
    }
};
