echo "Enter a number: "
read num

even=0
odd=0
count=0

while [ $num -gt 0 ]; do
  tmp=$(($num % 10))

  if [ $(($tmp % 2)) -eq 0 ]; then
    even=$(($even + $tmp))
  else
    odd=$(($odd + $tmp)) 
    count=$(($count + 1))
  fi

  num=$(($num / 10))
done
    
avg=$(($odd / $count))

echo "SUM OF EVEN DIGITS: $even"
echo "SUM OF ODD DIGITS: $odd"
echo "AVERAGE OF ODD DIGITS: $avg"
