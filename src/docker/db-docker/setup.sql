
-- we need to shift to better passwords that aren't vc'd
-- we'll keep this here until we decide on actual passwords to use
-- # 13. This is clearly not safe
CREATE USER 'default'@'localhost' IDENTIFIED BY 'password';
CREATE USER 'default'@'%' IDENTIFIED BY 'password';
GRANT ALL PRIVILEGES ON *.* TO 'default'@'localhost' WITH GRANT OPTION;
GRANT ALL PRIVILEGES ON *.* TO 'default'@'%' WITH GRANT OPTION;
FLUSH PRIVILEGES;
CREATE DATABASE users;
