#include <iostream>
#include <random>
#include <vector>
#include <array>

inline
int random_num(int min, int max) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(min, max);
    int randomNumber = dist(mt);
    return randomNumber;
}

std::string get_upper(std::string str) {
    std::string new_string;
    for (char chr : str) {
        if (chr == ',' || chr == ' ') {
            continue;
        }

        if ((int)chr >= 96) {
            new_string += (char)((int)(chr - 32));
        } else {
            new_string += chr;
        }
    }


    return new_string;
}

// Most of these are just for testing
template<typename T>
void print_array(T array[], int size) {
    for (int i = 0; i < size; i++){
        std::cout << array[i] << ", ";
    }
    std::cout << std::endl;
}

template<typename T>
void print_vector(T vec) {
    for (T item : vec) {
        std::cout << item << ", ";
    }
    std::cout << std::endl;
}

template<typename T>
bool item_is_in_vector(T value, std::vector<T>vec) {
    if (vec.size() > 0) {
        for (T item : vec) {
            if (item == value) {
                return true;
            }
        }
    }

    return false;
}

template<typename T>
bool item_is_in_array(T value, T arr[], int size) {
    if (size > 0) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) {
                return true;
            }
        }
    }

    return false;
}

