package music;

public class Song {
  String title;
  String artist;
  int duration; // duration in seconds

  public Song(String title, String artist, int duration) {
    this.title = title;
    this.artist = artist;
    this.duration = duration;
  }

  public void play() {
    System.out.println("Playing: " + title + " by " + artist);
  }

  public void displayDetails() {
    System.out.println("Title: " + title);
    System.out.println("Artist: " + artist);
    System.out.println("Duration: " + duration + " seconds");
  }
}
