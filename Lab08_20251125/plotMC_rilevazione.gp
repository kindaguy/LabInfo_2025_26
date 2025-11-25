set xlabel "x"
set ylabel "y"
set xrange [0:1]
set size square 1,1

f(x) = sqrt(1-x**2)
plot f(x) with lines, "vettoriPiano.dat"