@echo off
echo Configuring ld for go32
echo This makefile will be built for GNUISH make
rem This batch file assumes a unix-type "sed" program

update ..\bfd\hosts\go32.h sysdep.h

echo # Makefile generated by "configure.bat"> Makefile
echo LONGARGS = gcc:ar >> Makefile
echo CC=gcc >> Makefile
echo host_alias=go32 >> Makefile
echo target_alias=go32 >> Makefile

update ../bfd/hosts/go32.h sysdep.h

if exist config.sed del config.sed

echo "s/^	\$(srcdir)\/move-if-change/	update/	">> config.sed
echo "s/:\([^ 	]\)/: \1/g				">> config.sed
echo "s/^	\ *\.\//	go32 /			">> config.sed
echo "s/`echo \$(srcdir)\///g				">> config.sed
echo "s/ | sed 's,\^\\\.\/,,'`//g			">> config.sed
echo "s/^	cd \$(srcdir)[ 	]*;//			">> config.sed

echo "/^####$/ i\					">> config.sed
echo "CC = gcc\						">> config.sed
echo "EMUL=go32\					">> config.sed
echo "EMULATION_OFILES=ego32.o ei386aout.o		">> config.sed

echo "/^SHELL *=/ d					">> config.sed
echo "s/$(SHELL)/sh.exe/g				">> config.sed

echo "s/'"/\\"/g					">> config.sed
echo "s/"'/\\"/g					">> config.sed

echo "/^ldmain.o: ldmain.c/,/fi/ {			">> config.sed
echo "  s/; *\\$//					">> config.sed
echo "  s/-DSCRIPTDIR[^ 	]*/-DSCRIPTDIR=\\".\\"/	">> config.sed
echo "  s/config.status//				">> config.sed
echo "  /ldmain.o:/ p					">> config.sed
echo "  /(CC)/ p					">> config.sed
echo "  d						">> config.sed
echo "}							">> config.sed

echo "s/^SHELL.*$/SHELL=sh.exe/				">> config.sed
echo "s/genscripts.sh/genscripts.dos/g			">> config.sed

echo "s/^ldemul-list.h/not-ldemul-list.h/		">> config.sed

sed -e "s/^\"//" -e "s/\"$//" -e "s/[ 	]*$//" config.sed > config2.sed
sed -f config2.sed Makefile.in >> Makefile
del config.sed
del config2.sed

echo set -a > genscripts.dj
sed -e "/^[a-zA-Z0-9_]*=/ s/^/export /" -e "s/(. \(.*\))/sh \1/" -e "/\.em/ d" genscripts.sh >> genscripts.dj
type emultempl\generic.em >> genscripts.dj
update genscripts.dj genscripts.dos

echo extern ld_emulation_xfer_type ld_go32_emulation; > ldemul-list.h2
echo extern ld_emulation_xfer_type ld_i386aout_emulation; >> ldemul-list.h2
echo #define EMULATION_LIST \>>ldemul-list.h2
echo   &ld_go32_emulation,\>>ldemul-list.h2
echo   &ld_i386aout_emulation,\>>ldemul-list.h2
echo 0>>ldemul-list.h2

update ldemul-list.h2 ldemul-list.h

if exist ldscripts\dostest goto ldscripts
mkdir ldscripts
dir > ldscripts\dostest
:ldscripts
