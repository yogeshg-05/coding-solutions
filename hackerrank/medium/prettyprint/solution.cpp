
// Format A: Hexadecimal, lowercase, with 0x prefix, truncated to integer
        cout << hex << left << showbase << nouppercase;
        cout << (long long)A << endl;

        // Format B: 2 decimal places, with +/- sign, right justified, 15 chars wide, padded with '_'
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        cout << B << endl;

        // Format C: 9 decimal places, scientific notation, uppercase 'E', no forced sign
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << endl;
