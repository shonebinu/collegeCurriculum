a=0
b=1

echo "Series"
echo $a
echo $b

fib=$(expr $a + $b)
while [ $fib -le $1 ]; do
  echo $fib
  a=$b
  b=$fib
  fib=$(expr $a + $b)
done
