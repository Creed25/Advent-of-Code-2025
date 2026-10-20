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
        //std::cout << "lower: " << lower << std::endl;
        //std::cout << "upper: " << upper << std::endl;
        for(long long i = lower; i <= upper; i++){
            int modulator = 1;
            int length = std::to_string(i).length();
            //std::cout << "i :" << i << std::endl;
            // std::cout << "length :" << length << std::endl;
            int half_length = length / 2;
            //std::cout << "half length :" << half_length << std::endl;
            std::string num = std::to_string(i);
            for(int j = 1; j <= half_length; j++){
                modulator *= 10; 
               // std::cout << "modulator:" << modulator << std::endl;
            }
            if((i % modulator) == (i / modulator)){
                std::cout << "passing i :" << i << std::endl;
                count += i;
            }
        }
    }
    std::cout << count << std::endl;    
}