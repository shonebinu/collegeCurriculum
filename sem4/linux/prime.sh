echo "Enter a number: "
read n

if [ $n -lt 2 ]; then
  echo "Not prime"
  exit
fi

flag=0
i=2

while [ $i -le $(($n / 2)) ]; do
  if [ $(($n % $i)) -eq 0 ]; then
    flag=1
    break
  fi
  i=$(($i+1))
done

if [ $flag -eq 0 ]; then
  echo "Prime"
else
  echo "Not prime"
fi
