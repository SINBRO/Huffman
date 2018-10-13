//
// Created by andrey on 11.10.18.
//

#ifndef HUFFMAN_FILE_WRITER_H
#define HUFFMAN_FILE_WRITER_H


#include <fstream>
#include <vector>
#include "../../lib/h/types_consts.h"
#include "../../lib/h/code.h"

struct file_writer {
    file_writer();

    explicit file_writer(std::string const &dst);

    ~file_writer();

    void set_file(std::string const &dst);

    void print(symbol s);

    void print_code(code x);

    void print_code_block(std::vector<code> block);

    void print_number(int32_t x);

private:
    std::ofstream out;
    symbol buffer[BUFFER_SIZE];
    size_t cur_symbol;
    uint64_t cur_part;
    uint8_t cur_bits;
};


#endif //HUFFMAN_FILE_WRITER_H
