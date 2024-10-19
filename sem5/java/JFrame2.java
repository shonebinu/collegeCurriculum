import javax.swing.*;
import java.awt.event.*;

public class JFrame2 {

  // Declare components
  JLabel l1, l2, l3;
  JTextField t1, t2, t3;
  JButton b;

  // Constructor
  JFrame2() {
    // Create JFrame
    JFrame f = new JFrame();
    f.setLayout(null);

    // Initialize components
    l1 = new JLabel("First Number");
    l1.setBounds(100, 100, 100, 50);
    t1 = new JTextField();
    t1.setBounds(200, 100, 100, 50);

    l2 = new JLabel("Second Number");
    l2.setBounds(100, 200, 100, 50);
    t2 = new JTextField();
    t2.setBounds(200, 200, 100, 50);

    b = new JButton("Add");
    b.setBounds(150, 300, 100, 50);

    l3 = new JLabel("Result");
    l3.setBounds(100, 400, 100, 50);
    t3 = new JTextField();
    t3.setBounds(200, 400, 100, 50);

    // Add components to JFrame
    f.add(l1);
    f.add(l2);
    f.add(l3);
    f.add(t1);
    f.add(t2);
    f.add(t3);
    f.add(b);

    // Set JFrame properties
    f.setSize(400, 500);
    f.setVisible(true);
    f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    // Add action listener to button
    b.addActionListener(new ActionListener() {
      public void actionPerformed(ActionEvent e) {
        // Get input values
        int x = Integer.parseInt(t1.getText());
        int y = Integer.parseInt(t2.getText());

        // Calculate result
        int c = x + y;

        // Display result
        t3.setText(Integer.toString(c));
      }
    });
  }

  // Main method
  public static void main(String args[]) {
    new JFrame2();
  }
}