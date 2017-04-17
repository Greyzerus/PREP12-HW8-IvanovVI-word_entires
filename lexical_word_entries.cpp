//
// Created by greyzerus on 17.04.17.
//

#include <fstream>
#include <iomanip>
#include "lexical_word_entries.hpp"
/*
 * std::string word;
 * std::vector <std::pair <std::string, int>> entries;
 *                 //pairs: <filename, word_entries_number>*/

lexical_word_entries::lexical_word_entries(const std::string &word) : word(word), entries() {
    auto t = entries.begin();
}

int lexical_word_entries::process (const std::string &filename) {
    std::ifstream infile(filename);
    /*error processing?*/
    std::string buf;
    while (infile) {
        infile >> buf;
        //TODO   punct skipping (BOOST?)

    }
}

friend std::ostream &operator<<(std::ostream &os, const lexical_word_entries &entries) {
    os << "There is: " << std::flush;
    for (auto i : entries) {
        os << i.second << " in " << i.first <<std::endl;
    }
    return os;
};
/*
friend std::istream &operator>>(std::istream &is, const lexical_word_entries &entries) {
    string = stream n;
}*/
