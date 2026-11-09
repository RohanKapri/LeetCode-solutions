
class Solution {
    public boolean canRemoveAll(int[] types, int[] colors, int[] groupSize) {
        int length = types.length;

        int[] typeStack = new int[length];
        int[] colorStack = new int[length];
        int[] frequencyStack = new int[length];

        int pointer = -1;

        for (int index = 0; index < length; index++) {
            int currentType = types[index];
            int currentColor = colors[index];

            if (pointer >= 0 &&
                    typeStack[pointer] == currentType &&
                    colorStack[pointer] == currentColor) {
                frequencyStack[pointer]++;
            } else {
                pointer++;
                typeStack[pointer] = currentType;
                colorStack[pointer] = currentColor;
                frequencyStack[pointer] = 1;
            }

            if (frequencyStack[pointer] == groupSize[currentType]) {
                pointer--;
            }
        }

        return pointer == -1;
    }
}
