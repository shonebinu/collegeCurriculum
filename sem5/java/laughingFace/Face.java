import java.applet.*;
import java.awt.*;

public class Face extends Applet {
  public void paint(Graphics g) {
    g.setColor(Color.yellow);
    g.fillOval(80, 70, 150, 150); // head
    g.setColor(Color.black);
    g.fillOval(120, 120, 15, 15);// left eye
    g.fillOval(170, 120, 15, 15);// right eye
    g.setColor(Color.red);
    g.fillArc(130, 180, 50, 15, 180, 180);// lip
  }
}