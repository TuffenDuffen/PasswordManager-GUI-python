#pragma once
#include <string>

inline std::string ToRoman(const int number)
{
    if ((number < 0) || (number > 3999)) throw "insert value betwheen 1 and 3999";
    if (number < 1) return "";            
    if (number >= 1000) return "M," + ToRoman(number - 1000);
    if (number >= 900) return "CM," + ToRoman(number - 900); 
    if (number >= 500) return "D," + ToRoman(number - 500);
    if (number >= 400) return "CD," + ToRoman(number - 400);
    if (number >= 100) return "C," + ToRoman(number - 100);            
    if (number >= 90) return "XC," + ToRoman(number - 90);
    if (number >= 50) return "L," + ToRoman(number - 50);
    if (number >= 40) return "XL," + ToRoman(number - 40);
    if (number >= 10) return "X," + ToRoman(number - 10);
    if (number >= 9) return "IX," + ToRoman(number - 9);
    if (number >= 5) return "V," + ToRoman(number - 5);
    if (number >= 4) return "IV," + ToRoman(number - 4);
    if (number >= 1) return "I," + ToRoman(number - 1);
    throw "something bad happened";
}

inline int FromRoman(std::string input)
{
    auto map = new std::map<std::string, int>{
        {"M", 1000},
        {"CM", 900},
        {"D" , 500},
        {"CD", 400},
        {"C", 100},
        {"XC", 90},
        {"L", 50},
        {"XL", 40},
        {"X", 10},
        {"IX", 9},
        {"V", 5},
        {"IV", 4},
        {"I", 1}
    };
    
    int result = 0;

    auto nums = Split(input, ",");

    for (auto n : nums)
    {
        result += map->at(n);
    }
    
    return result;
}