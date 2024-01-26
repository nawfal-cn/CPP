// #include "Bureaucrat.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("John", 30);
        
        Intern intern;
        AForm *form1 = intern.makeForm("Shrubbery Creation", "home");
        AForm *form2 = intern.makeForm("Robotomy Request", "syborg");
        AForm *form3 = intern.makeForm("Presidential Pardon", "criminal");
        // AForm *form4 = intern.makeForm("Presidential Pardon", "criminal");

        bureaucrat.signForm(*form1);
        bureaucrat.signForm(*form2);
        bureaucrat.signForm(*form3);

        bureaucrat.executeForm(*form1);
        bureaucrat.executeForm(*form2);
        bureaucrat.executeForm(*form3);

        delete form1;
        delete form2;
        delete form3;
        // delete form4;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    return 0;
}