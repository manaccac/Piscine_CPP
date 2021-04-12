#include "Bureaucrat.hpp"

int main() {
    Bureaucrat a("Initial", 150);
    // Check error constructor
    for (int i = -5; i < 155; i++)
        if (i < 5 || i > 145) {
            std::cout << "Grade : " << i << " : ";
            try {
                Bureaucrat a = Bureaucrat("A", i);
            } catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
        }

    // Check error dec
    a = Bureaucrat("B", 5);

    std::cout << " ------ " << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << "Increment : " << a << " : " << std::endl;
        try {
            a.UpGrade();
        } catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    }

    // Check error inc
    a = Bureaucrat("C", 145);

    std::cout << " ------ " << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << "Decrement : " << a << " : " << std::endl;
        try {
            a.DownGrade();
        } catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    }

    std::cout << " ------ " << std::endl;

    Form f = Form("formulaire_a", 5, 5);

    a = Bureaucrat("D", 6);
    a.signForm(f);

    std::cout << " ------ " << std::endl;

    a.UpGrade();
    a.signForm(f);

    std::cout << " ------ " << std::endl;

    a.UpGrade();
    a.signForm(f);

    std::cout << " ------ " << std::endl;

    a.DownGrade();
    a.signForm(f);

    std::cout << " ------ " << std::endl;

    a.DownGrade();
    a.signForm(f);

    std::cout << " ------ " << std::endl;

    return 0;
}
