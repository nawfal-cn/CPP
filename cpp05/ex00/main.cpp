#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John Doe", 50);
        std::cout << bureaucrat << std::endl;

        bureaucrat.increaseGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.decreaseGrade();
        std::cout << bureaucrat << std::endl;

        // Attempting to create a bureaucrat with an invalid grade
        Bureaucrat invalidBureaucrat("Invalid", 160);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}