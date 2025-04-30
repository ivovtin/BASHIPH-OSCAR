import matplotlib.pyplot as plt

wave_l,  abs_l= [], []
for line in open('labs_aerogel_10300_clean.dat', 'r'):
    lines = [float(s) for s in line.split()]
    wave_l.append(lines[0])
    abs_l.append(lines[2])

plt.title("Absorption length of aerogel")
plt.xlabel('$\lambda$, nm', loc='right')
plt.ylabel('$L_{ABS}$, mm', loc='top')
plt.plot(wave_l, abs_l, marker = 'o', markersize=2, c = 'b', linestyle='None', linewidth=2)
#plt.xticks(rotation = 25)
#plt.autoscale(enable=True, axis='both', tight = None)
plt.show()