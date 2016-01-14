#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <algorithm>

/*
 * take character, if uppercase, make lowercase and return
 */
char
myToLower(char c){
	if( 'A' <= c && c <= 'Z'){
		return c + ('a' - 'A');
	}
	return c;
}

/*
 * take the argument string, change all uppercase chars to lowercase
 * return the all lowercase string
 */
std::string
strToLower(std::string word){
	char * c = &word[0];
	char * itr = c;
	while(*itr != '\0'){
		*itr = myToLower(*itr);
		itr++;
	}
	std::string str(c);
	return str;
}

/*
 * retrieve user input
 * user enters a line of input(sentence)
 * split word by word
 * return a vector of the words entered by the user in order
 */
std::vector<std::string>
getUserInput(){
	std::string prompt = "Please enter a sentence:";
    std::string input;
	std::string quit("q");

    //get user input
    std::cout << prompt << std::endl;
    std::getline(std::cin, input);

    std::vector<std::string> words;

	char *word = strtok(&input[0], " ");
	while(word != NULL){
		std::string str(word);
		str = strToLower(str);
		words.push_back(str);
		word = strtok(NULL, " ");
	}

	if(words.size() == 1 && words[0].compare(quit) == 0){
		std::cout << "exiting..." << std::endl;
		exit(0);
	}

	return words;
}



//send back all lower case. it's all scrambled anyways, no point in fussing over grammar/capitalization
std::vector<std::string>
sort(std::vector<std::string> words){
	std::vector<std::string> newList;
	for(unsigned int i = 0; i < words.size(); i++){
		std::string w = words[i];
		std::sort(w.begin(), w.end());
		newList.push_back(w);
	}
	return newList;
}

int main(){
    std::vector<std::string> words;
	std::cout << "Quit by entering \"q\"" << std::endl;

    while(1){

		words = getUserInput();

		words = sort(words);
		for(unsigned int i = 0; i < words.size(); i++){
			std::cout << words[i] + " ";
		}
		std::cout << std::endl;
	}

    return 0;
    
}
