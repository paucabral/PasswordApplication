#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_testPasswordButton_clicked();

    void on_generatePasswordButton_clicked();

    void on_viewPasswordsButton_clicked();

    void on_viewPasswords_enterPassword_button_clicked();

    void on_textEncryptionButton_clicked();

    void on_textEncryption_rot13_button_clicked();

    void on_textEncryption_caesarCipher_button_clicked();

    void on_textEncryption_atbash_button_clicked();

    void on_textEncryption_octal_button_clicked();

    void on_textEncryption_hex_button_clicked();

    void on_textEncryption_binary_button_clicked();

    void on_textEncryption_encryptROT13_button_clicked();

    void on_textEncryption_encryptCaesarCipher_button_clicked();

    void on_textEncryption_encryptOctal_button_clicked();

    void on_textEncryption_encryptAtbash_button_clicked();

    void on_textEncryption_encryptBinary_button_clicked();

    void on_textEncryption_decryptHex_button_clicked();

    void on_textEncryption_encryptHex_button_clicked();

    void on_textEncryption_decryptAtbash_button_clicked();

    void on_textEncryption_decryptROT13_button_clicked();

    void on_textEncryption_decryptCaesarCipher_button_clicked();

    void on_textEncryption_decryptBinary_button_clicked();

    void on_textEncryption_decryptOctal_button_clicked();

    void on_testPassword_enterPassword_button_clicked();

    void on_generatePassword_generatePassword_button_clicked();

    void on_login_login_button_clicked();

    void on_generatePassword_savePAssword_button_clicked();

    void on_logoutButton_clicked();

    void on_saveConfirmOkButton_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *csvModel;
};

#endif // MAINWINDOW_H
