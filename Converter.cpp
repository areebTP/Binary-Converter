#include <iostream>
#include <cmath>
#include <array>
#include "Converter.h"

int Converter::binTOdec16()
{
    std::array<int, 16>storage = { 0 };
    int decimal{};

    if (tolower(direction) == 'r')
    {
        int j = 0;// dummy counter
        for (size_t i{}; i < binary.size(); ++i)// for loop to extract non-space characters
        {
            if (binary[i] != ' ')
            {
                storage[j++] = binary[i] - '0';// convert char to int
            }
        }

        j = 0;
        for (int i = storage.size() - 1; i >= 0; i--)// now convert to decimal
        {
            decimal += storage[i] * pow(2, j++);
        }

        return decimal;
    }

    else if (tolower(direction) == 'l')
    {
        int j = storage.size() - 1;// dummy counter starting at size -1

        for (int i = binary.size() - 1; i >= 0; i--)// for loop to extract non-space characters
        {
            if (binary[i] != ' ')
            {
                storage[j--] = binary[i] - '0';// convert char to int
            }
        }

        j = 0;

        for (int i = storage.size() - 1; i >= 0; i--)// now convert to decimal
        {
            decimal += storage[i] * pow(2, j++);
        }

        return decimal;

    }
}

int64_t Converter::binTOdec32()
{
    std::array<int64_t, 32>storage = { 0 };
    int64_t decimal{};

    if (tolower(direction) == 'r')
    {
        int j = 0;// dummy counter
        for (size_t i{}; i < binary.size(); ++i)// for loop to extract non-space characters
        {
            if (binary[i] != ' ')
            {
                storage[j++] = binary[i] - '0';// convert char to int
            }
        }

        j = 0;
        for (int i = storage.size() - 1; i >= 0; i--)// now convert to decimal
        {
            decimal += storage[i] * pow(2, j++);
        }

        return decimal;
    }

    else if (tolower(direction) == 'l')
    {
       int j = storage.size()-1;// dummy counter starting at size -1

       for (int i=binary.size()-1; i >= 0; i--)// for loop to extract non-space characters
       {
           if (binary[i] != ' ')
           {
               storage[j--] = binary[i] - '0';// convert char to int
           }
       }

       j = 0;

       for (int i=storage.size()-1; i >= 0; i--)// now convert to decimal
       {
           decimal += storage[i] * pow(2, j++);
       }

       return decimal;

    }
}

void Converter::decTOhex(int64_t dec_num)
{
    int  r{};
    std::string hexdec_num = "";
    char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

    while (dec_num > 0)
    {
        r = dec_num % 16;
        hexdec_num = hex[r] + hexdec_num;
        dec_num = dec_num / 16;
    }
    std::cout << hexdec_num << "\n";
}