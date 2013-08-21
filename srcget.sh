#!bin/sh

CLOOCAUSERPASS=aaaa@gmail.com:foooo
CLOOCAPROJECTID=??????????

# source download
curl --user $CLOOCAUSERPASS http://www.clooca.com/api/dl/$CLOOCAPROJECTID > project.zip

