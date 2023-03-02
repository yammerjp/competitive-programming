function abs(x) {
  if (x > 0) return x;
  return -x;
}
function min(x,y) {
  if (x>y) return y;
  return x;
}
NR==1{
  N = $1;
}
NR==2{
  mincost[1] = 0;
  mincost[2] = mincost[1] + abs($2 - $1);
  for(i=3;i<=NF;i++) {
    mincost[i] = min( mincost[i-1] + abs($i - $(i-1)), mincost[i-2] + abs($i - $(i-2)));
  }
  p=N;
  for(i=1;p>1;i++) {
    routes[i] = p;
    if (mincost[p] == mincost[p-1] + abs($p - $(p-1))) {
      p--;
    } else {
      p-=2;
    }
  }
  len=length(routes);
  print len + 1;
  printf "1";
  for(i=len;i>0;i--) {
    printf " %d", routes[i];
  }
}
