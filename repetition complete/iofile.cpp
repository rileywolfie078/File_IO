#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

int main(){
    std::ifstream inFile;
    std::string currentLine;
    std::stringstream converter;
    
    inFile.open("data.csv");
    while (getline(inFile, currentLine)){
	std::cout << currentLine << std::endl;
	converter.clear();
	converter.str("");

    	//pass this line into stringstream
    	converter.str(currentLine);

	std::string col0, col1, col2;

        std::getline(converter, col0, ',');
        std::getline(converter, col1, ',');
        std::getline(converter, col2, ',');

        //convert to int and add
        int val0 = std::stoi(col0);
        int val1 = std::stoi(col1);
	int sum = val0 + val1;

	std::string result = "";
	for (int i = 0; i < sum; i++) {
    		result += col2;
	}//end of for loop

	std::cout << result << std::endl;
    } // end of while loop
    inFile.close();
}//end main
