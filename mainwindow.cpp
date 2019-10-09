#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <stdexcept>
#include <chrono>
#include <thread>
#include <QTimer>
#include <QLabel>
#include <QMovie>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTimer>
#include <Qt>
#include <vector>
#include <fstream>
#include <ios>
#include <QtCore>
#include <QApplication>

//GitControl
//Account
std::string username="Admin";
std::string password="123456seven";

//csv
void writeAccounts(std::string input1, std::string input2, std::string input3, std::string input4){
    std::fstream fout;
    fout.open("p2KaLmIg3kB8fZp6Tm2qbi7dss03C42a", std::ios::out | std::ios::app);
            // Insert the data to file
            fout << input1 << ", "
                 << input2 << ", "
                 << input3 << ", "
                 << input4
                 << "\n";
}
//csv

//Password Generator
//Start

std::string allCaseRandomString(int n)
{
    char alphabet[52] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z',
                          'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z',
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 52];

    return res;
}

std::string lowerCaseRandomString(int n)
{
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z',
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 26];

    return res;
}

std::string upperCaseRandomString(int n)
{
    char alphabet[26] = {
                          'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z',
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 26];
    return res;
}

std::string numericRandomString(int n)
{
    char alphabet[10] = {
                          '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 10];

    return res;
}

std::string lowerCaseNumericRandomString(int n)
{
    char alphabet[36] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z',
                          '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 36];

    return res;
}

std::string lowerCaseNumericSpecialCharRandomString(int n)
{
    char alphabet[57] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z',
                          '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                          '~', '`', '"', '{', '}', '[', ']', '/', '!',
                          '@', '#', '$', '%', '^', '&', '*', '(', ')',
                          '.', '+', '-'
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 57];

    return res;
}

std::string lowerCaseSpecialCharRandomString(int n)
{
    char alphabet[47] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z',
                          '~', '`', '"', '{', '}', '[', ']', '/', '!',
                          '@', '#', '$', '%', '^', '&', '*', '(', ')',
                          '.', '+', '-'
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 47];

    return res;
}


std::string upperCaseSpecialCharRandomString(int n)
{
    char alphabet[47] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z',
                          '~', '`', '"', '{', '}', '[', ']', '/', '!',
                          '@', '#', '$', '%', '^', '&', '*', '(', ')',
                          '.', '+', '-'
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 47];

    return res;
}

std::string allCaseSpecialCharRandomString(int n)
{
    char alphabet[73] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z',
                          'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z',
                          '~', '`', '"', '{', '}', '[', ']', '/', '!',
                          '@', '#', '$', '%', '^', '&', '*', '(', ')',
                          '.', '+', '-'
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 73];

    return res;
}

std::string allCaseNumericRandomString(int n)
{
    char alphabet[62] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z',
                          'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z',
                          '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 62];

    return res;
}

std::string upperCaseNumericRandomString(int n)
{
    char alphabet[36] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z',
                          '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 36];

    return res;
}

std::string upperCaseNumericSpecialCharRandomString(int n)
{
    char alphabet[57] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z',
                          '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                          '~', '`', '"', '{', '}', '[', ']', '/', '!',
                          '@', '#', '$', '%', '^', '&', '*', '(', ')',
                          '.', '+', '-'
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 57];

    return res;
}

std::string specialCharRandomString(int n)
{
    char alphabet[21] = {
                          '~', '`', '"', '{', '}', '[', ']', '/', '!',
                          '@', '#', '$', '%', '^', '&', '*', '(', ')',
                          '.', '+', '-'
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 21];

    return res;
}


std::string completeRandomString(int n)
{
    char alphabet[83] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z',
                          '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                          'A', 'B', 'C', 'D', 'E', 'F', 'G',
                          'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                          'V', 'W', 'X', 'Y', 'Z',
                          '~', '`', '"', '{', '}', '[', ']', '/', '!',
                          '@', '#', '$', '%', '^', '&', '*', '(', ')',
                          '.', '+', '-'
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 83];

    return res;
}

std::string numericSpecialCharRandomString(int n)
{
    char alphabet[31] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                          '~', '`', '"', '{', '}', '[', ']', '/', '!',
                          '@', '#', '$', '%', '^', '&', '*', '(', ')',
                          '.', '+', '-'
                           };

    std::string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % 31];

    return res;
}

//End


//Brute Force Algorithm
//Start

#include <ctime>

std::string crackPassword(std::string pass);
long long int attempt;
clock_t start_t, end_t;


