/*
  Substitute problem solution from TopCoder.com
  Rakesh Kumar, cpp.rakesh(at)gmail.com
  9th, Jan 2017
 */

#include <cstdio>
#include <string>

class Substitute {
public:
    int getValue(const std::string& key, const std::string& code) {
        int money = 0;
        for (std::size_t i = 0; i < code.size(); ++i) {
            const int pos = key.find(code[i]);
            if (pos != std::string::npos) {
                if (pos == key.size() - 1)
                    money = (money * 10) + 0;
                else
                    money = (money * 10) + pos + 1;
            }
        }

        return money;
    }
};

int main() {
    Substitute s;
    printf("%d\n", s.getValue("TRADINGFEW", "LGXWEV"));
    printf("%d\n", s.getValue("ABCDEFGHIJ", "XJ"));
    printf("%d\n", s.getValue("CRYSTALBUM", "MMA"));
    
    return 0;
}
