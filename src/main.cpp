#include <iostream>
#include <vector>
using std::cout, std::cin, std::string;

int main() {

  std::vector<string> furnature = {
    "chair",
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

  std::vector<string> color = {
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

for(int i = 0; i < furnature.size(); i++){
  for(int j = 0; j < wood.size(); j++){
    for(int k = 0; k < color.size(); k++){
      //            "block.decorations.white_cushioned_oak_chair" : "White Cushioned Oak Chair",
      cout << "\"block.decorations." << color[k] << "_cushioned_"<< wood[j] <<"_"<< furnature[i] <<"\" : \"" << color[k] << " Cushioned "<< wood[j] <<" "<< furnature[i] <<"\"," << '\n';
    }
  }
}

return 0;
}