std::string crackPassword(std::string pass){
    int digit[7],alphabetSet=1,passwordLength=1;
    start_t = clock();
    QApplication::processEvents();
    std::string test,alphabet;
    while(1){

            switch(passwordLength){
                case 1:
                while(alphabetSet<5){
                    QApplication::processEvents();
                                    switch(alphabetSet){
                                        case 1 : alphabet = "-0123456789";
                                                 break;
                                        case 2 : alphabet = "-abcdefghijklmnopqrstuvwxyz";
                                                 break;
                                        case 3 : alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                 break;
                                        case 4 : alphabet = "-@./,'{}#$^!~`[]()&*+=:;% ";
                                                 break;
                                        }

                    for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    attempt++;
//                                                    QApplication::processEvents();
                                                    if(attempt%2500000==0) std::cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++){
//                                                        QApplication::processEvents();
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];
                                                    }
                                                    if(pass.compare(test)==0){end_t = clock(); std::stringstream s; s<<"Password cracked: "<<test<<std::endl<<"Completion time: "<<(double)(end_t - start_t)/1000<<" seconds"<<std::endl<< "Number of attempts : " << attempt << std::endl ; return s.str();}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 2:
                    alphabetSet=1;
                    while(alphabetSet<9){
                        QApplication::processEvents();
                                        switch(alphabetSet){
                                            case 1 : alphabet = "-0123456789";
                                                     break;
                                            case 2 : alphabet = "-abcdefghijklmnopqrstuvwxyz";
                                                     break;
                                            case 3 : alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 4 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 5 : alphabet = "-@./,'{}#$^!~`[]()&*+=:;% ";
                                                     break;
                                            case 6 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
                                                     break;
                                            case 7 : alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 8 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                                     break;
                                            }



                         for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                             for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                 QApplication::processEvents();
                                                    attempt++;
                                                    if(attempt%2500000==0) std::cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++){
                                                        QApplication::processEvents();
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];}
                                                    if(pass.compare(test)==0){end_t = clock(); std::stringstream s; s<<"Password cracked: "<<test<<std::endl<<"Completion time: "<<(double)(end_t - start_t)/1000<<" seconds"<<std::endl<< "Number of attempts : " << attempt << std::endl ; return s.str();}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 3:
                    alphabetSet=1;
                    while(alphabetSet<11){
                        QApplication::processEvents();
                                        switch(alphabetSet){
                                            case 1 : alphabet = "-0123456789";
                                                     break;
                                            case 2 : alphabet = "-abcdefghijklmnopqrstuvwxyz";
                                                     break;
                                            case 3 : alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 4 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 5 : alphabet = "-@./,'{}#$^!~`[]()&*+=:;% ";
                                                     break;
                                            case 6 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
                                                     break;
                                            case 7 : alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 8 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                                     break;
                                            case 9 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 10 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                                     break;
                                        }
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    QApplication::processEvents();
                                                    attempt++;
                                                    if(attempt%2500000==0) std::cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++){
                                                        QApplication::processEvents();
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];}
                                                    if(pass.compare(test)==0){end_t = clock(); std::stringstream s; s<<"Password cracked: "<<test<<std::endl<<"Completion time: "<<(double)(end_t - start_t)/1000<<" seconds"<<std::endl<< "Number of attempts : " << attempt << std::endl ; return s.str();}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 4:
                    alphabetSet=1;
                    while(alphabetSet<11){
                        QApplication::processEvents();
                                        switch(alphabetSet){
                                            case 1 : alphabet = "-0123456789";
                                                     break;
                                            case 2 : alphabet = "-abcdefghijklmnopqrstuvwxyz";
                                                     break;
                                            case 3 : alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 4 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 5 : alphabet = "-@./,'{}#$^!~`[]()&*+=:;% ";
                                                     break;
                                            case 6 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
                                                     break;
                                            case 7 : alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 8 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                                     break;
                                            case 9 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                                     break;
                                            case 10 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                                     break;
                                        }
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    QApplication::processEvents();
                                                    attempt++;
                                                    if(attempt%2500000==0) std::cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++){
                                                        QApplication::processEvents();
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];}
                                                    if(pass.compare(test)==0){end_t = clock(); std::stringstream s; s<<"Password cracked: "<<test<<std::endl<<"Completion time: "<<(double)(end_t - start_t)/1000<<" seconds"<<std::endl<< "Number of attempts : " << attempt << std::endl ; return s.str();}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 5:
                    alphabetSet=1;
                    while(alphabetSet<11){
                        QApplication::processEvents();
                        switch(alphabetSet){
                            case 1 : alphabet = "-0123456789";
                                     break;
                            case 2 : alphabet = "-abcdefghijklmnopqrstuvwxyz";
                                     break;
                            case 3 : alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 4 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 5 : alphabet = "-@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                            case 6 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
                                     break;
                            case 7 : alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 8 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                            case 9 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 10 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                        }
                                for(digit[4]=0;digit[4]<alphabet.length();digit[4]++)
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    QApplication::processEvents();
                                                    attempt++;
                                                    if(attempt%2500000==0) std::cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++){
                                                        QApplication::processEvents();
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];}
                                                    if(pass.compare(test)==0){end_t = clock(); std::stringstream s; s<<"Password cracked: "<<test<<std::endl<<"Completion time: "<<(double)(end_t - start_t)/1000<<" seconds"<<std::endl<< "Number of attempts : " << attempt << std::endl ; return s.str();}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 6:
                    alphabetSet=1;
                    while(alphabetSet<11){
                        QApplication::processEvents();
                        switch(alphabetSet){
                            case 1 : alphabet = "-0123456789";
                                     break;
                            case 2 : alphabet = "-abcdefghijklmnopqrstuvwxyz";
                                     break;
                            case 3 : alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 4 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 5 : alphabet = "-@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                            case 6 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
                                     break;
                            case 7 : alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 8 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                            case 9 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 10 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                        }
                            for(digit[5]=0;digit[5]<alphabet.length();digit[5]++)
                                for(digit[4]=0;digit[4]<alphabet.length();digit[4]++)
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    QApplication::processEvents();
                                                    attempt++;
                                                    if(attempt%2500000==0) std::cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++){QApplication::processEvents();
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];}
                                                    if(pass.compare(test)==0){end_t = clock(); std::stringstream s; s<<"Password cracked: "<<test<<std::endl<<"Completion time: "<<(double)(end_t - start_t)/1000<<" seconds"<<std::endl<< "Number of attempts : " << attempt << std::endl ; return s.str();}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 7:
                    alphabetSet=1;
                    while(alphabetSet<11){
                        QApplication::processEvents();
                        switch(alphabetSet){
                            case 1 : alphabet = "-0123456789";
                                     break;
                            case 2 : alphabet = "-abcdefghijklmnopqrstuvwxyz";
                                     break;
                            case 3 : alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 4 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 5 : alphabet = "-@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                            case 6 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
                                     break;
                            case 7 : alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 8 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                            case 9 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 10 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                        }
                        for(digit[6]=0;digit[6]<alphabet.length();digit[6]++)
                            for(digit[5]=0;digit[5]<alphabet.length();digit[5]++)
                                for(digit[4]=0;digit[4]<alphabet.length();digit[4]++)
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    QApplication::processEvents();
                                                    attempt++;
                                                    if(attempt%2500000==0) std::cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++){
                                                        QApplication::processEvents();
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];}
                                                    if(pass.compare(test)==0){end_t = clock(); std::stringstream s; s<<"Password cracked: "<<test<<std::endl<<"Completion time: "<<(double)(end_t - start_t)/1000<<" seconds"<<std::endl<< "Number of attempts : " << attempt << std::endl ; return s.str();}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
                case 8:
                    alphabetSet=1;
                    while(alphabetSet<11){
                        QApplication::processEvents();
                        switch(alphabetSet){
                            case 1 : alphabet = "-0123456789";
                                     break;
                            case 2 : alphabet = "-abcdefghijklmnopqrstuvwxyz";
                                     break;
                            case 3 : alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 4 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 5 : alphabet = "-@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                            case 6 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
                                     break;
                            case 7 : alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 8 : alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                            case 9 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                                     break;
                            case 10 : alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@./,'{}#$^!~`[]()&*+=:;% ";
                                     break;
                        }
                    for(digit[7]=0;digit[7]<alphabet.length();digit[7]++)
                        for(digit[6]=0;digit[6]<alphabet.length();digit[6]++)
                            for(digit[5]=0;digit[5]<alphabet.length();digit[5]++)
                                for(digit[4]=0;digit[4]<alphabet.length();digit[4]++)
                                    for(digit[3]=0;digit[3]<alphabet.length();digit[3]++)
                                        for(digit[2]=0;digit[2]<alphabet.length();digit[2]++)
                                            for(digit[1]=0;digit[1]<alphabet.length();digit[1]++)
                                                for(digit[0]=1;digit[0]<alphabet.length();digit[0]++){
                                                    QApplication::processEvents();
                                                    attempt++;
                                                    if(attempt%2500000==0) std::cout << ".";
                                                    test=alphabet[digit[0]];
                                                    for(int i=1;i<passwordLength;i++){QApplication::processEvents();
                                                        if(alphabet[digit[i]]!='-')test+=alphabet[digit[i]];}
                                                    if(pass.compare(test)==0){end_t = clock(); std::stringstream s; s<<"Password cracked: "<<test<<std::endl<<"Completion time: "<<(double)(end_t - start_t)/1000<<" seconds"<<std::endl<< "Number of attempts : " << attempt << std::endl ; return s.str();}
                                                    }
                                                    alphabetSet++;
                    }
                    break;
            }
            passwordLength++;
            QApplication::processEvents();
    }
}

