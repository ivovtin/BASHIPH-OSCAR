import matplotlib.pyplot as plt

# H constant define
h = 6.626 * 10**-34
#Speed of light define
c = 3 * 10**8

wave_l, ref = [], []
for line in open('teflon_ref.csv', 'r'):
    lines = [float(s) for s in line.split()]
    wave_l.append(lines[0])
    ref.append(lines[1])
    en = h * c / (lines[0] * 10**-9) / (1.602176565 * 10**-19)
    print(en," ",lines[1])

plt.title("Reflectivity of Teflon (PTFE)")
plt.xlabel('$\lambda$, nm', loc='right')
plt.ylabel('Reflectivity', loc='top')
plt.plot(wave_l, ref, marker = 'o', markersize=2, c = 'b', linestyle='None', linewidth=2)
plt.show()