template <typename T, int MAX>
class DequeLinear : public Deque<T> {
private:
    T data[MAX];
    int inicio, fim;

public:
    DequeLinear() : inicio(0), fim(0) {}

    void push_back(T x) override {
        if (isFull()) throw overflow_error("Deque cheio");
        data[fim++] = x;
    }

    void push_front(T x) override {
        if (isFull()) throw overflow_error("Deque cheio");

        if (inicio > 0) {
            data[--inicio] = x;
        } else {
            for (int i = fim; i > inicio; i--)
                data[i] = data[i - 1];
            data[inicio] = x;
            fim++;
        }
    }

    T pop_back() override {
        if (isEmpty()) throw underflow_error("Deque vazio");
        return data[--fim];
    }

    T pop_front() override {
        if (isEmpty()) throw underflow_error("Deque vazio");
        return data[inicio++];
    }

    T front() override {
        if (isEmpty()) throw underflow_error("Deque vazio");
        return data[inicio];
    }

    T back() override {
        if (isEmpty()) throw underflow_error("Deque vazio");
        return data[fim - 1];
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
