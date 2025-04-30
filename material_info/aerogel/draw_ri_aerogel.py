import matplotlib.pyplot as plt

wave_l, ri = [], []
for line in open('ri_aerogel_10300_clean.dat', 'r'):
    lines = [float(s) for s in line.split()]
    wave_l.append(lines[0])
    ri.append(lines[2])

plt.title("Refractive indexes of aerogel")
plt.xlabel('$\lambda$, nm', loc='right')
plt.ylabel('Refractive Index', loc='top')
plt.plot(wave_l, ri, marker = 'o', markersize=2, c = 'b', linestyle='None', linewidth=2)
#plt.xticks(rotation = 25)
#plt.autoscale(enable=True, axis='both', tight = None)
plt.show()