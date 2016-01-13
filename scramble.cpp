#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string.h>

/*
 * retrieve user input
 * user enters a line of input(sentence)
 * split word by word
 * return a vector of the words entered by the user in order
 */
std::vector<std::string>
getUserInput(){
	std::string prompt = "Please enter a sentence:\n";
    std::string input;

    //get user input
    std::cout << prompt;
    std::getline(std::cin, input);

    std::vector<std::string> words;

	char *word = strtok(&input[0], " ");
	while(word != NULL){
		std::string str(word);
		words.push_back(str);
		word = strtok(NULL, " ");
	}

	return words;
}

//send back all lower case. it's all scrambled anyways, no point in fussing over grammar/capitalization
std::string sort(std::string){
	return NULL;
}

int main(){
    std::vector<std::string> words;

	words = getUserInput();
    std::cout << "\n";

    for(unsigned int i = 0; i < words.size(); i++){
        std::cout << words[i] + "\n";
    }

    return 0;
    
}
