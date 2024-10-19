import java.awt.event.*;
import javax.swing.*;

public class SumRev extends JApplet implements ActionListener {

  // Declare components
  JLabel l1, l2, l3;
  JTextField t1, t2, t3;
  JButton b;

  public void init() {
    // Set layout
    setLayout(null);

    // Initialize components
    l1 = new JLabel("Number");
    l1.setBounds(100, 50, 200, 50);

    t1 = new JTextField();
    t1.setBounds(200, 50, 200, 50);

    b = new JButton("Result");
    b.setBounds(150, 150, 100, 50);

    l2 = new JLabel("Sum");
    l2.setBounds(100, 250, 200, 50);

    t2 = new JTextField();
    t2.setBounds(200, 250, 200, 50);

    l3 = new JLabel("Reverse");
    l3.setBounds(100, 350, 200, 50);

    t3 = new JTextField();
    t3.setBounds(200, 350, 200, 50);

    // Add components to applet
    add(l1);
    add(l2);
    add(l3);
    add(t1);
    add(t2);
    add(t3);
    add(b);

    // Add action listener to button
    b.addActionListener(this);
  }

  public void actionPerformed(ActionEvent e) {
    // Get input value
    int x = Integer.parseInt(t1.getText());

    // Initialize variables
    int a, m = 0, sum = 0;

    // Calculate sum and reverse
    while (x != 0) {
      a = x % 10;
      sum += a; // sum of digits
      x /= 10;
      m = m * 10 + a; // number reverse
    }

    // Display results
    t2.setText(Integer.toString(sum));
    t3.setText(Integer.toString(m));
  }
}