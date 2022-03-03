## Latexmk initialization file.

$ENV{'TZ'}='America/Lima';
$pdf_mode = 4;
$postscript_mode = $dvi_mode = 0;
set_tex_cmds( '--shell-escape -interaction=batchmode %O %S' ); #-draftmode