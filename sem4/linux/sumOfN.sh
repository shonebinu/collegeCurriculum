echo "Enter a limit: "
read limit

sum=0
count=1

while [ $count -le $limit ]; do
  echo "Enter number: "
  read num
  sum=$(($sum + $num))
  count=$(($count + 1))
done

echo "Sum = $sum"
