function min(x, y) {
  if (x > y) {
    return y;
  }
  return x;
}
NR==1{
  N = $1;
}
NR==2{
  for(i =1; i <= NF; i++) {
    A[i+1] = $i;
  }
}
NR==3{
  for(i =1; i <= NF; i++) {
    B[i+2] = $i;
  }
}
END {
  times[1] = 0;
  times[2] = A[2];
  for(i = 3; i <= N; i++) {
    times[i] = min(times[i-1] + A[i],times[i-2] + B[i]);
  }
  print times[N];
}
