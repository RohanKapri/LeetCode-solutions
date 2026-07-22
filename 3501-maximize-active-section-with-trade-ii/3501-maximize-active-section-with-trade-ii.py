class Solution:
    def maxActiveSectionsAfterTrade(self, s, queries):
        total_length = len(s)
        active_sections_count = s.count('1')
        
        blocks = []
        start_position = 0
        for i in range(total_length):
            if i == total_length - 1 or s[i] != s[i + 1]:
                blocks.append((start_position, i - start_position + 1))
                start_position = i + 1
        block_count = len(blocks)
        
        max_power = 20
        INF = 10**9
        NEG_INF = -INF
        sparse_table = [[NEG_INF] * block_count for _ in range(max_power)]
        
        for i in range(block_count):
            if s[blocks[i][0]] == '0' and i + 2 < block_count:
                sparse_table[0][i] = blocks[i][1] + blocks[i + 2][1]
        
        for power in range(1, max_power):
            range_size = 1 << power
            for i in range(block_count - range_size + 1):
                sparse_table[power][i] = max(sparse_table[power - 1][i],
                                              sparse_table[power - 1][i + (range_size >> 1)])
        
        def query_max_in_range(l, r):
            if l > r:
                return NEG_INF
            p = (r - l + 1).bit_length() - 1
            return max(sparse_table[p][l], sparse_table[p][r - (1 << p) + 1])
        
        output_results = []
        for left, right in queries:
            left_index = bisect_right(blocks, (left, INF)) - 1
            right_index = bisect_right(blocks, (right, INF)) - 1
            
            if right_index - left_index + 1 <= 2:
                output_results.append(active_sections_count)
                continue
            
            def get_block_length(i):
                if i == left_index:
                    return blocks[left_index][1] - (left - blocks[left_index][0])
                if i == right_index:
                    return right - blocks[right_index][0] + 1
                return blocks[i][1]
            
            def compute_new_blocks(i):
                if i < 0 or i + 2 >= block_count or s[blocks[i][0]] == '1':
                    return NEG_INF
                return get_block_length(i) + get_block_length(i + 2)
            
            best_increase = max(query_max_in_range(left_index + 1, right_index - 3), 0)
            best_increase = max(best_increase, compute_new_blocks(left_index))
            best_increase = max(best_increase, compute_new_blocks(right_index - 2))
            
            output_results.append(active_sections_count + best_increase)
        
        return output_results