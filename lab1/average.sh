#!/bin/bash
n=0
res=0
index=0

while read line; do
    array[$index]="$line"
    index=$(($index+1))
done < /projects/BykovDenis2000-os_lab_2019/lab1/src/numbers.txt

for ((a=0; a < ${#array[*]}; a++))
do
    res=$(($res+ ${array[$a]}))
    n=$(($n+1))
done

res=$(($res/150))
echo "Количество чисел: $n Среднее арифметическое: $res"
exit 0
