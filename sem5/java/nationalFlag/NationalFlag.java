import java.applet.*;
import java.awt.*;

public class NationalFlag extends Applet {
  public void paint(Graphics g) {
    g.fillRect(50, 50, 10, 400);
    g.setColor(Color.orange);
    g.fillRect(50, 50, 200, 50);
    g.setColor(Color.white);
    g.fillRect(50, 100, 200, 50);
    g.setColor(Color.green);
    g.fillRect(50, 150, 200, 50);
    g.setColor(Color.blue);
    g.drawOval(120, 100, 50, 50);
    g.drawLine(145, 100, 145, 150);
    g.drawLine(120, 125, 170, 125);
    g.drawLine(130, 105, 160, 145);
    g.drawLine(160, 105, 130, 145);
  }
}