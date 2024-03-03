echo "Enter the filename: "
read f1

if test -e $f1; then # instead of []
  echo "File does exist"
  if test -s $f1; then
    echo "File not empty"
  else
    echo "File empty"
  fi

  if test -f $f1; then
    echo "File is ordinary"
  else
    echo "File not ordinary"
  fi

  if test -d $f1; then
    echo "It is a directory"
  else
    echo "It is not a directory"
  fi

  if test -r $f1; then
    echo "It is readable file"
  else
    echo "It is not readable"
  fi

  if test -w $f1; then
    echo "It is writeable file"
  else
    echo "It is not writeable file"
  fi

  
