#include<iostream>
using namespace std;
#ifndef STRINGLIB_H
#define STRINGLIB_H
//var declarations
string word;
int option;
int vowels=0, consonants=0;
string word1,word2;
//function declarations
int strlength(string word);
int vowel_counter(string word);
string str_rev(string word);
int converttoupper(string word);
int str_comp(string word1,string word2);
#endif