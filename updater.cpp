#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int main()
{
    if (getuid()) {
        cout << "Please run as root!" << endl;
        return 1;
    }

    cout << "\e[0;31mUpdating apt cache\e[0;39m" << endl;
    sleep(3);
    system("apt-get update");
    cout << "\e[0;31mUpdating system packages\e[0;39m" << endl;
    sleep(3);
    system("apt-get --yes upgrade");
    cout << "\e[0;31mUpdating kernel\e[0;39m" << endl;
    sleep(3);
    system("apt-get --yes dist-upgrade");
    cout << "\e[0;31mCleaning old packages\e[0;39m" << endl;
    sleep(3);
    system("apt-get --yes autoremove --purge");

    cout << "\e[0;31mUpgrading python3 packages\e[0;39m" << endl;
    sleep(3);
    system("pip3 install --upgrade pip3"0;
    system("pip3 freeze --local | grep -v '^\\-e' | cut -d = -f 1  | xargs -n1 pip3 install -U");
    cout << "\e[0;31mUpgrading python pacakges\e[0;39m" << endl;
    sleep(3);
    system("pip install --upgrade pip");
    system("pip freeze --local | grep -v '^\\-e' | cut -d = -f 1  | xargs -n1 pip install -U");

    cout << "\e[0;31mUpgrading snapd packages\e[0;39m" << endl;
    sleep(3);
    system("snap refresh");

    cout << "\e[0;31mUpgrading ruby gems\e[0;39m" << endl;
    sleep(3);
    system("gem update `gem list | cut -d ' ' -f 1`");
    return 0;
}
