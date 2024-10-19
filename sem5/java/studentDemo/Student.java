import java.awt.event.*;
import javax.swing.*;

public class Student extends JApplet implements ActionListener {

  // Declare components
  JLabel l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15;
  JTextField t1, t2, t3, t4, t5;
  JButton b;

  public void init() {
    // Set layout
    setLayout(null);

    // Initialize labels and text fields
    l1 = new JLabel("Name");
    l1.setBounds(100, 50, 100, 25);
    t1 = new JTextField();
    t1.setBounds(225, 50, 100, 25);

    l2 = new JLabel("Roll No");
    l2.setBounds(100, 100, 100, 25);
    t2 = new JTextField();
    t2.setBounds(225, 100, 100, 25);

    l3 = new JLabel("Mark1");
    l3.setBounds(100, 150, 100, 25);
    t3 = new JTextField();
    t3.setBounds(225, 150, 100, 25);

    l4 = new JLabel("Mark2");
    l4.setBounds(100, 200, 100, 25);
    t4 = new JTextField();
    t4.setBounds(225, 200, 100, 25);

    l5 = new JLabel("Mark3");
    l5.setBounds(100, 250, 100, 25);
    t5 = new JTextField();
    t5.setBounds(225, 250, 100, 25);

    b = new JButton("Result");
    b.setBounds(150, 300, 100, 25);

    l6 = new JLabel("Name");
    l6.setBounds(100, 350, 100, 25);
    l7 = new JLabel();
    l7.setBounds(225, 350, 100, 25);

    l8 = new JLabel("Roll No");
    l8.setBounds(100, 400, 100, 25);
    l9 = new JLabel();
    l9.setBounds(225, 400, 100, 25);

    l10 = new JLabel("Total");
    l10.setBounds(100, 450, 100, 25);
    l11 = new JLabel();
    l11.setBounds(225, 450, 100, 25);

    l12 = new JLabel("Percentage");
    l12.setBounds(100, 500, 100, 25);
    l13 = new JLabel();
    l13.setBounds(225, 500, 100, 25);

    l14 = new JLabel("Grade");
    l14.setBounds(100, 550, 100, 25);
    l15 = new JLabel();
    l15.setBounds(225, 550, 100, 25);

    // Add components to applet
    add(t1);
    add(t2);
    add(t3);
    add(t4);
    add(t5);
    add(b);
    add(l1);
    add(l2);
    add(l3);
    add(l4);
    add(l5);
    add(l6);
    add(l7);
    add(l8);
    add(l9);
    add(l10);
    add(l11);
    add(l12);
    add(l13);
    add(l14);
    add(l15);

    // Add action listener to button
    b.addActionListener(this);
  }

  public void actionPerformed(ActionEvent e) {
    // Get input values
    String s = t1.getText();
    int rn = Integer.parseInt(t2.getText());
    int m1 = Integer.parseInt(t3.getText());
    int m2 = Integer.parseInt(t4.getText());
    int m3 = Integer.parseInt(t5.getText());

    // Calculate total and percentage
    int t = m1 + m2 + m3;
    double p = (t * 0.33); // (100/300) = 0.33

    // Display results
    l7.setText(s);
    l9.setText(Integer.toString(rn));
    l11.setText(Integer.toString(t));
    l13.setText(Double.toString(p));

    // Determine grade
    if (p >= 90) {
      l15.setText("A");
    } else if (p >= 80) {
      l15.setText("B");
    } else if (p >= 60) {
      l15.setText("C");
    } else if (p >= 50) {
      l15.setText("D");
    } else if (p >= 40) {
      l15.setText("E");
    } else {
      l15.setText("FAILED");
    }
  }
}