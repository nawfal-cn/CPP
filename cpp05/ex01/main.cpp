#include "Bureaucrat.hpp"

int main() {

    try {
        Bureaucrat bureaucrat("John", 50);
        Form form("Income Tax", 30, 40);

        std::cout << "-------------------------------" << std::endl;
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        std::cout << "-------------------------------" << std::endl;
        bureaucrat.signForm(form);
        std::cout << "-------------------------------" << std::endl;
        // Trying to sign the form with a bureaucrat of no grade
        Bureaucrat noGradeBureaucrat;
        Form form2("TVA", 15, 60);
        noGradeBureaucrat.signForm(form2);
        std::cout << "-------------------------------" << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}