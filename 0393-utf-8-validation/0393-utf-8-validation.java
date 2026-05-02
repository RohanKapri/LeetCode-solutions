class Solution {
    public boolean validUtf8(int[] data) {
        int i = 0;
        while (i < data.length) {
            int byte1 = data[i];
            
            if ((byte1 & 0x80) == 0) {
                // 1-byte character
                i++;
            } else if ((byte1 & 0xE0) == 0xC0) {
                // 2-byte character
                if (i + 1 >= data.length || (data[i + 1] & 0xC0) != 0x80) {
                    return false;
                }
                i += 2;
            } else if ((byte1 & 0xF0) == 0xE0) {
                // 3-byte character
                if (i + 2 >= data.length || (data[i + 1] & 0xC0) != 0x80 || (data[i + 2] & 0xC0) != 0x80) {
                    return false;
                }
                i += 3;
            } else if ((byte1 & 0xF8) == 0xF0) {
                // 4-byte character
                if (i + 3 >= data.length || (data[i + 1] & 0xC0) != 0x80 || (data[i + 2] & 0xC0) != 0x80 || (data[i + 3] & 0xC0) != 0x80) {
                    return false;
                }
                i += 4;
            } else {
                return false;
            }
        }
        return true;
    }
}
