import matplotlib.pyplot as plt

wave_l,  scat_l= [], []
for line in open('lsc_aerogel_10300_clean.dat', 'r'):
    lines = [float(s) for s in line.split()]
    wave_l.append(lines[0])
    scat_l.append(lines[2]/10)

plt.title("Scattering length of aerogel")
plt.xlabel('$\lambda$, nm', loc='right')
plt.ylabel('$L_{SCAT}$, cm', loc='top')
plt.plot(wave_l, scat_l, marker = 'o', markersize=2, c = 'b', linestyle='None', linewidth=2)
#plt.xticks(rotation = 25)
#plt.autoscale(enable=True, axis='both', tight = None)
plt.show()