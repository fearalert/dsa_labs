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

std::string PostfixToPrefix(std::string Post_Exp){
    std::stack<std::string> exp;

    int length = Post_Exp.size();

    for(int i = 0; i < length; i++){
        if(isOperator(Post_Exp[i])){
            std::string operand1= exp.top();
            exp.pop();
            std::string operand2= exp.top();
            exp.pop();
            std::string value = Post_Exp[i]+operand2+operand1;
            exp.push(value);
        }
        else{
            std::string operand(1, Post_Exp[i]);
            exp.push(operand);
        }
    }
    std::string ans = "";
        while (!exp.empty()) {
            ans += exp.top();
            exp.pop();
        }
        return ans;
}

int main()
{
    std::string prefix;
    std::string postfix;
    std::cout << "Enter a POSTFIX Expression: " << std::endl;
    std::cin >> postfix;
    std::cout << "The entered POSTFIX Expression is : " << postfix << std::endl;

    prefix = PostfixToPrefix(postfix);

    std::cout << "PREFIX Expression: " << prefix << std::endl;

    return 0;
}