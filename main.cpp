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
    vector<Movie> m;
    int tmpY;
    string tmpW, tmpT;
    Movie tmp;
    
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

            tmp.setMovieTitle(tmpT);
            tmp.setReleaseYear(tmpY);
            tmp.setScreenwriter(tmpW);

            m.push_back(tmp);  
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