if [ $# -ne 4 ]; then
  echo "Enter four arguments"
else
  touch $1 $2 $3
  mkdir $4
fi
