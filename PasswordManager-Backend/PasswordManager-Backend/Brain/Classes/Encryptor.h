﻿#pragma once
#include <string>

#define DDLL __declspec(dllexport)

class cEncryptor
{
public:
    DDLL static const char* EncryptString(std::wstring input);
    
    DDLL static void NextChar(std::wstring& input);

    DDLL static void InvertBits(std::wstring& input);

    DDLL static std::wstring Latinizer(std::wstring input);

    DDLL static void Ceasarion(std::wstring& input, const unsigned long long encrypt_shift);

    DDLL static std::wstring ToRomanNumeral(std::wstring input);

    DDLL static std::wstring ToHex(std::wstring input);

    DDLL static void CharAdder(const std::wstring& input, std::wstring pass_phrase);

    DDLL static void PythagoranTheoremE(std::wstring& input);

    DDLL static void ReverseString(std::wstring& input);

    DDLL static std::wstring LoLifier(std::wstring input);

    DDLL static void Circ(const std::wstring& input);

    DDLL static void BitReverser(std::wstring& input);
};
