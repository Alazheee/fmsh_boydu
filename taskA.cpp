#include <iostream>
#include <string>

using namespace std;

 string caesarGay(const string& text, int shift, const string& alphabet) {
    string encryptedText = "";
    const int N = alphabet.size();
    for (char c : text) {
        int index = alphabet.find(c);
        if (index != string::npos) {
            int newIndex = (index + shift) % N;
            while (newIndex < 0) newIndex += N;
            c = alphabet[newIndex];
        }
        encryptedText += c;
    }
    return encryptedText;
}

string ronaldo(const string& text, int shift, const string& alphabet) {
    return caesarGay(text, -shift, alphabet);
}


int main() {
    setlocale(LC_ALL, "ru");
    const string alphabet = "АаБбВвГгДдЕеЁёЖжЗзИиЙйКкЛлМмНнОоПпРрСсТтУуФфХхЦцЧчШшЩщЪъЫыЬьЭэЮюЯя 0123456789!-.,:;";
    string text;
    int shift;
    cin>>shift;
    string encryptedText = caesarGay(text, shift, alphabet);
    cout << encryptedText << endl;

    return 0;
}
