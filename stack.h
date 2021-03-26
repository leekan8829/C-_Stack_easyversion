#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

const int maxsize=6;

class stack{
    float data[maxsize];
    int top;
public:
    stack(void);
    ~stack(void);
    bool empty(void);
    void push(float a);
    float pop(void);
};

stack::stack(void){
    top=0;
    cout<<"Stack initialized."<<endl;
}
stack::~stack(void){
    cout<<"Stack destroyed."<<endl;
}

bool stack::empty(void){
    return top==0 ? true:false;
}
void stack::push(float a){
    if(top==maxsize){
        cout<<"stack is full"<<endl;
        return ;
    }
    cout<<"Push:"<<a<<endl;
    data[top]=a;
    top++;
}

float stack::pop(void){
    if(empty()==true){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    top--;
    cout<<"POP:"<<data[top]<<endl;
    return data[top];
}

#endif // STACK_H_INCLUDED