//End


//Text Encryption Algorithms
//Start

std::string textROT13(std::string text)
{
    std::transform(
            begin(text), end(text), begin(text),
            [] (char c) -> char {
                if (not std::isalpha(c))
                    return c;

                char const pivot = std::isupper(c) ? 'A' : 'a';
                return (c - pivot + 13) % 26 + pivot;
            });
        return text;
}


std::string textCaesarCipher(std::string text, int s)
{
    std::string result = "";
    for (int i=0;i<text.length();i++)
    {
        char ch = text[i];
            if(ch >= 'a' && ch <= 'z'){
              ch = ch + s;
              if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
              }
              result+=ch;
            }
            else if(ch >= 'A' && ch <= 'Z'){
              ch = ch + s;
              if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
              }
              result+=ch;
            }
            else {
                result+=text[i];
            }
    }
    return result;
}

std::string caesarCipherText(std::string text, int s)
{
    std::string result = "";
    for (int i=0;i<text.length();i++)
    {
        char ch = text[i];
        if(ch >= 'a' && ch <= 'z'){
              ch = ch - s;
              if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
              }
              result+=ch;
            }
        else if(ch >= 'A' && ch <= 'Z'){
              ch = ch - s;
              if(ch > 'a'){
                ch = ch + 'Z' - 'A' + 1;
              }
              result+=ch;
            }
        else result+=text[i];
    }
    return result;

}

std::string textAtbash(std::string input){
    std::string result="";

    for (int i=0; i<input.length(); i++){

        switch(input[i])
        {
            case 'A': result+="Z";	break;
            case 'a': result+="z";	break;
            case 'B': result+="Y";	break;
            case 'b': result+="y";	break;
            case 'C': result+="X";	break;
            case 'c': result+="x";	break;
            case 'D': result+="W";	break;
            case 'd': result+="w";	break;
            case 'E': result+="V";	break;
            case 'e': result+="v";	break;
            case 'F': result+="U";	break;
            case 'f': result+="u";	break;
            case 'G': result+="T";	break;
            case 'g': result+="t";	break;
            case 'H': result+="S";	break;
            case 'h': result+="s";	break;
            case 'I': result+="R";	break;
            case 'i': result+="r";	break;
            case 'J': result+="Q";	break;
            case 'j': result+="q";	break;
            case 'K': result+="P";	break;
            case 'k': result+="p";	break;
            case 'L': result+="O";	break;
            case 'l': result+="o";	break;
            case 'M': result+="N";	break;
            case 'm': result+="n";	break;
            case 'N': result+="M";	break;
            case 'n': result+="n";	break;
            case 'O': result+="L";	break;
            case 'o': result+="l";	break;
            case 'P': result+="K";	break;
            case 'p': result+="k";	break;
            case 'Q': result+="J";	break;
            case 'q': result+="j";	break;
            case 'R': result+="I";	break;
            case 'r': result+="i";	break;
            case 'S': result+="H";	break;
            case 's': result+="h";	break;
            case 'T': result+="G";	break;
            case 't': result+="g";	break;
            case 'U': result+="F";	break;
            case 'u': result+="f";	break;
            case 'V': result+="E";	break;
            case 'v': result+="e";	break;
            case 'W': result+="D";	break;
            case 'w': result+="d";	break;
            case 'X': result+="C";	break;
            case 'x': result+="c";	break;
            case 'Y': result+="B";	break;
            case 'y': result+="b";	break;
            case 'Z': result+="A";	break;
            case 'z': result+="a";	break;
            default: result+=input[i];
        }

    }

    return result;
}

std::string textBinary(std::string input){
    std::string  result="";
    for (char&_char : input){
        result+=std::bitset<8>(_char).to_string();
    }
    return result;
}

std::string binaryText(std::string input){
    std::stringstream sstream(input);
        std::string output;
        while(sstream.good())
        {
            std::bitset<8> bits;
            sstream >> bits;
            char c = char(bits.to_ulong());
            output += c;
        }

        return output;
}


std::string textHex(const std::string& input)
{
    static const char* const lut = "0123456789ABCDEF";
    size_t len = input.length();

    std::string output;
    output.reserve(2 * len);
    for (size_t i = 0; i < len; ++i)
    {
        const unsigned char c = input[i];
        output.push_back(lut[c >> 4]);
        output.push_back(lut[c & 15]);
    }
    return output;
}

std::string hexText(const std::string& input)
{
    static const char* const lut = "0123456789ABCDEF";
    size_t len = input.length();
    if (len & 1) throw std::invalid_argument("odd length");

    std::string output;
    output.reserve(len / 2);
    for (size_t i = 0; i < len; i += 2)
    {
        char a = input[i];
        const char* p = std::lower_bound(lut, lut + 16, a);
        if (*p != a) throw std::invalid_argument("not a hex digit");

        char b = input[i + 1];
        const char* q = std::lower_bound(lut, lut + 16, b);
        if (*q != b) throw std::invalid_argument("not a hex digit");

        output.push_back(((p - lut) << 4) | (q - lut));
    }
    return output;
}

