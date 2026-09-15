class Foo {
    atomic<int> step;

public:
    Foo() {
        step = 1;
    }

    void first(function<void()> printFirst) {
        printFirst();
        step = 2;
    }

    void second(function<void()> printSecond) {
        while (step != 2) {
            this_thread::yield();
        }
        printSecond();
        step = 3;
    }

    void third(function<void()> printThird) {
        while (step != 3) {
            this_thread::yield();
        }
        printThird();
    }
};