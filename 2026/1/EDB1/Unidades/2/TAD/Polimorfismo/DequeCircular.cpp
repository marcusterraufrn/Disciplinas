template <typename T, int MAX>
class DequeCircular : public Deque<T> {
private:
    T data[MAX];
    int inicio, fim, count;

public:
    DequeCircular() : inicio(0), fim(0), count(0) {}

    void push_back(T x) override {
        if (isFull()) throw overflow_error("Deque cheio");
        data[fim] = x;
        fim = (fim + 1) % MAX;
        count++;
    }

    void push_front(T x) override {
        if (isFull()) throw overflow_error("Deque cheio");
        inicio = (inicio - 1 + MAX) % MAX;
        data[inicio] = x;
        count++;
    }

    T pop_back() override {
        if (isEmpty()) throw underflow_error("Deque vazio");
        fim = (fim - 1 + MAX) % MAX;
        count--;
        return data[fim];
    }

    T pop_front() override {
        if (isEmpty()) throw underflow_error("Deque vazio");
        T val = data[inicio];
        inicio = (inicio + 1) % MAX;
        count--;
        return val;
    }

    T front() override {
        if (isEmpty()) throw underflow_error("Deque vazio");
        return data[inicio];
    }

    T back() override {
        if (isEmpty()) throw underflow_error("Deque vazio");
        return data[(fim - 1 + MAX) % MAX];
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
