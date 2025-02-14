#include <iostream>
#include "stack.h"
#include <cctype>

using namespace std;

int main()
{
    char ch;
    unsigned long po;
    Stack st;

    cout << "Please enter A to push to stack,\n";
    cout << "P to pop from stack, Q to quit.\n" << endl;

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n') //消耗输入缓冲区中的回车
            continue;

        switch (ch)
        {
            case 'A':
            case 'a':
                cout << "Enter a number you want to push to stack: " << endl;
                cin >> po;
                if (st.isfull())
                    cout << "Stack already full." << endl;
                else
                    st.push(po);
                break;
            
            case 'P':
            case 'p':
                if (st.isempty())
                    cout << "Stack is empty." << endl;
                else
                {
                    st.pop(po);
                    cout << po << " is poped." << endl;
                }
                break;
        }
        
        cout << "Please enter A to push to stack,\n";
        cout << "P to pop from stack, Q to quit.\n" << endl;
    }

    return 0;
}