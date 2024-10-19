import java.awt.*;
import java.applet.*;

public class Load_Image extends Applet {
  Image image;

  public void init() {
    image = getImage(getCodeBase(), "logo.jpg");
  }

  public void paint(Graphics g) {
    g.drawImage(image, 10, 10, this);
  }
}