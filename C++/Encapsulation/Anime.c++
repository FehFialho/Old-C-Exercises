// Lesson 37 - (05/27/2025)
// This program defines an Anime class with private attributes,
// demonstrating encapsulation through the use of getters and setters.

#include <iostream>

using namespace std;

class Anime {
private:
    string title;
    string genre;
    int releaseYear;
    int episodes;
    double rating;

public:
    void setAnime(string title, string genre, int releaseYear, int episodes, double rating) {
        setTitle(title);
        setGenre(genre);
        setReleaseYear(releaseYear);
        setEpisodes(episodes);
        setRating(rating);
    }

    // Getters
    string getTitle() { return title; }
    string getGenre() { return genre; }
    int getReleaseYear() { return releaseYear; }
    int getEpisodes() { return episodes; }
    double getRating() { return rating; }

    // Setters
    void setTitle(string newTitle) {
        title = newTitle;
    }

    void setGenre(string newGenre) {
        genre = newGenre;
    }

    void setReleaseYear(int newYear) {
        releaseYear = newYear;
    }

    void setEpisodes(int newEpisodes) {
        episodes = newEpisodes;
    }

    void setRating(double newRating) {
        rating = newRating;
    }

    void show() {
        cout << "Title: " << title << endl;
        cout << "Genre: " << genre << endl;
        cout << "Release Year: " << releaseYear << endl;
        cout << "Episodes: " << episodes << endl;
        cout << "Rating: " << rating << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Anime anime1;
    anime1.setAnime("Berserk", "Dark Fantasy", 1997, 25, 8.7);
    anime1.show();

    Anime anime2;
    anime2.setAnime("Dungeon", "Seinen", 2024, 24, 8.0);
    anime2.setTitle("Dungeon Meshi");
    anime2.show();

    Anime anime3;
    anime3.setAnime("Monster", "Seinen", 2005, 75, 8.7);
    anime3.show();

    return 0;
}
