echo "Enter two strings: "
read str1
read str2

if [ "$str1" = "$str2" ]; then # -eq doesn't work for strings
  echo "Both strings are equal"
else
  echo "Strings are not equal"
fi

if [ -z "$str1" ]; then
  echo "String's length is zero"
else
  echo "String's length is not zero"
fi

str3="$str1$str2"
echo "Concatenated string: $str3"

