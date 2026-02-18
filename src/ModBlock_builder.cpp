#include <iostream>
#include <vector>
#include "ModBlocks.hpp"
using std::cout, std::cin, std::string, std::vector;

/*
  public static final Block OAK_CHAIR = registerBlock("oak_chair", 
    new ChairBlock(AbstractBlock.Settings.create()
    .nonOpaque()
    .mapColor(MapColor.OAK_TAN)
    .strength(0.8F)
    .sounds(BlockSoundGroup.WOOD)
    .burnable()));
*/

int main() {

  string lowercase_blockname = wood[0] + "_" + furniture[0];
  string uppercase_blockname = wood[0] + "_" + furniture[0];

  cout  << "\tpublic static final Block " << uppercase_blockname << " = registerBlock(\"" << lowercase_blockname << "\", " << '\n'
    << "new ChairBlock(AbstractBlock.Settings.create()" << '\n'
    << ".nonOpaque()" << '\n'
    << ".mapColor(MapColor.OAK_TAN)" << '\n'
    << ".strength(0.8F)" << '\n'
    << ".sounds(BlockSoundGroup.WOOD)" << '\n'
    << ".burnable()));" << '\n';

return 0;
}