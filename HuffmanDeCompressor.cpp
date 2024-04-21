#include "HuffmanDeCompressor.hpp"

int main(int argc,char** argv)
{  
    string fName = argv[1];
    
    if(!endsWith(fName,".huf"))
    {
        huffmanCompressor(fName);
    }
    else
    {
        huffmanDecompressor(fName);
    }
    
    return 0;
}