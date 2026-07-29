// For my Shree DR.MDD
class Solution {
    private static long limit = 1000001;

    private long calculateUniquePermutations(int[] charCounts) {
        int totalCharacters = 0;
        for (int i = 0; i < charCounts.length; i++) {
            totalCharacters += charCounts[i];
        }
        long result = 1;
        for (int i = 0; i < 26; i++) {
            int count = charCounts[i];
            result = result * computeCombinations(totalCharacters, count);
            if (result >= limit)
                return limit;
            totalCharacters -= count;
        }
        return result;
    }

    private long computeCombinations(int total, int count) {
        if (count > total) return 0;
        if (count > total - count) count = total - count;
        long res = 1;
        for (int i = 1; i <= count; i++) {
            res = res * (total - i + 1) / i;
            if (res >= limit) return limit;
        }
        return res;
    }

    public String smallestPalindrome(String inputString, int k) {
        int[] frequencyArray = new int[26];
        for (char character : inputString.toCharArray()) {
            frequencyArray[character - 'a']++;
        }

        int oddFrequencyCount = 0;
        int middleCharacterIndex = 0;

        for (int i = 0; i < 26; i++) {
            if (frequencyArray[i] % 2 != 0) {
                oddFrequencyCount++;
                middleCharacterIndex = i;
            }
        }

        if (oddFrequencyCount > 1) return "";

        int[] halfFrequencyArray = new int[26];
        int halfLength = 0;

        for (int i = 0; i < 26; i++) {
            halfFrequencyArray[i] = frequencyArray[i] / 2;
            halfLength += halfFrequencyArray[i];
        }

        long totalUniquePermutations = calculateUniquePermutations(halfFrequencyArray);
        if (k > totalUniquePermutations) return "";

        StringBuilder firstHalfBuilder = new StringBuilder();
        for (int position = 0; position < halfLength; position++) {
            for (int charIndex = 0; charIndex < 26; charIndex++) {
                if (halfFrequencyArray[charIndex] > 0) {
                    halfFrequencyArray[charIndex]--;
                    long permutations = calculateUniquePermutations(halfFrequencyArray);
                    if (permutations >= k) {
                        firstHalfBuilder.append((char) ('a' + charIndex));
                        break;
                    } else {
                        k -= permutations;
                        halfFrequencyArray[charIndex]++;
                    }
                }
            }
        }

        String firstHalf = firstHalfBuilder.toString();
        String reversedHalf = new StringBuilder(firstHalf).reverse().toString();
        String middleCharacter = (oddFrequencyCount == 1) ? String.valueOf((char) ('a' + middleCharacterIndex)) : "";

        return firstHalf + middleCharacter + reversedHalf;
    }
}