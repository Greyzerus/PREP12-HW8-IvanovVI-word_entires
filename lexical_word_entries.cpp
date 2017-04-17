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
        std::getline(infile, buf, )
        //TODO   punct skipping (BOOST?)
        //TODO getline with delim's!
        //TODO there is only one awailable :(
        //TODO BOOST!
        /* #include <boost/algorithm/string.hpp>
    std::string inputString("One!Two,Three:Four");
    std::string delimiters("|,:");
    std::vector<std::string> parts;
    boost::split(parts, inputString, boost::is_any_of(delimiters));*/

        /*getting delimiters:
         * while (...)
         *  if (isgraph but not isalnum)
         *      delimiters += char;.*/

    }
}

friend std::ostream &operator<<(std::ostream &os, const lexical_word_entries &entries) {
    os << "There is: " << std::flush;
    for (auto i : entries) {        //TODO
        os << i.second << " in " << i.first <<std::endl;
    }
    return os;
};
/*
friend std::istream &operator>>(std::istream &is, const lexical_word_entries &entries) {
    string = stream n;
}*/
