
def imprimir_mi_propio_codigo():
	with open(__file__) as f:
		print(f.read())


if __name__ == '__main__':
	imprimir_mi_propio_codigo()