//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP2.h"
#include "redirect_io.h"

#include <string>

using namespace std;

TEST_CASE("Ejercicio #5") {
    redirect_io_t redir;
    ifstream file("test_5.in");
    string line;
    string result;
    int i = 0;
    while (!file.eof())
    {
        redir.redirect();
        getline(file, line); redir << line << " ";
        getline(file, line); redir << line;
        ejercicio_5();
        getline(file, line); redir.getline(result);
        redir.reestablish();
        REQUIRE(line == result);
    }
}