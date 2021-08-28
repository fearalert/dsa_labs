#include <iostream>
#include <stack>
// using namespace std;

bool isOperator(char a){
    switch (a)
    {
        case '+':
        case '-':
        case '/':
        case '*':

        return true;
    }
    return false;
}

bool isOperand(char e){
    if((e>='a' && e <='z') || (e>='A' && e<='Z')){
        return true;
    }
    else{
        return false;
    }
}

std::string PrefixToPostfix(std::string PrefixExpression){
    std::stack<std::string> exp;

    int length = PrefixExpression.size();

    for(int i=length-1; i>=0; i--){
        if(isOperator(PrefixExpression[i])){
            std::string operand1= exp.top();
            exp.pop();
            std::string operand2= exp.top();
            exp.pop();
            std::string value = operand1+operand2+PrefixExpression[i];
            exp.push(value);
        }
        else{
            std::string operand(1, PrefixExpression[i]);
            exp.push(operand);
        }
    }
return exp.top();
}

int main()
{
    std::string prefix;
    std::string postfix;
    std::cout << "Enter a PREFIX Expression: " << std::endl;
    std::cin >> prefix;
    std::cout << "The entered PREFIX Expression is : " << prefix << std::endl;

    postfix = PrefixToPostfix(prefix);

    std::cout << "POSTFIX Expression: " << postfix << std::endl;

    return 0;
}