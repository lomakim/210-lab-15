// COMSC-210 | Lab 15 | Loma Kim
#include <iostream>
#include <fstream>
using namespace std;

class Movie{
    private:
    string writer;
    int year;
    string title;

    public:
    //MUTATORS
    void setScreenWriter(string w) { writer = w; }
    void setReleaseYear(int y) { year = y; }
    void setMovieTitle(string t) { title = t; }

    //ACCESSORS
    string getScreenWriter() const { return writer; }
    int getReleaseYear() const { return year; }
    string getMovieTitle() const { return title; }

    void printMovie() const;
};

int main() {

    return 0;
}

void Movie::printMovie() const {
    
}