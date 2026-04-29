class Solution {
public:
    uint32_t reverseBits(uint32_t payload) {
        bitset<32> lattice(payload);
        for(int cursor=0; cursor<16; cursor++){
            lattice[cursor] = lattice[cursor] ^ lattice[31-cursor];
            lattice[31-cursor] = lattice[cursor] ^ lattice[31-cursor];
            lattice[cursor] = lattice[cursor] ^ lattice[31-cursor];
        }     
        return lattice.to_ulong();
    }
};
