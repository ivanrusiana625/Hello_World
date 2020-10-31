#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1, num2;
    int key;
    do
    {
        cout << "Enter operator either + or - or * or /: ";
        cin >> op;

        cout << "Enter First Number: ";
        cin >> num1;
        cout << "Enter Second Number: ";
        cin >> num2;

        switch(op)
        {
            case '+':
                cout <<"The Answer is " <<num1+num2 ;
            break;

            case '-':
                cout <<"The Answer is " <<num1-num2 ;
            break;

            case '*':
                cout <<"The Answer is " <<num1*num2 ;
            break;

            case '/':
                cout <<"The Answer is " <<num1/num2 ;
            break;

            default:
                cout << "Error! operator is not correct\n";
            break;
        }
        cout<<"\nDo you want to try again? 1 - Yes 0 - No: ";
        cin>>key;
    }while(key == 1);
return 0;
}