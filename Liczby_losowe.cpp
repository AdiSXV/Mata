#include <iostream>
#include <random>

using namespace std;

int main()
{

    random_device b;
    mt19937 generujemy(b());
    uniform_int_distribution<> zakres(1, 6);

    return zakres(generujemy);
}
