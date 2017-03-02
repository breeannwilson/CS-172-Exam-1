#ifndef SONG_H
#define SONG_H
#include <string>
using namespace std;

class Song {
private:
	string title;
	string artist;
	string genre;
public:
	// default song
	Song();

	// allow the caller to set up the song.  
	// valid genres are "ModernPop", "Grunge", "Classical" and "Americana".
	Song(string title, string artist, string genre);


	string getTitle() const;  // return the song title
	string getArtist() const; // return the artist who performed the song
	string getGenre() const;  // return the genre of the song

	// return true if the song is of the genre
	bool isOfGenre(string genre);

};

#endif