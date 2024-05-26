#include<fstream>
#include<iostream>
using namespace std;

enum Options {
    COUNT_BYTES,
    COUNT_LINES,
    COUNT_WORDS,
    COUNT_CHARS
};

Options toOption(char* strOption);

void delegator(Options option, const char* filename);

long countBytes(fstream& filestream);

int countLines(fstream& filestream);

int countWords(fstream& filestream);

int countChars(fstream& filestream);

int main (int argc, char* argv[]) {
    if (argc == 3) {
        delegator(toOption(argv[1]), argv[2]);
        return 0;
    }
    else {
        cout << "Required parametes not supplied";
        return -1;
    }
}

void delegator(Options option, const char* filename) {
    fstream filestream (filename);
    switch (option) {
        case COUNT_BYTES:
            cout << countBytes(filestream) << " " << filename;
            break;
        case COUNT_LINES:
            break;
        case COUNT_WORDS:
            break;
        case COUNT_CHARS:
            break;
        default:
            cout << "unknown option";
    }
    filestream.close();
}

Options toOption(char* strOption) {
    if (strcmp("-c", strOption) == 0) {
        return COUNT_BYTES;
    } else if (strcmp("-l", strOption) == 0) {
        return COUNT_LINES;
    } else if (strcmp("-w", strOption) == 0) {
        return COUNT_WORDS;
    } else {
        return COUNT_CHARS;
    }
}

long countBytes(fstream& filestream) {
    streampos begin, end;
    begin = filestream.tellg();
    filestream.seekg(0, ios::end);
    end = filestream.tellg();
    return end - begin;
}

