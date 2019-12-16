#ifndef TRIE_H
#define TRIE_H

#include<string>
#include<unordered_map>

using namespace std;
class Trie {
private:
    struct TrieNode{
        unordered_map<char, TrieNode*> children;
        bool end = false;
    };

    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }

//    /** Inserts a word into the trie. */
//    void insert(string word) {
//        TrieNode* p = root;
//        for (auto letter : word) {
//            if (!p->next[letter - 'a']) {
//                p->next[letter - 'a'] = new TrieNode();
//            }
//            p = p->next[letter - 'a'];
//        }
//        p->end = true;
//    }

//    /** Returns if the word is in the trie. */
//    bool search(string word) {
//        TrieNode* p = root;
//        for (auto letter : word) {
//            if (!p->next[letter - 'a']) {
//                return false;
//            }
//            p = p->next[letter - 'a'];
//        }
//        return p->end;
//    }

//    /** Returns if there is any word in the trie that starts with the given prefix. */
//    bool startsWith(string prefix) {
//        TrieNode* p = root;
//        for (auto letter : prefix) {
//            if (!p->next[letter - 'a']) {
//                    return false;
//            }

//            p = p->next[letter - 'a'];
//        }
//        return true;
//    }


    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* p = root;
        for (auto c : word) {
            if (!p->children.count(c)) {
                p->children[c] = new TrieNode();
            }
            p = p->children[c];
        }

        p->end = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* p = root;
        for (auto c : word) {
            if (!p->children.count(c)) {
                return false;
            }
            p = p->children[c];
        }
        return p->end;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* p = root;
        for (auto c : prefix) {
            if (!p->children.count(c)) {
                return false;
            }
            p = p->children[c];
        }
        return true;
    }

    bool searchRegex(string word) {
        return searchRegexHelper(root, word, 0);
    }

private:
    bool searchRegexHelper(TrieNode *node, string word, int idx) {
        for (int i = idx; i < word.size(); i++) {
            if (word[i] == '.') {
                for (auto it = node->children.begin(); it != node->children.end(); it++) {
                    if (searchRegexHelper(it->second, word, i+1)) {
                        return true;
                    }
                }
                return false;
            } else {
                if (!node->children.count(word[i])) {
                    return false;
                }
                node = node->children[word[i]];
            }
        }
        return node->end;
    }
};

#endif // TRIE_H
