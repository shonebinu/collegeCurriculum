import java.applet.*;
import java.awt.*;

public class OlympicRing extends Applet {
  public void paint(Graphics g) {
    g.setColor(Color.blue);
    g.drawOval(100, 50, 100, 100);
    g.setColor(Color.black);
    g.drawOval(190, 50, 100, 100);
    g.setColor(Color.red);
    g.drawOval(280, 50, 100, 100);
    g.setColor(Color.yellow);
    g.drawOval(150, 100, 100, 100);
    g.setColor(Color.green);
    g.drawOval(240, 100, 100, 100);
  }
}