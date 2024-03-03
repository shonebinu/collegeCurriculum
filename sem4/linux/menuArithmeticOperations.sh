echo "Enter two numbers: "
read a
read b

echo "1. Addition"
echo "2. Substraction"
echo "3. Multiplication"
echo "4. Division"
echo "Enter your choice: "
read ch

case $ch in
  1) echo $(expr $a + $b)
    ;;
  2) echo $(expr $a - $b)
    ;;
  3) echo $(expr $a \* $b)
    ;;
  4) echo $(expr $a / $b)
    ;;
  *) echo "Invalid choice"
    ;;
esac

