// 1)

if (j == 0) {
	b = true;
} else {
	if (i / j < k) {
		b = false;
	} else {
		b = true;
	}
}

// CORRECTION :

b = !j || i / j >= k;

// 2)

if (i < 1) {
	b = true;
} else {
	b = i > 2;
}

// CORRECTION : 

b = i != 1 && i != 2;
b = i < 1 || i > 2;
