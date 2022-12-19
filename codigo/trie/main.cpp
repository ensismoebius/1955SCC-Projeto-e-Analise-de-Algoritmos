#include "trie.h"
#include <iostream>

int main()
{
    Trie t(127);
    t.insert("amor");
    t.insert("amar");
    t.insert("amaranto");
    t.insert("amargo");

    std::cout << t.search("ugar");
    t.deleteNode("amor");
    return 0;
}
