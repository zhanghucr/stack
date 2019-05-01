#include <cstdlib>
#include "stack.cpp"

int main(int argc, char *argv[])
{
    int i = 0;
    int data = 0;
    stack<int> *stack_obj = NULL;

    if (argc != 2)
    {
        cout << "CMD <size>" << endl;
        return -1;
    }

    int size = atoi(argv[1]);
    if (size <= 0)
    {
        cout << "invalid size " << size << endl;
        return -1;
    }
    
    stack_obj = new stack<int>(size);
    for (i = 0; i < size; i++)
    {
        cout << "input ";
        cin >> data;
        
        if (!stack_obj->push(data))
        {
            cout << "push  " << data <<"failed." << endl;
            break;
        }
        else
        {
            cout << "push  " << data << endl;
        }
    }

    while (stack_obj->pop(data))
    {
        cout << "pop   " << data << endl;
    }

    cout << endl;
    delete stack_obj;
    return 0;
}

