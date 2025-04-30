import matplotlib.pyplot as plt
import math

# H constant define
h = 6.626 * 10**-34
#Speed of light define
c = 3 * 10**8

wave_l, abs_l = [], []
for line in open('plex_bbq_3mm_abs_150mgkg.dat', 'r'):
    lines = [float(s) for s in line.split()]
    wave_l.append(lines[0])    
    #abs_l.append(lines[1])    
    mu = - math.log(lines[1], 10) / 3
    if mu < 0.0001:
       mu = 1 
    abs_l0 = 1/mu/10
    abs_l.append(abs_l0)
    en = h * c / (lines[0] * 10**-9) / (1.602176565 * 10**-19)
    print(en," ",abs_l0)

plt.title("Absorption length of WLS")
plt.xlabel('$\lambda$, nm', loc='right')
plt.ylabel('$L_{ABS}$, cm', loc='top')
plt.plot(wave_l, abs_l, marker = 'o', markersize=2, c = 'b', linestyle='None', linewidth=2)
plt.show()