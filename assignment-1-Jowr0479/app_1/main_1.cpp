#include <iostream>
#include <fstream>
#include "../code_1/fundamentals_1.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    // TODO
    
    string line;
    ifstream in_file;
in_file.open("unsorted_numbers.txt");
    //ifstream in_file(“unsorted_numbers.txt”);
getline(in_file, line);
// reads entire file
    //int i =0;// int i thought i was going to need for a counter in a loop, but didn't but then
   
    float sortedArray[100];
    int numElements=0;
    float newValue=1.2;
    
while (getline(in_file, line))
{
    std::string fs(line);
newValue=std::stof(fs);
    //newValue=line;
    numElements= addToArrayAsc(sortedArray, numElements, newValue);
    
    
    for(int i=0;i<numElements;i++){
        cout << sortedArray[i]<<",";
    }
    cout <<endl;
    
// Process line
}
    
    
    
    //float *Array[]=&sortedArray;
    
    
    in_file.close();
    return 0;
    
}