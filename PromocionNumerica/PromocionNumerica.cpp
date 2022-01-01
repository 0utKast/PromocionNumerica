

/*#include <iostream>

void printInt(int x)
{
    std::cout << x;
}


#include <iostream>

void printDouble(double d)
{
    std::cout << d;
}

int main()
{
    printDouble(5.0); // no necesita conversión
    printDouble(4.0f); // promoción numérica de float a double

    return 0;
}*/



#include <iostream>

void printInt(int x)
{
    std::cout << x<<'\n';
}

int main()
{
    printInt(8);

    short s{ 7 }; // no hay un sufijo literal para short, así que usamos una variable
    printInt(s); // promoción numérica de short a int

    printInt('c'); // promoción numérica de char a int
    printInt(true); // promoción numérica de bool a int

    return 0;
}






