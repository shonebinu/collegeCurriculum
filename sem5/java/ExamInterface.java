import java.util.Scanner;

interface Exam {
    boolean pass(int mark);
}

interface Classify {
    String division(int average);
}

class Result implements Exam, Classify {
    public boolean pass(int mark) {
        return mark >= 50;
    }

    public String division(int average) {
        if (average >= 60) {
            return "FIRST";
        } else if (average >= 50 && average < 60) {
            return "SECOND";
        } else {
            return "NO DIVISION";
        }
    }
}

class ExamInterface {
    public static void main(String[] args) {
        int mark, averageScore;
        boolean passStatus;
        String grade;
        Scanner input = new Scanner(System.in);
        Result result = new Result();

        System.out.println("Enter the pass mark:");
        mark = input.nextInt();
        System.out.println("Enter the average mark:");
        averageScore = input.nextInt();

        passStatus = result.pass(mark);
        grade = result.division(averageScore);

        System.out.println(passStatus);
        System.out.println(grade);
    }
}