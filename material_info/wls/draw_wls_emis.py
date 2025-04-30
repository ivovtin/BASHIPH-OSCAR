import matplotlib.pyplot as plt
import math

# H constant define
h = 6.626 * 10**-34
#Speed of light define
c = 3 * 10**8

wave_l, emis = [], []
for line in open('wls_emis.csv', 'r'):
    lines = [float(s) for s in line.split()]
    wave_l.append(lines[0])
    cor = lines[1] * 1.25    
    emis.append(cor)    
    en = h * c / (lines[0] * 10**-9) / (1.602176565 * 10**-19)
    #print(en," ",lines[1])
    print(en," ",cor)

plt.title("Emission of BBQ")
plt.xlabel('$\lambda$, nm', loc='right')
plt.ylabel('Emission, arb. units', loc='top')
plt.plot(wave_l, emis, marker = 'o', markersize=2, c = 'b', linestyle='None', linewidth=2)
plt.show()