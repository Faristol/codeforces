#include <iostream>
int main()
{
    int medium_q_meters;
    int high_q_meters;
    const float price_mq(35.5);
    const float price_hq{55.3};
    const float iva = 0.21;
    const int pres_expire = 30;
    std::cout
        << "Cuantos metros quieres instalar con calidad media? \n ";
    std::cin >>
        medium_q_meters;
    std::cout
        << "Cuantos metros quieres instalar con calidad alta? \n";
    std::cin >> high_q_meters;
    std::cout << "Calidad media metros "
              << medium_q_meters << std::endl;
    std::cout << "Calidad alta metros "
              << high_q_meters << std::endl;
    std::cout << "Import calidad media " << (medium_q_meters * price_mq) * (1 + iva) << std::endl;
    std::cout << "Import calidad alta " << (high_q_meters * price_hq) * (1 + iva) << std::endl;
}
