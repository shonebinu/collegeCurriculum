hour=$(date +%H)

if [ $hour -lt 12 ]
then echo "Good morning"
else echo "Good afternoon"
fi
