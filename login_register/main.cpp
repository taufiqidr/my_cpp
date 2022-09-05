#include <iostream>
#include <string>
#include <fstream>

bool IsLoggedIn()
{
    std::string username, password, un, pw;

    std::cout << "Masukkan username: ";
    std::cin >> username;
    std::cout << "Masukkan password: ";
    std::cin >> password;

    std::ifstream read("data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    std::cout << "1: Buat akun\n2: Masuk\nMasukkan pilihan: ";
    std::cin >> choice;
    if (choice == 1)
    {
        std::string username, password;

        std::cout << "Masukkan username baru: ";
        std::cin >> username;
        std::cout << "Masukkan password baru: ";
        std::cin >> password;
        std::ofstream file;
        file.open("data\\" + username + ".txt");
        file << username << std::endl
             << password;
        file.close();

        main();
    }
    else if (choice == 2)
    {
        bool status = IsLoggedIn();
        if (!status)
        {
            std::cout << "Username atau password salah!\n";
            main();
        }
        else
        {
            std::cout << "Login Berhasil!!!\n";
            system("PAUSE");
            return 1;
        }
    }
    else
    {
        std::cout << "Perintah Salah! Masukkan perintah yang benar\n";
        main();
    }
}
