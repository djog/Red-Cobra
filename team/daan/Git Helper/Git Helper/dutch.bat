:home
@echo off
cls
echo Git Helper
echo 1. Inloggen Met GitHub
echo 2. Updaten/Pullen
echo 3. Uploaden/Pushen
echo 4. Open Git Bash ---BETA---
echo 5. GEVARENZONE
echo 6. Stoppen
set /p option=Option: 
if %option% == 1 goto signin
if %option% == 2 goto pull
if %option% == 3 goto push
if %option% == 4 goto openbash
if %option% == 5 goto warningdangerzone
if %option% == 6 exit
goto english
:signin
start signin.sh
goto home
:pull
start pull.sh
goto home
:push
start push.sh
goto home
:warningdangerzone
echo WARNING!
echo DIT ZIJN GEVAARLIJKE FUNCTIES! NOG STEEDS DOORGAAN?
set /p dangerzone=
if %dangerzone% == Y goto dangerzone
if %dangerzone% == y goto dangerzone
goto home
:dangerzone
echo {{{GEVARENZONE!}}}
echo 1. {-FORCE PUSH-}
set /p dangerzone=
if %dangerzone% == 1 goto forcepush
goto home
:forcepush
echo DIT ZIJN GEVAARLIJKE FUNCTIES! NOG STEEDS DOORGAAN?
set /p dangerzone=
if %dangerzone% == Y goto startforcepush
if %dangerzone% == y goto startforcepush
goto home
:startforcepush
start forcepush.sh