std::string textOctal(std::string input){
    std::string result="";

    for (int i=0; i<input.length(); i++){

        switch(input[i])
        {
            case 'A': result+="101";	break;
            case 'a': result+="141";	break;
            case 'B': result+="102";	break;
            case 'b': result+="142";	break;
            case 'C': result+="103";	break;
            case 'c': result+="143";	break;
            case 'D': result+="104";	break;
            case 'd': result+="144";	break;
            case 'E': result+="105";	break;
            case 'e': result+="145";	break;
            case 'F': result+="106";	break;
            case 'f': result+="146";	break;
            case 'G': result+="107";	break;
            case 'g': result+="147";	break;
            case 'H': result+="110";	break;
            case 'h': result+="150";	break;
            case 'I': result+="111";	break;
            case 'i': result+="151";	break;
            case 'J': result+="112";	break;
            case 'j': result+="152";	break;
            case 'K': result+="113";	break;
            case 'k': result+="153";	break;
            case 'L': result+="114";	break;
            case 'l': result+="154";	break;
            case 'M': result+="115";	break;
            case 'm': result+="155";	break;
            case 'N': result+="116";	break;
            case 'n': result+="156";	break;
            case 'O': result+="117";	break;
            case 'o': result+="157";	break;
            case 'P': result+="120";	break;
            case 'p': result+="160";	break;
            case 'Q': result+="121";	break;
            case 'q': result+="161";	break;
            case 'R': result+="122";	break;
            case 'r': result+="162";	break;
            case 'S': result+="123";	break;
            case 's': result+="163";	break;
            case 'T': result+="124";	break;
            case 't': result+="164";	break;
            case 'U': result+="125";	break;
            case 'u': result+="165";	break;
            case 'V': result+="126";	break;
            case 'v': result+="166";	break;
            case 'W': result+="127";	break;
            case 'w': result+="167";	break;
            case 'X': result+="130";	break;
            case 'x': result+="170";	break;
            case 'Y': result+="131";	break;
            case 'y': result+="171";	break;
            case 'Z': result+="132";	break;
            case 'z': result+="172";	break;
            case ' ': result+="40";	break;
            case '!': result+="41";	break;
            case '@': result+="100";	break;
            case '.': result+="56";	break;
            case ',': result+="54";	break;
            case '#': result+="43";	break;
            case '&': result+="46";	break;
            case ':': result+="72";	break;
            case ';': result+="73";	break;
            case '"': result+="42";	break;
            case '(': result+="50";	break;
            case ')': result+="51";	break;
            case '?': result+="77";	break;
            case '+': result+="53";	break;
            case '-': result+="55";	break;
            case '*': result+="52";	break;
            case '/': result+="57";	break;
            case '=': result+="75";	break;
            case '[': result+="133";	break;
            case ']': result+="135";	break;
            case '{': result+="173";	break;
            case '}': result+="175";	break;
            default: result+=input[i];
        }

    }

    return result;
}

std::string textDecimal(std::string input){
    std::string result="";
    int ascChar;
    std::stringstream convert;

    for (int i=0;i<input.length();i++)
        {
            ascChar = input[i];
            convert<<ascChar;
            result=result+convert.str();
            convert.str("");
            if(input[i+1]=='\0'){
                break;
            }
            else    result+=" ";
        }
    return result;
}

std::string octalBinary(std::string input){
    std::string result="";
    for(int i=0;i<input.length();i++){
        switch(input[i]){
                    case '0' : result+="0";
                        break;
                    case '1' : result+="1";
                        break;
                    case '2' : result+="10";
                        break;
                    case '3' : result+="11";
                        break;
                    case '4' : result+="100";
                        break;
                    case '5' : result+="101";
                        break;
                    case '6' : result+="110";
                        break;
                    case '7' : result+="111";
                        break;
                    default : std::cout<<"\nInvalid Octal Digit "<<input[i];
                        break;
        }
    }
    return result;
}

