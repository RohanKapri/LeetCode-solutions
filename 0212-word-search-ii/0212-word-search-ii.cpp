class Solution {
public:
    struct TrieNode {
        TrieNode* children[26] = {};
        string word = "";
    };

    void addWord(TrieNode* root, string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children[c - 'a']) {
                node->children[c - 'a'] = new TrieNode();
            }
            node = node->children[c - 'a'];
        }
        node->word = word;
    }

    void search(vector<vector<char>>& board, int i, int j, TrieNode* node, vector<string>& result) {
        char c = board[i][j];
        if (c == '#' || !node->children[c - 'a']) return;

        node = node->children[c - 'a'];
        if (!node->word.empty()) {
            result.push_back(node->word);
            node->word.clear();
        }

        board[i][j] = '#';
        int rows = board.size(), cols = board[0].size();
        if (i > 0) search(board, i - 1, j, node, result);
        if (j > 0) search(board, i, j - 1, node, result);
        if (i < rows - 1) search(board, i + 1, j, node, result);
        if (j < cols - 1) search(board, i, j + 1, node, result);
        board[i][j] = c;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root = new TrieNode();
        for (string& word : words) addWord(root, word);

        vector<string> result;
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                search(board, i, j, root, result);
            }
        }

        return result;
    }
};
