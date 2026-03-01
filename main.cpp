// COMSC-210 | Lab 15 | Loma Kim
#include <iostream>
#include <fstream>
#include <vector>
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
    vector <Movie> movies;
    int tmpY;           //temp variable for year
    string tmpW, tmpT;  //temp variable for writer and title
    
    //OPEN INPUT FILE
    ifstream fin;
    fin.open("input.txt");

    //VALIDATE FILE AND READ DATA
    if(fin.good()) {
        int i = 0;      //int for vector element count
        while(getline(fin, tmpT)){
            fin >> tmpY;
            fin.ignore();
            getline(fin, tmpW);

            if (i > 0)      
        }
    }

    Movie sa;
    sa.setScreenwriter("Hayao Miyazaki");
    sa.setReleaseYear(2001);
    sa.setMovieTitle("Spirited Away");



    //BANNER
    cout << "**** MOVIE LIST ****" << endl;

    sa.print();
    return 0;
}

void Movie::print() const {
    cout << "\nMovie Title: " << title << endl;
    cout << "\tYear Released: " << year << endl;
    cout << "\tScreenwriter: " << writer << endl;
}