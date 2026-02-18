#include <iostream>
#include <vector>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector;

int main() {

  cout << "Number of Furniture : " << furniture.size() << '\n';
  cout << "Number of Wood : " << wood.size() << '\n';
  cout << "Number of Colours : " << colour.size() << "\n\n";

  cout << "Total Lines Generated (TLG) : " << (colour.size() * wood.size()) * furniture.size() << "\n\n";

for(int i = 0; i < furniture.size(); i++){
  for(int j = 0; j < wood.size(); j++){
    for(int k = 0; k < colour.size(); k++){
      //            "block.decorations.white_cushioned_oak_chair" : "White Cushioned Oak Chair",
      cout << "\"block.decorations." << colour[k] << "_cushioned_"<< wood[j] <<"_"<< furniture[i] <<"\" : \"" << colour[k] << " Cushioned "<< wood[j] <<" "<< furniture[i] <<"\"," << '\n';
    }
  cout << '\n';
  }
  cout << '\n';
}

return 0;
}