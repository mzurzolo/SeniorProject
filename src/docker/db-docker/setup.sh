#!/bin/bash
user=root
password=password
newuser=default
newpass=password

mysql -u"$user" -p"$password" -e"CREATE USER '$newuser'@'localhost' IDENTIFIED BY '$newpass'; GRANT ALL PRIVILEGES ON *.* TO '$newuser'@'localhost' WITH GRANT OPTION; CREATE USER '$newuser'@'%' IDENTIFIED BY '$newpass'; GRANT ALL PRIVILEGES ON *.* TO '$newuser'@'%' WITH GRANT OPTION; FLUSH PRIVILEGES;"
