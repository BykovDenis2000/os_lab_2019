#!/bin/bash

MAXCOUNT=150
count=1

while [ "$count" -le $MAXCOUNT ]      # Генерация 150 ($MAXCOUNT) случайных чисел.
do
  number=$RANDOM
  echo $number
  let "count += 1"  # Нарастить счетчик.
done
