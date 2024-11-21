


// Movie Storage System in c++


#include <iostream>
#include <string>
using namespace std;

class Movies {
private:
    string title;
    string director;
    int releaseYear;
    int rating;
public:
    // Method to input movie details
    void inputDetails() {
        cout << "Enter movie title: ";
        getline(cin, title);
        cout << "Enter director's name: ";
        getline(cin, director);
        cout << "Enter release year: ";
        cin >> releaseYear;
        cout << "Enter IMDb rating: ";
        cin >> rating;
        cin.ignore(); // Clear the input buffer
    }

    // Method to display movie details
    void displayDetails() const {
        cout << "\nTitle: " << title
             << "\nDirector: " << director
             << "\nRelease Year: " << releaseYear
             << "\nIMDb Rating: " << rating << endl;
    }
};

int main() {
    int movie_store = 10;  // Maximum number of movies
    Movies movies[movie_store];  // Array to store movies
    int movieCount;            // Number of movies to input
// Output the maximum number of movies that can be stored
    cout << "How many movies do you want to store? (Max " << movie_store << "): ";
    cin >> movieCount;


    // Input movie details
    for (int i = 0; i < movieCount; ++i) {
        cout << endl << "Enter details for movie " << (i + 1) << ":" << endl;
        movies[i].inputDetails();
    }

    // Display movie details -- Section
    cout << "\nStored Movies:\n";
    for (int i = 0; i < movieCount; ++i) {
        cout << "\nMovie " << (i + 1) << " Details:";
        movies[i].displayDetails();
    }
    return 0;
}
