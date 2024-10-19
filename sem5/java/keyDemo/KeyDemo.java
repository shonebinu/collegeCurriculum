import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class KeyDemo extends Applet implements KeyListener {

  String msg;

  public void init() {
    addKeyListener(this);
  }

  // KeyListener methods

  public void keyPressed(KeyEvent e) {
    msg = "Key Pressed";
    repaint();
  }

  public void keyReleased(KeyEvent e) {
    msg = "Key Released";
    repaint();
  }

  public void keyTyped(KeyEvent e) {
    msg = "Key Typed";
    repaint();
  }

  // Painting method

  public void paint(Graphics g) {
    g.drawString(msg, 50, 100);
  }
}