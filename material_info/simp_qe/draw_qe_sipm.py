import matplotlib.pyplot as plt

# H constant define
h = 6.626 * 10**-34
#Speed of light define
c = 3 * 10**8

wave_l, qe = [], []
for line in open('QE_s13363-3050ne-16.csv', 'r'):
    lines = [float(s) for s in line.split()]
    wave_l.append(lines[0])
    qe.append(lines[1])
    en = h * c / (lines[0] * 10**-9) / (1.602176565 * 10**-19)
    print(en," ",lines[1]/100)

plt.title("Photon detection efficiency of HAMAMATSU S13363-3050NE-16 SiPM")
plt.xlabel('$\lambda$, nm', loc='right')
plt.ylabel('Photon detection efficiency (%)', loc='top')
plt.plot(wave_l, qe, marker = 'o', markersize=2, c = 'b', linestyle='None', linewidth=2)
plt.show()