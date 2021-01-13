
/**
@mainpage COP 3330 Project 1

@Kylee Hillman and Kennyth Kouch

This project takes user input in the form of of a string. The string is passed
to a function that finds how many time the most common letter occurs. 
*/

#include <iostream>
#include "../include/example.hpp"
#include <assert.h>
#include <string>
#include <algorithm>

int get_max_count(std::string sinput){
	char letters [sinput.length()] {0};
	int maxcount [sinput.length()] {0};
	for (unsigned int i = 0; i < sinput.length(); i++) {
		for (unsigned int j = 0; j < sinput.length(); j++) {
			if (letters[i] != sinput.at(j)) {
				letters[i] = sinput.at(j);
			}
			else if (letters[i] == sinput.at(j)) {
				maxcount[j]++;
			}
		}
	}
	int num = *std::max_element(maxcount, maxcount+sinput.length());
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

	return 0;
}
