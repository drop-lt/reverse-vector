template<class T> T reverse(vector<T> elements){
    T value;
    for (int i = 0; i < (elements.size() / 2 + 0.5); i++){
        value = elements.at(i);
        elements.at(i) = elements.at((elements.size() - 1 - i));
        elements.at((elements.size() - i - 1)) = value;
    }
    return elements;
}
