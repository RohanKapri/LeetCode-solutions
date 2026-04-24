# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        column_bits = [0]*9
        row_bits = [0]*9
        square_bits = [0]*9

        for row_idx in range(9):
            for col_idx in range(9):
                cell_val = board[row_idx][col_idx]
                if cell_val == '.': 
                    continue
                bit_pos = (ord(cell_val) - ord('0')) % 9

                if (row_bits[row_idx] >> bit_pos) & 1: 
                    return False
                row_bits[row_idx] |= 1 << bit_pos

                if (column_bits[col_idx] >> bit_pos) & 1: 
                    return False
                column_bits[col_idx] |= 1 << bit_pos

                block_idx = row_idx // 3 * 3 + col_idx // 3
                if (square_bits[block_idx] >> bit_pos) & 1: 
                    return False
                square_bits[block_idx] |= 1 << bit_pos

        return True
