# SeniorProject
Senior Project, Group Project
## [Specification Sheet](docs/SpecSheet.md)

### Get the project:
`git clone git@github.com:mzurzolo/SeniorProject.git`

or

`git clone https://github.com/mzurzolo/SeniorProject.git`

### Build it:
* `cd SeniorProject`
* `git checkout master`
* `. build.sh`

### Run it:
* `. run.sh`

or

* `. rerun.sh`


Example `.ssh/config` file (change the User to your user):

```
Host seniorProject
  Hostname seniorprojectaws.myddns.me
  # Port forward for django
  LocalForward 8000 localhost:8000
  # Port forward for MySQL
  LocalForward 3306 localhost:3306
  User mzurzolo
  LogLevel ERROR
```
