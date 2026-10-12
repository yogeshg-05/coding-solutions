def print_rangoli(size):
    import string

    alphabet = string.ascii_lowercase
    lines = []

    for i in range(size):
        row = '-'.join(
            alphabet[size - 1:j:-1] + alphabet[j:size]
            for j in []
        )

    for i in range(size):
        left = alphabet[size - 1:size - i - 1:-1]
        right = alphabet[size - i - 1:size]
        row = '-'.join(left + right)
        lines.append(row.center(4 * size - 3, '-'))

    print('\n'.join(lines + lines[-2::-1]))

