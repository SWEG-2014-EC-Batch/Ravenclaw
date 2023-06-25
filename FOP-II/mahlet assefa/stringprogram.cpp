#include<iostream>
#include<string.h>
#include "stringlib.h"
using namespace std;

int main(){
    cout<<"enter the word"<<endl;
    getline(cin, word);
    strlength(word);
    vowel_counter(word);
    cout<<"The reversed string is: "<<str_rev(word);
    converttoupper(word);
    str_comp(word1,word2);
}
//string length founder
int strlength(string word){
    int str_len=0;
    while(word[str_len++]);
    {
      cout<<"The string length is: "<<str_len-1<<endl;
    }
}
//string vowel/consonant num founder
int vowel_counter(string word){
      for(int i = 0; i < word.length(); ++i)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||word[i]=='o' || word[i]=='u' || word[i]=='A' ||word[i]=='E' || word[i]=='I' || word[i]=='O' ||word[i]=='U')
        {
            ++vowels;
        }
        else
        {
            ++consonants;
        }
    }

    cout << "The number of Vowels are: " << vowels << endl;
    cout << "The number of Consonants are : " << consonants << endl;
    return 0;
}
//function to reverse the words
string str_rev(string word){
    if(word.length() == 1)
    {
        return word;
    }
    else
    {
        return str_rev(word.substr(1,word.length())) + word.at(0);
    }
}
//function to change upper to lower,lower to upper
int converttoupper(string word){
    for (int i = 0; i < word.length(); i++) {
      if(word[i] >= 'A' && word[i] <= 'Z')
  		{
  			word[i] = word[i] + 32;
		}
      else if(word[i] >= 'a' && word[i] <= 'z'){
           word[i] = word[i] - 32;
      }
  	}
  	
	cout<< "\nThe Given String in its upper/lower case = " << word<<endl;
		
 	return 0;

}
//comparing strings function
int str_comp(string word1,string word2){
    cout<<"enter the other word to compare"<<endl;
    cin>>word2;
    if(word.length() == word2.length())
    {
        cout<<"0";
    }
    else if(word.length()  > word2.length() )
    {
        cout<<"1"; 
    }
    else{
        cout<<"-1";
    }
}
    