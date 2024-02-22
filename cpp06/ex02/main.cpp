#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int i = std::rand() % 3;
    switch (i) {
    case 0: return new A(); break;
    case 1: return new B(); break;
    case 2: return new C(); break;
    default: return nullptr; break;
    }
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout<<"type: A"<<std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout<<"type: B"<<std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout<<"type: C"<<std::endl;
}

void identify(Base& p)
{
	try {
        __unused A& a = dynamic_cast<A&>(p);
        std::cout << "type: A"<<std::endl;
        return;
    } catch (std::bad_cast&) {}

    try {
        __unused B& b = dynamic_cast<B&>(p);
        std::cout << "type: B"<<std::endl;
        return;
    } catch (std::bad_cast&) {}

    try {
        __unused C& c = dynamic_cast<C&>(p);
        std::cout << "type: C"<<std::endl;
        return;
    } catch (std::bad_cast&) {}
}

int main()
{
    std::srand(std::time(0));

    Base* objPtr = generate();
    identify(objPtr);

    Base& objRef = *generate();
    identify(objRef);

    delete objPtr;
}