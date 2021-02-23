copy Name.txt ..\Interface
cd ..\Interface
If Not Exist 2020.xeq GoTo End
prm/w -vs=350000 run 2020.xeq
:End
