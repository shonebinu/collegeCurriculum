import java.applet.*;
import java.awt.*;

public class PassParam extends Applet {
  Font f1, f2;

  public void init()

  {
    f1 = new Font("Times New Roman", Font.BOLD, 24);
    f2 = new Font("Arial", Font.PLAIN, 18);
  }

  public void paint(Graphics g) {
    String rn = getParameter("rollno");
    String name = getParameter("stname");
    g.setColor(Color.red);
    g.setFont(f1);
    g.drawString("Student Details", 25, 20);

    g.setFont(f2);
    g.setColor(Color.black);
    g.drawString("Roll No:" + rn, 20, 40);
    g.drawString("Sudent Name:" + name, 20, 60);
  }
}