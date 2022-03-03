#!/usr/bin/bash

echo 'Installing dependencies'
yay -Syyu texlive-latexextra texlive-pictures texlive-science texlive-fontsextra texlive-bibtexextra biber inkscape doxygen python-sphinx ttf-fira-code minted fmt --needed --noconfirm
echo 'export PATH="/usr/bin/vendor_perl:$PATH"' >>~/.bashrc
echo 'alias man="man -Les"' >>~/.bashrc
# http://fpliu-blog.chinacloudsites.cn/it/software/man
echo 'Installing manpages'
yay -S tldr man-pages man-pages-es --needed --noconfirm
echo 'Installing exam-terminal'
yay -S exam-terminal --needed --noconfirm
# python -m venv $HOME/gmsh-env
# source $HOME/gmsh-env/bin/activate
echo 'Actualizando perfiles'
source ~/.bashrc
