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
END{
  times[1] = 0;
  times[2] = A[2];
  for(i = 3; i <= N; i++) {
    fromA = times[i-1] + A[i];
    fromB = times[i-2] + B[i];
    if (fromA>fromB) {
      times[i]=fromB;
    } else {
      times[i]=fromA;
    }
  }
  p=N;
  for(i=1;p>0;i++) {
    routes[i] = p;
    if (times[p] == times[p-1] + A[p]) {
       p--;
    } else {
       p-=2;
    }
  }
  len = length(routes);
  print len;
  for(i=len;i>0;i--) {
    if (i == 1) {
      printf "%d\n", routes[i];
    } else {
      printf "%d ", routes[i];
    }
  }
}
