#ifndef JOHNCHESS_APP_H
#define JOHNCHESS_APP_H

#include <iostream>
#include "xboard_interface.h"

class JohnchessApp {
private:
    typedef struct app_opts {
        std::istream *in_stream;
        std::ostream *out_stream;
        app_opts() : in_stream(NULL), out_stream(NULL) {}
    } app_opts_t;
    XBoardInterface *m_xboard_interface;

public: //ctor + dtor
    JohnchessApp(int argc, const char* argv[]);
    ~JohnchessApp();

public: //public methods
    void main_loop();

private:
    app_opts_t* parse_args(int argc, const char* argv[]);
    void show_welcome();
    app_opts_t* m_app_opts;
    std::istream& get_input_stream();
    std::ostream& get_output_stream();
};

#endif //JOHNCHESS_APP_H
