#include <iostream>
using namespace std;

struct Anketa {
    
    string surname; 
    int teleph;
    int hours;
  
};



int main() {
    
    const int n = 3;
    Anketa client[n];
    for(int i = 0; i < n; i++) {
        
        cout << "--------------------------";
        cout << "\nВведите свои данные:\n\n";
        cout << "   " << i+1 << " - Клиент\n\n";
        cout << "1. Фамилия - ";cin >> client[i].surname;
        cout << "2. Телефон - ";cin >> client[i].teleph;
        cout << "\nВведите время записи: ";
        cout << "\n    1. В часах -  ";cin >> client[i].hours;
    }
    int min = client[0].hours;
    
        for(int i = 0; i < n; i++) {
        
        if(client[i].hours == 0) { 
            
            cout << "\n\n Ошибка -> Время записи введино неправильно !";
            return false;
        }
        if (client[i].hours < min) {
                   
            min = client[i].hours;
            cout << "\n-------------------------\n";
            cout << " У " << client[i].surname << " cамая ранняя запись " << " в  " << min <<"ч";
        } 
    }
}
