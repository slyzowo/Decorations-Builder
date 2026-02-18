#include <iostream>
#include <vector>
#include <string>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector;

int main() {

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < wood.size(); j++){

      // this is so stupid but it works so i dont care much
      string lowercase_blockname = wood[j] + "_" + furniture[i];

      wood[j][0] = toupper(wood[j][0]);
      furniture[i][0] = toupper(furniture[i][0]);

      string uppercase_blockname = wood[j] + "_" + furniture[i];

      cout  << "public static final Block " << uppercase_blockname << " = registerBlock(\"" << lowercase_blockname << "\", " << '\n'
      << "  new ChairBlock(AbstractBlock.Settings.create()" << '\n'
      << "  .nonOpaque()" << '\n'
      << "  .mapColor(MapColor.OAK_TAN)" << '\n'
      << "  .strength(0.8F)" << '\n'
      << "  .sounds(BlockSoundGroup.WOOD)" << '\n'
      << "  .burnable()));" << '\n';
    }
  cout << '\n';
}

return 0;
}