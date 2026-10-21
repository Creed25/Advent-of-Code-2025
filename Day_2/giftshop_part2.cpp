#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>

long long count = 0;

int main(){
    
    std::ifstream file("IDs.txt");
    if(!file.is_open()){
        std::cerr << "Error: could not open the file" << std::endl;
        return 1;
    }

    std::string line;
    std::string value;
    while(std::getline(file, line, ',')){
        std::stringstream ss(line);
        std::vector<std::string> ranges;
        while(std::getline(ss, value, '-')){
           ranges.push_back(value);
        }
        long long lower = std::stoll(ranges.front());
        long long upper = std::stoll(ranges.back());
        for(long long i = lower; i <= upper; i++){
            std::string string_number = std::to_string(i);
            std::string concatonated = string_number + string_number;
            int middle = string_number.length() / 2;
            size_t repetitions = concatonated.find(string_number, 1);
            if(repetitions < middle + 1){
                std::cout << "passing i :" << i << std::endl;
                count += i;
            } 
        }
    }
    std::cout << count << std::endl;    
}