# updater
Update all your linux programs (Ubuntu)

## What does it do?
This allows a single binary to upgrade all of your programs, installed via many package managers.

It calls each package manager's update tool in succession so you don't have to do each one individually.

### Services:
 - Apt
 - Pip3
 - Pip
 - Snap
 - Ruby gems
 
 ### Commands run:
  - Apt
      - apt-get update
      - apt-get upgrade
      - apt-get dist-upgrade
  - Pip3/pip
      - Very complex workaround
  - Snap
      - snap refresh
  - Ruby gems
      - gem update $(gem list | cut -d ' ' -f 1)
