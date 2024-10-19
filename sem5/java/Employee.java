import java.sql.*;
import java.util.Scanner;

public class Employee {
    public static void main(String arg[]) {
        Scanner s = new Scanner(System.in);

        try {
            System.out.println("Enter Empno");
            int eno = s.nextInt();

            System.out.println("Enter Emp name");
            String name = s.next();

            System.out.println("Enter Emp Designation");
            String des = s.next();

            System.out.println("Enter Emp salary");
            int sal = s.nextInt();

            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost/db_emp", "root", "toor");

            PreparedStatement pst = con.prepareStatement("insert into employe values(?,?,?,?)");

            pst.setInt(1, eno);
            pst.setString(2, name);
            pst.setString(3, des);
            pst.setInt(4, sal);

            int i = pst.executeUpdate();

            if (i != 0) {
                System.out.println("added");

                Statement stmnt = con.createStatement();
                ResultSet rs = stmnt.executeQuery("select * from employe");

                while (rs.next()) {
                    System.out
                            .println(rs.getInt(1) + " " + rs.getString(2) + " " + rs.getString(3) + " " + rs.getInt(4));
                }
            } else {
                System.out.println("failed to add");
            }

            con.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}