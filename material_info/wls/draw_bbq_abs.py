import matplotlib.pyplot as plt
import math

# H constant define
h = 6.626 * 10**-34
#Speed of light define
c = 3 * 10**8

wave_l, abs_l = [], []
for line in open('bbq_absl.csv', 'r'):
    lines = [float(s) for s in line.split()]
    wave_l.append(lines[0])    
    abs_l.append(lines[1])    
    #en = h * c / (lines[0] * 10**-9) / (1.602176565 * 10**-19)
    en = h * c / (350 * 10**-9) / (1.602176565 * 10**-19)
    print(en," ",lines[1])

plt.title("Absorption length of WLS")
plt.xlabel('$\lambda$, nm', loc='right')
plt.ylabel('$L_{ABS}$, cm', loc='top')
plt.yscale('log')
plt.plot(wave_l, abs_l, marker = 'o', markersize=2, c = 'b', linestyle='None', linewidth=2)
plt.show()