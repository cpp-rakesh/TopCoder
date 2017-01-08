#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

class Aaagmnrs {
public:
    Aaagmnrs() {}
    ~Aaagmnrs() {}

    std::vector<std::string> anagrams(std::vector<std::string> phrases) {
        std::vector<int> erase_list;
        for (std::size_t i = 0; i < phrases.size(); ++i)
            erase_list.push_back(1);

        for (std::size_t i = 0; i < phrases.size() - 1; ++i) {
            for (std::size_t j = i + 1; j < phrases.size(); ++j) {
                if (m_is_anagram(phrases[i], phrases[j]))
                    erase_list[j] = 0;
            }
        }

        std::vector<std::string> result;
        for (std::size_t i = 0; i < phrases.size(); ++i)
            if (erase_list[i])
                result.push_back(phrases[i]);

        return result;
    }

private:
    bool m_is_anagram(std::string A, std::string B) {
        m_strip_down(A);
        m_strip_down(B);

        if (A.size() != B.size())
            return false;

        std::sort(A.begin(), A.end());
        std::sort(B.begin(), B.end());

        for (std::size_t i = 0; i < A.size(); ++i)
            if (A[i] != B[i])
                return false;

        return true;
    }

    void m_strip_down(std::string& phrase) {
        for (std::size_t i = 0; i < phrase.size(); ++i) {
            if (phrase[i] == ' ')
                phrase.erase(phrase.begin() + i);
            if (phrase[i] >= 'A' && phrase[i] <= 'Z')
                phrase[i] = 'a' + phrase[i] - 'A';
        }
    }
};
