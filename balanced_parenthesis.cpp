#include <iostream>

using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;
        Stack(int size){
            this->size=size;
            arr=new int[size];
            this->top=-1;
        }
        void push(int num){
            if(top!=size-1){
                top++;
                arr[top]=num;
            }
            else{
                cout<<"Stack overflow";
            }
        }
        void pop(){
            arr[top]=-1;
            top--;
        }
        void printStack(){
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
        }
        bool isEmpty(){
            if (top==-1){
                return true;
            }
            return false;
        }
};


int main()
{
    string str="[()]{}{[()()]()}";
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    Stack pstack(len);
    for(int i=0;i<len;i++){
        if(str[i]=='[' || str[i]=='{' || str[i]=='('){
            pstack.push(str[i]);
        }
        else{

            if(str[i]=='}'){
                if((pstack.arr[pstack.top])=='{'){
                    pstack.pop();
                }
                else{
                    cout<<"unbalanced";
                    break;
                }
            }

            if(str[i]==']'){
                if((pstack.arr[pstack.top])=='['){
                    pstack.pop();
                }
                else{
                    cout<<"unbalanced";
                    break;
                }
            }
            if(str[i]==')'){
                if((pstack.arr[pstack.top])=='('){
                    pstack.pop();    
                }
                else{
                    cout<<"unbalanced";
                    break;
                }
            }
        }
    }
    if(pstack.isEmpty()){
        cout<<"balanced";
    }
    return 0;
}