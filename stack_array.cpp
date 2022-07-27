#include<iostream>
#include<string>

using namespace std;

class Stack
{
    private:
        int top;
        int arr[5];
    public:
        Stack ()
        {
            top=-1;
            for(int i=0;i<5;i++)
            {
                arr[i] = 0;
            }
        }

        bool isEmpty()
        {
            if(top==-1)
                return true;
            else
                return false;
        }

        bool isFull()
        {
            if(top==4)
                return true;
            else
                return false;
        }

        void push(int val)
        {
            if(isFull())
            {
                cout << "Stack Overflow" << endl;
            }
            else
            {
                top++;
                arr[top] = val;
                cout << "Value inserted" <<  endl;
            }
        }

        int pop()
        {
            if(isEmpty())
            {
                cout << "Stack Underflow" << endl;
                return 0;
            }
            else
            {
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return popValue;
            }
        }

        int peek(int pos)
        {
            if(isEmpty())
            {
                cout << "Stack Underflow" << endl;
            }
            else
            {
                return arr[pos];
            }
        }

        int count()
        {
            return (top+1);
        }

        void change(int pos, int value)
        {
            arr[pos] = value;
            cout << "Value changed at position " << pos << " is " << arr[pos] << endl;
        }
        void display()
        {
            cout << "All values in stack are: " << endl;
            for(int i=4;i>=0;i--)
            {
                cout << arr[i] << endl;
            }
        }

};

int main()
{
    Stack s1;
    int value, pos, option;

    do
    {
        cout << "What operation do you want to perform? Press 0 to exit." << endl; 
        cout << "1. Push() " << endl;
        cout << "2. Pop() " << endl;
        cout << "3. Peek() " << endl;
        cout << "4. isEmpty() " << endl;
        cout << "5. isFull() " << endl;
        cout << "6. count() " << endl;
        cout << "7. change() " << endl;
        cout << "8. display() " << endl;
        cout << "9. Clear Screen " << endl;

        cin >> option;
        switch(option)
        {
            case 0:
                    break;
            case 1: cout << "Enter value to insert into stack: ";
                    cin >> value;
                    s1.push(value);
                    break;
            case 2:
                    cout << "Popped value: " << s1.pop() << endl;
                    break;
            case 3:
                    cout << "Enter position to access: ";
                    cin >> pos;
                    cout << "Item at position " << pos << " is: " << s1.peek(pos) << endl;
                    break;
            case 4:
                    if(s1.isEmpty())
                    {
                        cout << "Stack is empty" << endl;
                    }
                    else
                    {
                        cout << "Stack is not empty" << endl;
                    }
                    break;
            case 5: 
                    if(s1.isFull())
                    {
                        cout << "Stack is full" << endl;
                    }
                    else
                    {
                        cout << "Stack is not full" << endl;
                    }
                    break;
            case 6:
                    cout << "No of elements in stack is: " << s1.count() << endl;
                    break;
            case 7: 
                    cout << "Enter position to change value: ";
                    cin >> pos;
                    cout << "Enter value: ";
                    cin >> value;
                    s1.change(pos, value);
                    break;
            case 8: 
                    cout << "Display function called" << endl;
                    s1.display();
                    break;
            case 9:
                    system("cls");
                    break;
            default:
                    cout << "Enter correct choice!" << endl;
        }
    } while (option!=0);

    return 0;
}