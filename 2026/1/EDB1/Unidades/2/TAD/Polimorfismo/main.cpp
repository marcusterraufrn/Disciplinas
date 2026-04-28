int main() {
    // Polimorfismo com Fila
    Fila<int>* f = new FilaCircular<int, 5>();

    f->enqueue(10);
    f->enqueue(20);
    f->enqueue(30);

    cout << "Front: " << f->front() << endl;
    cout << "Removido: " << f->dequeue() << endl;
    cout << "Novo front: " << f->front() << endl;

    delete f;

    cout << "---------------------" << endl;

    // Polimorfismo com Deque
    Deque<int>* d = new DequeCircular<int, 5>();

    d->push_back(1);
    d->push_front(2);
    d->push_back(3);

    cout << "Front: " << d->front() << endl;
    cout << "Back: " << d->back() << endl;

    cout << "Pop front: " << d->pop_front() << endl;
    cout << "Pop back: " << d->pop_back() << endl;

    delete d;

    return 0;
}
