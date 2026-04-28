int main() {
    FilaCircular<int, 5> fila;

    fila.enqueue(10);
    fila.enqueue(20);
    cout << fila.front() << endl; // 10

    fila.dequeue();
    cout << fila.front() << endl; // 20

    DequeCircular<int, 5> dq;

    dq.push_back(1);
    dq.push_front(2);

    cout << dq.front() << endl; // 2
    cout << dq.back() << endl;  // 1

    return 0;
}
