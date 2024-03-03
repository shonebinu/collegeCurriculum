echo "Enter a number: "
read n

num=$n
reverse=0

while [ $n -gt 0 ]; do
  a=$(($n % 10))
  n=$(($n / 10))
  reverse=$(($reverse * 10 + $a)) # (()), this syntax doesn't require backslash for multiplication
done

if [ $num -eq $reverse ]; then
  echo "Palindrome"
else
  echo "Not palindrome"
fi
