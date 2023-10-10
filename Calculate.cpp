#include <iostream> 

void getIntInputNumber(int& x, int& y);
void getMenuMatematicFunction();
int addFunction();
int subFunction();
int multFunction();
int divFunction();

void getIntInputNumber(int& x, int& y) {                       // - Get function data user  

     std::cout << "\n";
     std::cout << "Enter an integer value: " << '\n';
     std::cin >> x;

     std::cout << "Enter a new integer value: " << '\n';
     std::cin >> y;
}

int addFunction() {                                            // - Function of the sum

    int x, y;                                                  // - Variabels local scope
    getIntInputNumber(x, y); 

    int result = x + y;
    return result; 
}

int subFunction() {                                            // - Function of the subtraction 

    int x, y;                                                  // - Variables local scope
    getIntInputNumber(x,y);
    
    int result = x - y;
    return result;
}

int multFunction(){

    int x, y;
    getIntInputNumber(x,y);

    int result = x * y;
    return result;
}

int divFunction() {

    int x, y;
    getIntInputNumber(x,y);

    int result = x * y;
    return result;
}

// - funcão escolha operador 
void getMenuMatematicFunction(){

    std::cout << "Choice Matematic operator: " << '\n';
    std::cout << '\n';

    std::cout << "=> Press 1 = Adiction: " << '\n'   
              << "=> Press 2 = Subtration: " << '\n'  
              << "=> Press 3 = Multiplication: " << '\n' 
              << "=> Press 4 = Division: " << '\n';

    int choiceOperator{};
    std::cin >> choiceOperator;

    int resultGetFun{};

    // - crirar uma expressoão para tratar erros de entrada de dados.

    if (choiceOperator == 1) {
        
        resultGetFun = addFunction();
        std::cout << "The sum of the values is: " << resultGetFun << '\n';

    } else if (choiceOperator == 2) {
        
        resultGetFun = subFunction(); 
        std::cout << "The subtration of the values is: " << resultGetFun << '\n';

    } else if (choiceOperator == 3) {
        
        resultGetFun = multFunction(); 
        std::cout << "The multiplication of the values is: " << resultGetFun << '\n'; 
    
    } else if (choiceOperator == 4) {

        resultGetFun = divFunction(); 
        std::cout << "The divsion of values is: " << resultGetFun << '\n';
    
    } else {
        
        std::cout << "Operador desconhecido " << '\n';
    } 
  
}

int main() {

     std::cout << "****************************************************************************************\n";
     std::cout << "*                                                                                      *\n";
     std::cout << "*                                                                                      *\n";
     std::cout << "*                                    CALCULATE MACHINE                                 *\n";
     std::cout << "*                                                                                      *\n";
     std::cout << "*                                                                                      *\n";
     std::cout << "****************************************************************************************\n";
     
     getMenuMatematicFunction();
     // - var value get value of the getIntInputNumber() 
     //int value{getIntInputNumber()};

    //std::cout << "The value is: " << value << '\n';    
    
     return 0;
}