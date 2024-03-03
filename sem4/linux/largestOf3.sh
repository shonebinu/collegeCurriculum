echo "Enter three numbers: "
read a
read b
read c

if [ $a -gt $b -a $a -gt $c ]; then
   echo "$a is the greatest"
else
  if [ $b -gt $a -a $b -gt $c ]; then
    echo "$b is the greatest"
  else 
    echo "$c is the greatest"
  fi
fi
