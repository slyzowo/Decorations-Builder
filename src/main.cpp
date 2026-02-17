#include <iostream>
#include <vector>
using std::cout, std::cin, std::string;

int main() {

  std::vector<string> furniture = {
    "arm_chair",
    "dining_chair",
    "egg chair",
    "stool",
  };

  std::vector<string> wood = {
    "oak",
    "spruce",
    "birch",
    "jungle",
    "acacia",
    "dark_oak",
    "mangrove",
    "cherry",
    "pale_oak",
    "bamboo",
    "crimson",
    "warped",
  };

  std::vector<string> colour = {
    "white",
    "pink",
    "red", 
    "orange", 
    "yellow", 
    "lime", 
    "green", 
    "light_blue", 
    "cyan", 
    "blue", 
    "purple", 
    "magenta", 
    "brown", 
    "light_gray", 
    "gray", 
    "black" 
  };

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