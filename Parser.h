#ifndef PARSER_H
#define PARSER_H
    void getFirstToken();
    void assignStatement();
    void expression();
    void term();
    void factor();
    int match(int t);
#endif

