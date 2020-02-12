#!/bin/bash
user=root
password=password
newuser=default
newpass=password
sleep 10s
echo password > /tmp/password.txt
mysql -u"$user" -p"$(cat /tmp/password.txt)" -e"CREATE USER '$newuser'@'localhost' IDENTIFIED BY '$newpass'; GRANT ALL PRIVILEGES ON *.* TO '$newuser'@'localhost' WITH GRANT OPTION; GRANT ALL PRIVILEGES ON *.* TO '$newuser'@'%' WITH GRANT OPTION; FLUSH PRIVILEGES;"
rm /tmp/password.txt
