class Solution {
public:
    vector<string> readBinaryWatch(int ledCount) {
        if (ledCount >= 9) return {};
        
        array<vector<int>, 4> hourBuckets;
        for (unsigned hourVal = 0; hourVal < 12; hourVal++) {
            int bitUsed = popcount(hourVal);
            hourBuckets[bitUsed].push_back(hourVal);
        }

        array<vector<int>, 6> minuteBuckets;
        for (unsigned minuteVal = 0; minuteVal < 60; minuteVal++) { 
            int bitUsed = popcount(minuteVal);
            minuteBuckets[bitUsed].push_back(minuteVal);
        }

        vector<string> resultTimes;

        for (int hourBits = 0; hourBits <= ledCount; hourBits++) {
            if (hourBits >= 4 || ledCount - hourBits >= 6) continue;

            for (auto chosenHour : hourBuckets[hourBits]) {
                string hourText = to_string(chosenHour);
                int minuteBits = ledCount - hourBits;

                for (auto chosenMinute : minuteBuckets[minuteBits]) {
                    string minuteText = ":";
                    if (chosenMinute <= 9) minuteText.push_back('0');
                    minuteText += to_string(chosenMinute);

                    resultTimes.push_back(hourText + minuteText);
                }
            }
        }

        return resultTimes;
    }
};
