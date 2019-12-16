#ifndef WORDSEARCHII_H
#define WORDSEARCHII_H
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

/*
https://leetcode.com/problems/word-search-ii/
Input:
board = [
  ['o','a','a','n'],
  ['e','t','a','e'],
  ['i','h','k','r'],
  ['i','f','l','v']
]
words = ["oath","pea","eat","rain"]

Output: ["eat","oath"]

*/

using namespace std;

class WordSearchII {
private:
    struct TrieNode {
        string word;
        bool end;
        unordered_map<char, TrieNode*> children;
    };

    void buildTrie(vector<string>& words) {
        for (string word : words) {
            TrieNode *node = root;

            for (char c : word) {
                if (node->children.count(c) == 0) {
                    node->children[c] = new TrieNode();
                }
                node = node->children[c];
            }
            node->word = word;
            node->end = true;
        }
    }

    TrieNode *root = new TrieNode();
    vector<string> results;
public:
    vector<string> findWords(vector<vector<char>> &board, vector<string>& words) {
        buildTrie(words);
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if (root->children.count(board[i][j])) {
                    dfs(board, i, j, root->children[board[i][j]]);
                }
            }
        }
        return results;
    }

    void dfs(vector<vector<char>>& board, int i, int j, TrieNode *node) {
        const int dx[4] = {-1, 0, 1, 0};
        const int dy[4] = {0, 1, 0, -1};
        char letter = board[i][j];
        if (!node->word.empty()) {
            results.push_back(node->word);
            node->word.clear();
        }
        board.at(i).at(j) = '#'; // mark visited;
        for (int k = 0; k < 4; k++) {
            int x = i + dx[k];
            int y = j + dy[k];
            if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size())
                continue;
            if (board[x][y] != '#' && node->children.count(board[x][y])) {
                dfs(board, x, y, node->children[board[x][y]]);
            }
        }
        board[i][j] = letter;
    }
};


#endif // WORDSEARCHII_H
