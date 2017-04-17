//
// Created by greyzerus on 17.04.17.
//

#ifndef HW8_WORD_ENTRIES_HPP
#define HW8_WORD_ENTRIES_HPP

#include <iostream>
#include <vector>
#include <iterator>

class lexical_word_entries {
public:
    /*constructors*/
    lexical_word_entries(const std::string &word);
    lexical_word_entries(lexical_word_entries & const other);
    lexical_word_entries operator=(lexical_word_entries & const other);

    /*iterators*/
    std::iterator begin();
    std::iterator end();
    std::iterator cbegin();
    std::iterator cend();
    std::iterator rbegin();
    std::iterator rend();
    std::iterator crbegin();
    std::iterator crend();

    /*getters*/
    std::string get_word();

    int process (const std::string &filename);

    friend std::ostream &operator<<(std::ostream &os, const lexical_word_entries &entries);
    friend std::istream &operator>>(std::istream &is, const lexical_word_entries &entries);


private:
    std::string word;
    std::vector <std::pair <std::string, int>> entries;//pairs: <filename, word_entries_number>
};


#endif //HW8_WORD_ENTRIES_HPP
