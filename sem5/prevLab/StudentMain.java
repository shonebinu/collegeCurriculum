/*
 * Write a Java program to find the details of the students eligible to enroll
 * for the examination (Students and Department jointly give the eligibility
 * criteria for the enrollment class) using interfaces.
 */

import java.util.Scanner;

interface Students {
    void getValue();

    String getName();

    int getSno();
}

interface Department {
    void getAttendance();

    int getAttendPercent();
}

interface Exam {
    void calAttendance();

    boolean eligible();
}

class Student implements Students, Department, Exam {
    int sno;
    String sname;
    String className;
    int attendance;
    int eligibleAttendance = 75; // minimum attendance required

    public void getValue() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Student No: ");
        sno = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter Student Name: ");
        sname = sc.nextLine();
        System.out.print("Enter Class: ");
        className = sc.nextLine();
    }

    public void getAttendance() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter attendance percentage: ");
        attendance = sc.nextInt();
    }

    public void calAttendance() {
        System.out.println("Attendance: " + attendance + "%");
    }

    public boolean eligible() {
        return attendance >= eligibleAttendance;
    }

    public String getName() {
        return sname;
    }

    public int getSno() {
        return sno;
    }

    public int getAttendPercent() {
        return attendance;
    }
}

class StudentMain {
    public static void main(String[] args) {
        Student s = new Student();
        s.getValue();
        s.getAttendance();
        s.calAttendance();

        if (s.eligible()) {
            System.out.println(s.getName() + " (Roll No: " + s.getSno() + ") is eligible for exam");
        } else {
            System.out.println(s.getName() + " (Roll No: " + s.getSno() + ") is not eligible for exam");
            System.out.println("Minimum attendance required: 75%");
            System.out.println("Current attendance: " + s.getAttendPercent() + "%");
        }
    }
}