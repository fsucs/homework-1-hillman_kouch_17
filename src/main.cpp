
/**
@mainpage COP 3330 Project 1

@Kylee Hillman and Kennyth Kouch

This project takes user input in the form of of a string. The string is passed
to a function that finds how many time the most common letter occurs. 

Compares every letter in the input string to every letter in the alphabet
Creates an array that tells the frequency of each letter in the inputted string
*/

#include <iostream>
#include "../include/example.hpp"
#include <assert.h>
#include <string>
#include <algorithm> //*std::max_element

int get_max_count(std::string sinput){
    int counter [26] = {};  
    std:: string input_copy = sinput;
           										//Holds frequency of each letter.
	for (unsigned int i = 0; i < input_copy.length(); i++) {			//Loops through each character of input string.
		for (unsigned int j = 0; j < sinput.length(); j++) {  	//Loops through each letter of the alphabet string.
			if (input_copy[i] == sinput[j]) {					//Compares input string to alphabet string.
			   counter[j]++;
                           //std::cout << counter[j];										//If they match, then the counter is incremented by 1.
            }
		}
	}
	int num = *std::max_element(counter, counter+sinput.length()); //Pulls the max frequency from counter array.
    return num;
}

int main(int argc, char *argv[]){
    using namespace std;
    
    if (argc >= 2){
        string test1("c++");
        assert(get_max_count(test1) == 2);
    } else {
        string line; 
        cout << "Please input a string: "; 
        getline(cin, line);
        cout << get_max_count(line) << endl;
    }
}
