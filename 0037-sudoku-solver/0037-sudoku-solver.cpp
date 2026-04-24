// Dedicated to Junko F. Didi and Shree DR.MDD  

#include <bits/stdc++.h>
using namespace std;

class Solution {
	unsigned rowMask[9]={0};
    unsigned colMask[9]={0};
    unsigned boxMask[9]={0};
    vector<pair<char, char>> blanks;
public:
     void print(vector<vector<char>>& mat){
        for(vector<char>& r: mat){
            for(char& cc: r)
                cout<<cc;
            cout<<endl;
        }
        cout<<"===========\n";
    }
    void applyMask(int r, int c,  int val){
        const int bit=1<<val;
		rowMask[r]|=bit;
        colMask[c]|=bit;
        const int boxId=(r/3)*3 +c/3;
        boxMask[boxId]|=bit;
	}

    void initialize(vector<vector<char>>& mat) {
        blanks.reserve(81);
        for (int r=0; r<9; r++) {
            for (int c=0; c<9; c++) {
                char cc=mat[r][c];
                if (cc=='.') {
                    blanks.emplace_back(r, c);
                }
                else {
                    applyMask(r, c, cc-'1');
                }
            }
        }
    }

    bool backtrack(vector<vector<char>>& mat, int pos) {
        if (pos==blanks.size()) return 1; 
        auto [r, c]=blanks[pos];
        const int boxId=(r/3)*3 +c/3;
        unsigned avail=~(rowMask[r]|colMask[c]|boxMask[boxId]) & 0b111111111;
        unsigned bitPick=0;
        for (; avail; avail^=bitPick) {
            bitPick=bit_floor(avail);
            const int val=countr_zero(bitPick);

            mat[r][c]='1'+val;
            rowMask[r]|=bitPick; colMask[c]|=bitPick; boxMask[boxId]|=bitPick;
            if (backtrack(mat, pos+1)) return 1;
            rowMask[r]^=bitPick; colMask[c]^=bitPick; boxMask[boxId]^=bitPick;
            mat[r][c]='.';
        }
        return 0; 
    }

    void solveSudoku(vector<vector<char>>& board) {
        initialize(board);
        backtrack(board, 0);
    }
};
