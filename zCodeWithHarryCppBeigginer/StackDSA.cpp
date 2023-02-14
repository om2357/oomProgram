#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int arr[5];

public:
    stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
             arr[i] = 0; //first time stack is empty thats why i use this
        }
    }
           
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (top == 4) //top value is 4 that's why equating by 4
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "stack is Full\n";
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "stack underflow\n";
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    int count()
    {
        return (top + 1);
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "stack Underflow\n";
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }
    void change(int pos, int val)
    {
        cout << "value change at location" << pos << endl;
    }
    void display()
    {
        cout << "all value in the stack are\n";
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    stack s1;
    int option, postion, value;

    do
    {
        cout << "what option do you want to perform ? select option number\n";
        cout << "1 : push()" << endl;
        cout << "2 : pop()" << endl;
        cout << "3 : isEmpty()" << endl;
        cout << "4 : isFull()" << endl;
        cout << "5 : peek()" << endl;
        cout << "6 : count()" << endl;
        cout << "7 : change()" << endl;
        cout << "8 : display()" << endl;
        cout << "9 : clear screen()" << endl
             << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter an item to push in the stack" << endl;
            cin >> value;
            s1.push(value);
            break;

        case 2:
            cout << "pop Funtion called - poped value :" << s1.pop() << endl;
            break;
        case 3:
            if (s1.isEmpty())
                cout << "stack is empty" << endl;
            else
            {
                cout << "stack is not full" << endl;
            }

            break;
        case 4:

            if (s1.isFull())
                cout << "stack is full" << endl;
            else
            {
                cout << "stack is not full" << endl;
            }

            break;

        case 5:

            cout << "enter postion of item you want to peek : " << endl;
            cin >> postion;
            cout << "peek funtion called - " << endl
                 << s1.peek(option) << endl;

            break;
        case 6:
            cout << "Count Funtion Called - Number of item in the Stack are :" << s1.count() << endl;
            break;
        case 7:
            cout << "change Funtion Called - " << endl;
            cout << "Enter postion of item you want to change : ";
            cin >> postion;
            cout << endl;
            cout << "Enter value of item you want to channge : ";
            cin >> value;
            s1.change(postion, value);
            break;
        case 8:
            cout << "Display Funtion Called - " << endl;
            s1.display();
            break;
        case 9:
            system("cls");
        default:
            cout << "Enter proper Optoion Number " << endl;

            break;
        }
    } while (option != 0);

    return 0;
}
