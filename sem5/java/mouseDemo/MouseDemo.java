import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class MouseDemo extends Applet implements MouseListener, MouseMotionListener {

  int x, y;
  String msg;

  public void init() {
    addMouseListener(this);
    addMouseMotionListener(this);
  }

  // MouseListener methods

  public void mouseClicked(MouseEvent e) {
    msg = "Mouse clicked";
    repaint();
  }

  public void mouseEntered(MouseEvent e) {
    msg = "Mouse entered into the screen";
    repaint();
  }

  public void mouseExited(MouseEvent e) {
    msg = "Mouse exited";
    repaint();
  }

  public void mousePressed(MouseEvent e) {
    x = e.getX();
    y = e.getY();
    showStatus("Mouse pressed at X=" + x + " Y=" + y);
    repaint();
  }

  public void mouseReleased(MouseEvent e) {
    x = e.getX();
    y = e.getY();
    showStatus("Mouse released at X=" + x + " Y=" + y);
    repaint();
  }

  // MouseMotionListener methods

  public void mouseDragged(MouseEvent e) {
    x = e.getX();
    y = e.getY();
    showStatus("Mouse dragged at X=" + x + " Y=" + y);
    repaint();
  }

  public void mouseMoved(MouseEvent e) {
    x = e.getX();
    y = e.getY();
    showStatus("Mouse moved at X=" + x + " Y=" + y);
    repaint();
  }

  // Painting method

  public void paint(Graphics g) {
    g.drawString(msg, 100, 100);
  }
}