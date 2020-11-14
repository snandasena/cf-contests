#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Queue
{
public:
    virtual ~Queue() {}

    void push(T x)
    {
        in.push(x);
    }

    void pop()
    {
        if (del.empty())
        {
            while (!in.empty())
            {
                del.push(in.top());
                in.pop();
            }
        }

        del.pop();
    }

    T peek()
    {
        if (del.empty())
        {
            while (!in.empty())
            {
                del.push(in.top());
                in.pop();
            }
        }

        return del.top();
    }

private:
    stack<T> in;
    stack<T> del;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Queue<int> queue;
    int q, t, x;
    cin >> q;
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> x;
            queue.push(x);
        }
        else if (t == 2)
        {
            queue.pop();
        }
        else
        {
            cout << queue.peek() << "\n";
        }
    }

    return 0;
}
