#include <iostream>
#include "Sandwich.h"

#define SHOP_NAME "Subway"
#define XBOX

//class Sandwich 
//{
//    public:
//        char name[32];
//        float price;
//        bool isHot;
//
//    public:
//        void Display()
//        {
//            std::cout << "Price: " << price << std::endl;
//        }
//};

//typedef double currency;
using currency = double;
using byte = unsigned char;



int main()
{
    f1();
    std::cout << SHOP_NAME << std::endl;

#ifdef _DEBUG
    std::cout << "debug\n";
#endif

#ifdef XBOX
    std::cout << "xbox\n";
#endif

    Sandwich s;
    s.Read();
    s.Write();

    
    int i = 5;
    char c = 23;
    
    i = c;

    float f = 23.4f;
    double d = 34.5;

    d = f;

    f = static_cast<float>(d);

    std::cout << sizeof(s);

    enum class Difficulty {
        Easy,
        Medium,
        Hard
    };


    Difficulty diff = Difficulty::Easy;
}

