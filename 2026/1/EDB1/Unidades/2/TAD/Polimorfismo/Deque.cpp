template <typename T>
class Deque {
public:
    virtual void push_back(T x) = 0;
    virtual void push_front(T x) = 0;
    virtual T pop_back() = 0;
    virtual T pop_front() = 0;
    virtual T front() = 0;
    virtual T back() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual int size() = 0;

    virtual ~Deque() {}
};
