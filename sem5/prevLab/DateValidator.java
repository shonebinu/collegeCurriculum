/*
 * Define class MyDate with members: day, month, and year. Define default and
 * parameterized constructors. Accept values from the command line and create a
 * date object. Throw user-defined exceptions – “InvalidDayException” or
 * “InvalidMonthException” if the day and month are invalid. If the date is
 * valid, display the message “Valid date”.
 */

class InvalidDayException extends Exception {
  InvalidDayException(int day) {
    super("Invalid day: " + day);
  }
}

class InvalidMonthException extends Exception {
  InvalidMonthException(int month) {
    super("Invalid month: " + month);
  }
}

class MyDate {
  int day, month, year;

  MyDate(int day, int month, int year) throws InvalidDayException, InvalidMonthException {
    if (month < 1 || month > 12)
      throw new InvalidMonthException(month);

    int maxDays = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11)
      maxDays = 30;
    else if (month == 2) {
      if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        maxDays = 29;
      else
        maxDays = 28;
    }

    if (day < 1 || day > maxDays)
      throw new InvalidDayException(day);

    this.day = day;
    this.month = month;
    this.year = year;
  }

  void display() {
    System.out.println("Valid date: " + day + "/" + month + "/" + year);
  }
}

class DateValidator {
  public static void main(String args[]) {
    try {
      int d = Integer.parseInt(args[0]);
      int m = Integer.parseInt(args[1]);
      int y = Integer.parseInt(args[2]);

      MyDate date = new MyDate(d, m, y);
      date.display();
    } catch (InvalidDayException e) {
      System.out.println(e.getMessage());
    } catch (InvalidMonthException e) {
      System.out.println(e.getMessage());
    } catch (ArrayIndexOutOfBoundsException e) {
      System.out.println("Please provide day, month and year as command line arguments");
    } catch (NumberFormatException e) {
      System.out.println("Please provide valid numbers");
    }
  }
}