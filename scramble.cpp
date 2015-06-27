#include <string>
#include <iostream>
#include <sstream>
#include <vector>


int main(){
    std::string prompt = "Please enter a sentence:\n";
    std::string input = "";

    //get user input
    std::cout << prompt;
    std::getline(std::cin, input);

    //debug print
    //std::cout << input + "\n";

    /*
    std::string what = input;
    what = what.substr(2);
    std::cout << input + "\n";
    std::cout << what + "\n";
    */


    std::vector<std::string> words;
    //iterate through input string, char by char
    std::string::iterator it = input.begin();
    int start = 0;
    int end = 0;
    int counter = 0;
    while(it!=input.end()){
        std::cout << *it;
        //then move the start/end pointer along
        //start of next word, end of current
        if(*it==' '){
            if(end != 0){
                words.push_back(input.substr(start, end));
            } 
            start = counter + 1;
            end = 0;
        } else {
            end++;
        }

        it++;
        counter++;
    }
    std::cout << "\n";
    if(end != 0){
        words.push_back(input.substr(start, end));
    }

    for(int i = 0; i < words.size(); i++){
        std::cout << words[i] + "\n";
    }
    
}

//send back all lower case. it's all scrambled anyways, no point in fussing over grammar/capitalization
std::string sort(std::string){
    
}
