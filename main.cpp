// COMSC-210 | Lab 15 | Loma Kim
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Movie{
    private:
    string writer;
    int year;
    string title;

    public:
    //MUTATORS
    void setScreenwriter(string w) { writer = w; }
    void setReleaseYear(int y) { year = y; }
    void setMovieTitle(string t) { title = t; }

    //ACCESSORS
    string getScreenwriter() const { return writer; }
    int getReleaseYear() const { return year; }
    string getMovieTitle() const { return title; }

    void print() const;
};

int main() {
    //DECLARATIONS
    const int SIZE = 4;
    vector <Movie> movies(SIZE);
    int tmpY;
    string tmpW, tmpT;
    
    //OPEN INPUT FILE
    ifstream fin;
    fin.open("input.txt");

    //VALIDATE FILE AND READ DATA
    if(fin.good()) {
        int count = 0;      //int for vector element count
        while(getline(fin, tmpT)) {
            fin >> tmpY;
            fin.ignore();
            getline(fin, tmpW);

            movies[count].setMovieTitle(tmpT);
            movies[count].setReleaseYear(tmpY);
            movies[count].setScreenwriter(tmpW);

            count++;
        }
    }

    //PRINT VECTOR CONTENTS
    cout << "**** MOVIES CONTAINED IN INPUT.TXT FILE" << endl;

    for (int i = 0; i < SIZE; i++){
        movies[i].print();
    }
    
    return 0;
}

void Movie::print() const {
    cout << "\nMovie Title: " << title << endl;
    cout << "\tYear Released: " << year << endl;
    cout << "\tScreenwriter: " << writer << endl;
}