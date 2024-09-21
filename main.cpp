#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];                          //NELEMENTS helyett N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa";                //' ' helyett "" és a sor végéről hiányzik a ;
    for (int i = 0; i < N_ELEMENTS; i++)                   // for ciklusból hiányzik i < N_ELEMeNTS; i++
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)                   // for ciklusban i helyett i < N_ELEMENTS;
    {
        std::cout << "Ertek:";                             // hiányzik a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++)                   // N_ELEMENTS végén , van helyette ; kell
    {
        atlag += b[i];                                     // ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;

    std::cout << "Itt járt a Cserók";
}
