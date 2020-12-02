#include <iostream>
#include <random>

using namespace std;

int main()
{

    random_device a;
    mt19937 generujemy(a());
    uniform_int_distribution<> zakres(1, 6);

    return zakres(generujemy);
}
