#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int count = 50;
int zero_crossings;

int main(){
    std::ifstream file("combo.txt");
    if(!file.is_open()){
        std::cerr << "Error: could not open the file" << std::endl;
        return 1; 
    }

    std::string line;

    while(std::getline(file, line)){
        int result = 0;
        std::cout << line << std::endl;
        int charCount = line.length();
        std::cout << charCount << std::endl;
        for(int i = 1; i < charCount; ++i){
                result = (result * 10) + (line[i] - '0');
            }
        std::cout<<result<<std::endl;

        if(line[0] == 'R'){
            for(int i = 0; i < result; i++){
                count += 1;
                if(count == 100){
                    count = 0;
                }
                if(count == 0){
                    zero_crossings += 1;
                }
            }
        }
        if(line[0] == 'L'){
            for(int i = 0; i < result; i++){
                count -= 1;
                if(count == -1){
                    count = 99;
                }
                if(count == 0){
                    zero_crossings += 1;
                }
            }
        }
        std::cout << count << std::endl;
        // if(count == 0){
        //     zero_crossings += 1;
        // }
    }
    std::cout << "Final " << zero_crossings << std::endl;
}