std::string decimalText(std::string input){
        
        std::string result="";
        int str_length = input.length(); 
      
        // create an array with size as string 
        // length and initialize with 0 
        int arr[str_length] = {0};
        
        int j = 0, i, y=0;
        for (i = 0; input[i] != '\0'; i++) { 
      
            // if str[i] is an empty space then split
            if (input[i] == ' ') { 
                j++; 
            } 
            else { 
                arr[j] = arr[j] * 10 + (input[i] - 48);
                y++;
            } 
        } 
      
        //Test cases for each decimal entry in the array
        for (int x=0; x<=j  ; x++){
            switch(arr[x])
            {
                case 90: result+="Z";	break;
                case 122: result+="z";	break;
                case 89: result+="Y";	break;
                case 121: result+="y";	break;
                case 88: result+="X";	break;
                case 120: result+="x";	break;
                case 87: result+="W";	break;
                case 119: result+="w";	break;
                case 86: result+="V";	break;
                case 118: result+="v";	break;
                case 85: result+="U";	break;
                case 117: result+="u";	break;
                case 84: result+="T";	break;
                case 116: result+="t";	break;
                case 83: result+="S";	break;
                case 115: result+="s";	break;
                case 82: result+="R";	break;
                case 114: result+="r";	break;
                case 81: result+="Q";	break;
                case 113: result+="q";	break;
                case 80: result+="P";	break;
                case 112: result+="p";	break;
                case 79: result+="O";	break;
                case 111: result+="o";	break;
                case 78: result+="N";	break;
                case 110: result+="n";	break;
                case 77: result+="M";	break;
                case 109: result+="m";	break;
                case 76: result+="L";	break;
                case 108: result+="l";	break;
                case 75: result+="K";	break;
                case 107: result+="k";	break;
                case 74: result+="J";	break;
                case 106: result+="j";	break;
                case 73: result+="I";	break;
                case 105: result+="i";	break;
                case 72: result+="H";	break;
                case 104: result+="h";	break;
                case 71: result+="G";	break;
                case 103: result+="g";	break;
                case 70: result+="F";	break;
                case 102: result+="f";	break;
                case 69: result+="E";	break;
                case 101: result+="e";	break;
                case 68: result+="D";	break;
                case 100: result+="d";	break;
                case 67: result+="C";	break;
                case 99: result+="c";	break;
                case 66: result+="B";	break;
                case 98: result+="b";	break;
                case 65: result+="A";	break;
                case 97: result+="a";	break;
                case 32: result+=" ";	break;
                            case 33: result+="!";	break;
                            case 64: result+="@";	break;
                            case 46: result+=".";	break;
                            case 44: result+=",";	break;
                            case 35: result+="#";	break;
                            case 38: result+="&";	break;
                            case 58: result+=":";	break;
                            case 59: result+=";";	break;
                            case 34: result+='"';	break;
                            case 41: result+=")";	break;
                            case 40: result+="(";	break;
                            case 63: result+="?";	break;
                            case 43: result+="+";	break;
                            case 45: result+="-";	break;
                            case 42: result+="*";	break;
                            case 47: result+="/";	break;
                            case 61: result+="=";	break;
                            case 91: result+="[";	break;
                            case 93: result+="]";	break;
                            case 123: result+="{";	break;
                            case 125: result+="}";	break;
                case 48: result+="0";	break;
                case 49: result+="1";	break;
                case 50: result+="2";	break;
                case 51: result+="3";	break;
                case 52: result+="4";	break;
                case 53: result+="5";	break;
                case 54: result+="6";	break;
                case 55: result+="7";	break;
                case 56: result+="8";	break;
                case 57: result+="9";	break;

                default: result+=input[i];
            }
        }
        return result;
}
//End
//Text Encryption Alogrithms


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->login_enterPassword_field->setEchoMode(QLineEdit::Password);
    ui->viewPasswords_enterPassword_field->setEchoMode(QLineEdit::Password);
    ui->testPassword_enterPassword_textEdit->setEchoMode(QLineEdit::Password);

    ui->loginFrame->show();
    ui->testPasswordFrame->hide();
    ui->generatePasswordFrame->hide();
    ui->viewPasswordsFrame->hide();
    ui->textEncryptionFrame->hide();

    QString usernameLbl = QString::fromLocal8Bit(username.c_str());
    ui->welcomeLabel->setText("Welcome " + usernameLbl + "!");

    ui->saveConfirmFrame->hide();
    ui->passwordCrackedNotif->hide();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_testPasswordButton_clicked()
{
    ui->testPasswordButton->setStyleSheet("#testPasswordButton{font: 13pt 'MS Sans Serif';background:#1B2A33;color:#D8E0E5;border:none;}#testPasswordButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->generatePasswordButton->setStyleSheet("#generatePasswordButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#generatePasswordButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->viewPasswordsButton->setStyleSheet("#viewPasswordsButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#viewPasswordsButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->textEncryptionButton->setStyleSheet("#textEncryptionButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#textEncryptionButton:hover{background:#364C59;color:#D8E0E5;}");

    ui->testPasswordFrame->show();
    ui->generatePasswordFrame->hide();
    ui->viewPasswordsFrame->hide();
    ui->textEncryptionFrame->hide();
}

void MainWindow::on_generatePasswordButton_clicked()
{
    ui->testPasswordButton->setStyleSheet("#testPasswordButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#testPasswordButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->generatePasswordButton->setStyleSheet("#generatePasswordButton{font: 13pt 'MS Sans Serif';background:#1B2A33;color:#D8E0E5;border:none;}#generatePasswordButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->viewPasswordsButton->setStyleSheet("#viewPasswordsButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#viewPasswordsButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->textEncryptionButton->setStyleSheet("#textEncryptionButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#textEncryptionButton:hover{background:#364C59;color:#D8E0E5;}");

    ui->testPasswordFrame->hide();
    ui->generatePasswordFrame->show();
    ui->viewPasswordsFrame->hide();
    ui->textEncryptionFrame->hide();
}

void MainWindow::on_textEncryptionButton_clicked()
{
    ui->testPasswordButton->setStyleSheet("#testPasswordButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#testPasswordButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->generatePasswordButton->setStyleSheet("#generatePasswordButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#generatePasswordButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->viewPasswordsButton->setStyleSheet("#viewPasswordsButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#viewPasswordsButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->textEncryptionButton->setStyleSheet("#textEncryptionButton{font: 13pt 'MS Sans Serif';background:#1B2A33;color:#D8E0E5;border:none;}#textEncryptionButton:hover{background:#364C59;color:#D8E0E5;}");

    ui->testPasswordFrame->hide();
    ui->generatePasswordFrame->hide();
    ui->viewPasswordsFrame->hide();
    ui->textEncryptionFrame->show();
}

void MainWindow::on_viewPasswordsButton_clicked()
{
    ui->testPasswordButton->setStyleSheet("#testPasswordButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#testPasswordButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->generatePasswordButton->setStyleSheet("#generatePasswordButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#generatePasswordButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->viewPasswordsButton->setStyleSheet("#viewPasswordsButton{font: 13pt 'MS Sans Serif';background:#1B2A33;color:#D8E0E5;border:none;}#viewPasswordsButton:hover{background:#364C59;color:#D8E0E5;}");
    ui->textEncryptionButton->setStyleSheet("#textEncryptionButton{font: 13pt 'MS Sans Serif';color:#23343F;background:#96A8B2;border:none;}#textEncryptionButton:hover{background:#364C59;color:#D8E0E5;}");

    ui->testPasswordFrame->hide();
    ui->generatePasswordFrame->hide();
    ui->viewPasswordsFrame->show();
    ui->textEncryptionFrame->hide();

    ui->viewPasswordsConfirmationFrame->show();
    ui->viewPasswords_confirmed_frame->hide();

}

void MainWindow::on_viewPasswords_enterPassword_button_clicked()
{
    QString viewPasswords_enterPassword_fieldText =  ui->viewPasswords_enterPassword_field->text();
    std::string password_field = viewPasswords_enterPassword_fieldText.toStdString();
    if(password_field==password){

        csvModel = new QStandardItemModel(this);
        csvModel->setColumnCount(4);
        csvModel->setHorizontalHeaderLabels(QStringList()<<"Service"<<"Username"<<"Email"<<"Password");
        ui->viewPasswords_accountsTable_table->setModel(csvModel);
//        ui->viewPasswords_accountsTable_table->setStyleSheet(QString("QScrollBar:vertical{border: 2px solid grey; background: #32CC99; width: 15px; margin: 0px 20px 0 20px}"));
        ui->viewPasswords_accountsTable_table->horizontalHeader()->setStretchLastSection(true);
        ui->viewPasswords_accountsTable_table->horizontalHeader()->setStyleSheet("QHeaderView{background-color:#1e1f20;}QHeaderView::section{background-color:#1E1F20;color:white;font-weight:bold;}");
        ui->viewPasswords_accountsTable_table->verticalHeader()->setStyleSheet("QHeaderView{background-color:#1e1f20;}QHeaderView::section{background-color:#1E1F20;color:white;font-weight:bold;}");
    //    ui->login_enterPassword_field->

//C:/Users/E1-432 PC/Documents/build-PasswordApplication-Desktop_Qt_5_13_0_MinGW_32_bit-Debug/
        QFile file("p2KaLmIg3kB8fZp6Tm2qbi7dss03C42a");
        if (!file.open(QFile::ReadOnly | QFile::Text)){
            qDebug()<<"File not exists";
        }
        else{
            QTextStream in(&file);
            while(!in.atEnd()){
                QString line = in.readLine();
                QList<QStandardItem *> standardItemList;
                for (QString item : line.split(",")){
                    standardItemList.append(new QStandardItem(item));
                }
                csvModel->insertRow(csvModel->rowCount(),standardItemList);
            }
            file.close();
        }

        ui->viewPasswords_enterPassword_field->clear();
        ui->viewPasswordsConfirmationFrame->hide();
        ui->viewPasswords_confirmed_frame->show();
    }
    else{
        ui->viewPasswords_enterPasswordAuth_label->setAlignment(Qt::AlignCenter);
        ui->viewPasswords_enterPasswordAuth_label->setText("Wrong password!");
        ui->viewPasswords_enterPassword_field->clear();
    }

}



void MainWindow::on_textEncryption_rot13_button_clicked()
{
    ui->textEncryption_rot13_button->setStyleSheet("#textEncryption_rot13_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#889AA5;border:none;}#textEncryption_rot13_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_caesarCipher_button->setStyleSheet("#textEncryption_caesarCipher_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_caesarCipher_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_atbash_button->setStyleSheet("#textEncryption_atbash_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_atbash_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_octal_button->setStyleSheet("#textEncryption_octal_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_octal_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_hex_button->setStyleSheet("#textEncryption_hex_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_hex_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_binary_button->setStyleSheet("#textEncryption_binary_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_binary_button:hover{background-color:#889AA5;color:#0C1419;}");

    ui->textEncryptionCaesarCipher_frame->hide();
    ui->textEncryptionROT13_frame->show();
    ui->textEncryption_atbash_frame->hide();
    ui->textEncryption_binary_frame->hide();
    ui->textEncryption_hex_frame->hide();
    ui->textEncryption_octal_frame->hide();
}

void MainWindow::on_textEncryption_caesarCipher_button_clicked()
{
    ui->textEncryption_rot13_button->setStyleSheet("#textEncryption_rot13_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_rot13_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_caesarCipher_button->setStyleSheet("#textEncryption_caesarCipher_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#889AA5;border:none;}#textEncryption_caesarCipher_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_atbash_button->setStyleSheet("#textEncryption_atbash_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_atbash_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_octal_button->setStyleSheet("#textEncryption_octal_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_octal_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_hex_button->setStyleSheet("#textEncryption_hex_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_hex_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_binary_button->setStyleSheet("#textEncryption_binary_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_binary_button:hover{background-color:#889AA5;color:#0C1419;}");

    ui->textEncryptionCaesarCipher_frame->show();
    ui->textEncryptionROT13_frame->hide();
    ui->textEncryption_atbash_frame->hide();
    ui->textEncryption_binary_frame->hide();
    ui->textEncryption_hex_frame->hide();
    ui->textEncryption_octal_frame->hide();
}

void MainWindow::on_textEncryption_atbash_button_clicked()
{
    ui->textEncryption_rot13_button->setStyleSheet("#textEncryption_rot13_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_rot13_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_caesarCipher_button->setStyleSheet("#textEncryption_caesarCipher_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_caesarCipher_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_atbash_button->setStyleSheet("#textEncryption_atbash_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#889AA5;border:none;}#textEncryption_atbash_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_octal_button->setStyleSheet("#textEncryption_octal_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_octal_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_hex_button->setStyleSheet("#textEncryption_hex_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_hex_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_binary_button->setStyleSheet("#textEncryption_binary_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_binary_button:hover{background-color:#889AA5;color:#0C1419;}");

    ui->textEncryptionCaesarCipher_frame->hide();
    ui->textEncryptionROT13_frame->hide();
    ui->textEncryption_atbash_frame->show();
    ui->textEncryption_binary_frame->hide();
    ui->textEncryption_hex_frame->hide();
    ui->textEncryption_octal_frame->hide();
}

void MainWindow::on_textEncryption_octal_button_clicked()
{
    ui->textEncryption_rot13_button->setStyleSheet("#textEncryption_rot13_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_rot13_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_caesarCipher_button->setStyleSheet("#textEncryption_caesarCipher_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_caesarCipher_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_atbash_button->setStyleSheet("#textEncryption_atbash_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_atbash_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_octal_button->setStyleSheet("#textEncryption_octal_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#889AA5;border:none;}#textEncryption_octal_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_hex_button->setStyleSheet("#textEncryption_hex_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_hex_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_binary_button->setStyleSheet("#textEncryption_binary_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_binary_button:hover{background-color:#889AA5;color:#0C1419;}");

    ui->textEncryptionCaesarCipher_frame->hide();
    ui->textEncryptionROT13_frame->hide();
    ui->textEncryption_atbash_frame->hide();
    ui->textEncryption_binary_frame->hide();
    ui->textEncryption_hex_frame->hide();
    ui->textEncryption_octal_frame->show();
}

void MainWindow::on_textEncryption_hex_button_clicked()
{
    ui->textEncryption_rot13_button->setStyleSheet("#textEncryption_rot13_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_rot13_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_caesarCipher_button->setStyleSheet("#textEncryption_caesarCipher_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_caesarCipher_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_atbash_button->setStyleSheet("#textEncryption_atbash_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_atbash_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_octal_button->setStyleSheet("#textEncryption_octal_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_octal_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_hex_button->setStyleSheet("#textEncryption_hex_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#889AA5;border:none;}#textEncryption_hex_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_binary_button->setStyleSheet("#textEncryption_binary_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_binary_button:hover{background-color:#889AA5;color:#0C1419;}");

    ui->textEncryptionCaesarCipher_frame->hide();
    ui->textEncryptionROT13_frame->hide();
    ui->textEncryption_atbash_frame->hide();
    ui->textEncryption_binary_frame->hide();
    ui->textEncryption_hex_frame->show();
    ui->textEncryption_octal_frame->hide();
}

void MainWindow::on_textEncryption_binary_button_clicked()
{
    ui->textEncryption_rot13_button->setStyleSheet("#textEncryption_rot13_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_rot13_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_caesarCipher_button->setStyleSheet("#textEncryption_caesarCipher_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_caesarCipher_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_atbash_button->setStyleSheet("#textEncryption_atbash_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_atbash_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_octal_button->setStyleSheet("#textEncryption_octal_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_octal_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_hex_button->setStyleSheet("#textEncryption_hex_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#2C404C;border:none;}#textEncryption_hex_button:hover{background-color:#889AA5;color:#0C1419;}");
    ui->textEncryption_binary_button->setStyleSheet("#textEncryption_binary_button{font: 10pt 'MS Sans-Serif';color: #E2E8ED;background-color:#889AA5;border:none;}#textEncryption_binary_button:hover{background-color:#889AA5;color:#0C1419;}");

    ui->textEncryptionCaesarCipher_frame->hide();
    ui->textEncryptionROT13_frame->hide();
    ui->textEncryption_atbash_frame->hide();
    ui->textEncryption_binary_frame->show();
    ui->textEncryption_hex_frame->hide();
    ui->textEncryption_octal_frame->hide();
}

void MainWindow::on_textEncryption_encryptROT13_button_clicked()
{
    QString textEncryption_ROT13In_textEditText =  ui->textEncryption_ROT13In_textEdit->toPlainText();
    std::string converted=textEncryption_ROT13In_textEditText.toStdString();
    std::string result=textROT13(converted);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_ROT13Out_field->setText(resultQt);
}

void MainWindow::on_textEncryption_encryptCaesarCipher_button_clicked()
{
    QString textEncryption_caesarCipherIn_textEditText =  ui->textEncryption_caesarCipherIn_textEdit->toPlainText();
    std::string converted=textEncryption_caesarCipherIn_textEditText.toStdString();

    QString textEncryption_caesarCipherKeyIn_textEditText =  ui->textEncryption_caesarCipherKeyIn_textEdit->toPlainText();
    std::string convertedKey=textEncryption_caesarCipherKeyIn_textEditText.toStdString();

    std::stringstream convertedKeyInt(convertedKey);
    int x=0;
    convertedKeyInt >> x;

    std::string result=textCaesarCipher(converted,x);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_caesarCipherOut_field->setText(resultQt);
}

void MainWindow::on_textEncryption_encryptOctal_button_clicked()
{
    QString textEncryption_octalIn_textEditText =  ui->textEncryption_octalIn_textEdit->toPlainText();
    std::string converted=textEncryption_octalIn_textEditText.toStdString();
    std::string result=textDecimal(converted);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_octalOut_field->setText(resultQt);
}

void MainWindow::on_textEncryption_encryptAtbash_button_clicked()
{
    QString textEncryption_atbashIn_textEditText =  ui->textEncryption_atbashIn_textEdit->toPlainText();
    std::string converted=textEncryption_atbashIn_textEditText.toStdString();
    std::string result=textAtbash(converted);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_atbashOut_field->setText(resultQt);
}

void MainWindow::on_textEncryption_encryptBinary_button_clicked()
{
    QString textEncryption_binaryIn_textEditText =  ui->textEncryption_binaryIn_textEdit->toPlainText();
    std::string converted=textEncryption_binaryIn_textEditText.toStdString();

    std::string result = textBinary(converted);

    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_binaryOut_field->setText(resultQt);
}

void MainWindow::on_textEncryption_decryptHex_button_clicked()
{
    QString textEncryption_hexIn_textEditText =  ui->textEncryption_hexIn_textEdit->toPlainText();
    std::string converted=textEncryption_hexIn_textEditText.toStdString();

    std::string result=hexText(converted);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_hexOut_field->setText(resultQt);
}

void MainWindow::on_textEncryption_encryptHex_button_clicked()
{
    QString textEncryption_hexIn_textEditText =  ui->textEncryption_hexIn_textEdit->toPlainText();
    std::string converted=textEncryption_hexIn_textEditText.toStdString();

    std::string result=textHex(converted);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_hexOut_field->setText(resultQt);
}

void MainWindow::on_textEncryption_decryptAtbash_button_clicked()
{
    QString textEncryption_atbashIn_textEditText =  ui->textEncryption_atbashIn_textEdit->toPlainText();
    std::string converted=textEncryption_atbashIn_textEditText.toStdString();
    std::string result=textAtbash(converted);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_atbashOut_field->setText(resultQt);
}

void MainWindow::on_textEncryption_decryptROT13_button_clicked()
{
    QString textEncryption_ROT13In_textEditText =  ui->textEncryption_ROT13In_textEdit->toPlainText();
    std::string converted=textEncryption_ROT13In_textEditText.toStdString();
    std::string result=textROT13(converted);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_ROT13Out_field->setText(resultQt);
}

void MainWindow::on_textEncryption_decryptCaesarCipher_button_clicked()
{
    QString textEncryption_caesarCipherIn_textEditText =  ui->textEncryption_caesarCipherIn_textEdit->toPlainText();
    std::string converted=textEncryption_caesarCipherIn_textEditText.toStdString();

    QString textEncryption_caesarCipherKeyIn_textEditText =  ui->textEncryption_caesarCipherKeyIn_textEdit->toPlainText();
    std::string convertedKey=textEncryption_caesarCipherKeyIn_textEditText.toStdString();

    std::stringstream convertedKeyInt(convertedKey);
    int x=0;
    convertedKeyInt >> x;

    std::string result=caesarCipherText(converted,x);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_caesarCipherOut_field->setText(resultQt);

}

void MainWindow::on_textEncryption_decryptBinary_button_clicked()
{
    QString textEncryption_binaryIn_textEditText =  ui->textEncryption_binaryIn_textEdit->toPlainText();
    std::string converted=textEncryption_binaryIn_textEditText.toStdString();

    std::string result = binaryText(converted);

    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_binaryOut_field->setText(resultQt);
}

void MainWindow::on_textEncryption_decryptOctal_button_clicked()
{
    QString textEncryption_octalIn_textEditText =  ui->textEncryption_octalIn_textEdit->toPlainText();
    std::string converted=textEncryption_octalIn_textEditText.toStdString();
    std::string result=decimalText(converted);
    QString resultQt = QString::fromLocal8Bit(result.c_str());
    ui->textEncryption_octalOut_field->setText(resultQt);
}

void MainWindow::on_testPassword_enterPassword_button_clicked()
{
    QString testPassword_enterPassword_textEditText =  ui->testPassword_enterPassword_textEdit->text();
    std::string converted=testPassword_enterPassword_textEditText.toStdString();

    if(converted==""){
        ui->testPassword_passwordCrackingProgressDisplay->setText("Please enter a password to be tested.");
    }
    else{
        ui->testPassword_passwordCrackingProgressDisplay->setText("The program may take a while with the brute force due to exhaustive algorithm. This process depends on your CPU speed. Please wait or do other operations while the brute force algorithm runs in the background.");
        ui->testPassword_passwordCrackingProgressDisplay->setAlignment(Qt::AlignJustify);
        std::string result=crackPassword(converted);
        QString resultQt = QString::fromLocal8Bit(result.c_str());
        ui->testPassword_passwordCrackingProgressDisplay->setText("PASSWORD CRACKED\n");
        ui->testPassword_passwordCrackingProgressDisplay->append(resultQt);
        ui->passwordCrackedNotif->show();
    }
}

void MainWindow::on_generatePassword_generatePassword_button_clicked()
{
        QApplication::processEvents();
        if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_numbers_checkbox->isChecked()==false && ui->generatedPassword_specialCharacters_checkbox->isChecked()==false){
            std::string result=lowerCaseRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_numbers_checkbox->isChecked()==false && ui->generatedPassword_specialCharacters_checkbox->isChecked()==false){
            std::string result=allCaseRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_numbers_checkbox->isChecked()==true && ui->generatedPassword_specialCharacters_checkbox->isChecked()==false){
            std::string result=lowerCaseNumericRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_numbers_checkbox->isChecked()==false && ui->generatedPassword_specialCharacters_checkbox->isChecked()==true){
            std::string result=lowerCaseSpecialCharRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_numbers_checkbox->isChecked()==false && ui->generatedPassword_specialCharacters_checkbox->isChecked()==false){
            std::string result=upperCaseRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_numbers_checkbox->isChecked()==true && ui->generatedPassword_specialCharacters_checkbox->isChecked()==false){
            std::string result=upperCaseNumericRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_numbers_checkbox->isChecked()==false && ui->generatedPassword_specialCharacters_checkbox->isChecked()==true){
            std::string result=upperCaseSpecialCharRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_numbers_checkbox->isChecked()==true && ui->generatedPassword_specialCharacters_checkbox->isChecked()==true){
            std::string result=numericSpecialCharRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_numbers_checkbox->isChecked()==false && ui->generatedPassword_specialCharacters_checkbox->isChecked()==true){
            std::string result=specialCharRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_numbers_checkbox->isChecked()==true && ui->generatedPassword_specialCharacters_checkbox->isChecked()==false){
            std::string result=numericRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_numbers_checkbox->isChecked()==true && ui->generatedPassword_specialCharacters_checkbox->isChecked()==true){
            std::string result=completeRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_numbers_checkbox->isChecked()==false && ui->generatedPassword_specialCharacters_checkbox->isChecked()==true){
            std::string result=allCaseSpecialCharRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_numbers_checkbox->isChecked()==true && ui->generatedPassword_specialCharacters_checkbox->isChecked()==false){
            std::string result=allCaseNumericRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_numbers_checkbox->isChecked()==true && ui->generatedPassword_specialCharacters_checkbox->isChecked()==true){
            std::string result=upperCaseNumericSpecialCharRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==true && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_numbers_checkbox->isChecked()==true && ui->generatedPassword_specialCharacters_checkbox->isChecked()==true){
            std::string result=lowerCaseNumericSpecialCharRandomString(32);
            QString resultQt = QString::fromLocal8Bit(result.c_str());
            ui->generatePassword_generatedPassword_field->setText(resultQt);
        }
        else if(ui->generatedPassword_lowerCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_upperCaseLetters_checkbox->isChecked()==false && ui->generatedPassword_numbers_checkbox->isChecked()==false && ui->generatedPassword_specialCharacters_checkbox->isChecked()==false){
            ui->generatePassword_generatedPassword_field->setText("");
        }
    ui->generatePassword_generatedPassword_field->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_login_login_button_clicked()
{
    QString usernameImport =  ui->login_enterUsername_field->text();
    std::string usernameConverted=usernameImport.toStdString();

    QString passwordImport =  ui->login_enterPassword_field->text();
    std::string passwordConverted=passwordImport.toStdString();

    if(usernameConverted==username && passwordConverted==password)  ui->loginFrame->hide();
    else{
        ui->login_authentication_label->setAlignment(Qt::AlignCenter);
        ui->login_authentication_label->setText("Please enter valid credentials.");
        ui->login_enterUsername_field->clear();
        ui->login_enterPassword_field->clear();
    }
}

void MainWindow::on_generatePassword_savePAssword_button_clicked()
{   if(ui->generatePassword_generatedPassword_field->document()->isEmpty() || ui->generatePassword_username_textEdit->text().isEmpty() || ui->generatePassword_email_textEdit->text().isEmpty()){
        ui->generatePassword_generatedPassword_field->setText("Please fill out all the necessary fields. Make sure a password is generated before saving.");
        ui->generatePassword_generatedPassword_field->setAlignment(Qt::AlignCenter);
    }
    else{
    QString generatePassword_generatedPassword_fieldText =  ui->generatePassword_generatedPassword_field->toPlainText();
    std::string generatePassword=generatePassword_generatedPassword_fieldText.toStdString();

    QString generatePassword_service_textEditText =  ui->generatePassword_service_textEdit->text();
    std::string generateService=generatePassword_service_textEditText.toStdString();

    QString generatePassword_username_textEditText =  ui->generatePassword_username_textEdit->text();
    std::string generateUsername=generatePassword_username_textEditText.toStdString();

    QString generatePassword_email_textEditText =  ui->generatePassword_email_textEdit->text();
    std::string generateEmail=generatePassword_email_textEditText.toStdString();

    writeAccounts(generateService,generateUsername,generateEmail,generatePassword);

    ui->generatePassword_generatedPassword_field->clear();
    ui->generatePassword_service_textEdit->clear();
    ui->generatePassword_username_textEdit->clear();
    ui->generatePassword_email_textEdit->clear();

    ui->saveConfirmFrame->show();
    }
}

void MainWindow::on_logoutButton_clicked()
{
    ui->loginFrame->show();
    ui->login_enterUsername_field->clear();
    ui->login_enterPassword_field->clear();
    ui->testPasswordFrame->hide();
    ui->generatePasswordFrame->hide();
    ui->viewPasswordsFrame->hide();
    ui->textEncryptionFrame->hide();
}

void MainWindow::on_saveConfirmOkButton_clicked()
{
    ui->saveConfirmFrame->hide();
}

void MainWindow::on_passwordCrackedOkButton_clicked()
{
    ui->passwordCrackedNotif->hide();
}
