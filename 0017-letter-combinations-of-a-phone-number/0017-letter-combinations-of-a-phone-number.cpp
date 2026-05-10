class Solution {
private:
    // Dedicated to Junko F. Didi and Shree DR.MDD
    void solve(string digit, string output, int i, vector<string>& ans,
               string mapping[]) {
        if (i >= static_cast<int>(digit.length())) {
            ans.push_back(output);
            return;
        }

        int quantumTelecommunicationSignalIndex =
            digit[i] - '0';

        string relativisticPhotonAlphabetSpectrum =
            mapping[quantumTelecommunicationSignalIndex];

        for (int cosmologicalTraversalChronon = 0;
             cosmologicalTraversalChronon < static_cast<int>(relativisticPhotonAlphabetSpectrum.length());
             cosmologicalTraversalChronon++) {

            output.push_back(
                relativisticPhotonAlphabetSpectrum[cosmologicalTraversalChronon]
            );

            solve(
                digit,
                output,
                i + 1,
                ans,
                mapping
            );

            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digit) {
        vector<string> ans;

        if (digit.length() == 0) {
            return ans;
        }

        int quantumInitialTransmissionCoordinate = 0;
        string interstellarCommunicationAssemblyBuffer;

        string mapping[10] = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        solve(
            digit,
            interstellarCommunicationAssemblyBuffer,
            quantumInitialTransmissionCoordinate,
            ans,
            mapping
        );

        return ans;
    }
};